/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1405E4024
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1405E4000 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x1402506E0 (RtlUnicodeStringValidateEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140482E60 (SepCaptureUnicodeStringArray.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  __int64 v6; // r15
  char v8; // r14
  UNICODE_STRING *PoolWithTag; // rdi
  char PreviousMode; // r12
  _KPROCESS *Process; // rdx
  NTSTATUS v12; // ebx
  int v14; // ebx
  SIZE_T v15; // r15
  SE_SET_FILE_CACHE_INFORMATION *v16; // rbx
  __int64 v17; // r8
  ULONG v18; // edx
  __int64 v19; // rdx
  char v20; // [rsp+50h] [rbp-58h]
  unsigned int v21; // [rsp+54h] [rbp-54h]
  PCUNICODE_STRING SourceString[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = SourceFileCount;
  v8 = Flags;
  PoolWithTag = 0LL;
  LOBYTE(v21) = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140362628 )
  {
    v12 = -1073741823;
    goto LABEL_12;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_47;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_58;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_47:
    v12 = -1073741584;
    goto LABEL_12;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_48;
  if ( PreviousMode != 1 )
  {
    if ( (Flags & 1) != 0 )
    {
      LOBYTE(v21) = 15;
      goto LABEL_21;
    }
    if ( (Flags & 2) != 0 )
    {
      LOBYTE(v21) = 8;
      goto LABEL_21;
    }
LABEL_48:
    v12 = -1073741585;
    goto LABEL_12;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_48;
  v8 = Flags | 1;
  if ( (Flags & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v20 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    if ( (BYTE2(Process[2].ActiveProcessors.Bitmap[0]) & 7) != 1 )
    {
      v12 = -1073741790;
      goto LABEL_12;
    }
    v14 = Process[2].ActiveProcessors.Bitmap[0] & 0xF;
    if ( !(unsigned int)SeCompareSigningLevels() )
      v14 = v20 & 0xF;
    v21 = v14;
  }
LABEL_21:
  v15 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v15, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_12;
  }
  if ( PreviousMode == 1 )
  {
    if ( v15 )
    {
      if ( ((unsigned __int8)SourceFiles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&SourceFiles[v15 / 8] > 0x7FFFFFFF0000LL || &SourceFiles[v15 / 8] < SourceFiles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v16 = CacheInformation;
    if ( CacheInformation )
    {
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&CacheInformation->OriginClaimInfo > 0x7FFFFFFF0000LL
        || &CacheInformation->OriginClaimInfo < (SE_FILE_CACHE_CLAIM_INFORMATION *)CacheInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v16 = CacheInformation;
  }
  memmove(PoolWithTag, SourceFiles, v15);
  if ( !v16 )
    goto LABEL_44;
  if ( v16->Size < 0x18 )
  {
    v12 = -1073741580;
    goto LABEL_12;
  }
  if ( !v16->CatalogDirectoryPath.Length
    || (v12 = SepCaptureUnicodeStringArray((__int64)&v16->CatalogDirectoryPath, 1u, PreviousMode, SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v18), v12 >= 0) )
  {
LABEL_44:
    v19 = SourceFileCount;
    if ( (v8 & 6) == 0 )
      goto LABEL_57;
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile != *(HANDLE *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_12;
      }
LABEL_57:
      LOBYTE(v17) = InputSigningLevel;
      LOBYTE(v19) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, UNICODE_STRING *, ULONG, HANDLE, PCUNICODE_STRING))qword_140362628)(
              v8 & 0xF,
              v19,
              v17,
              v21,
              PoolWithTag,
              SourceFileCount,
              TargetFile,
              SourceString[0]);
      goto LABEL_12;
    }
LABEL_58:
    v12 = -1073741582;
  }
LABEL_12:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v12;
}

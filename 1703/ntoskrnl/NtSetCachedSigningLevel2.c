/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1405847B4
 * Callers:
 *     NtSetCachedSigningLevel @ 0x140584790 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x14006EE68 (RtlUnicodeStringValidateEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x1404F7B70 (SepCaptureUnicodeStringArray.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  int v13; // ebx
  SIZE_T v14; // r15
  SE_SET_FILE_CACHE_INFORMATION *v15; // rbx
  __int64 v16; // r8
  ULONG v17; // edx
  __int64 v18; // rdx
  char v20; // [rsp+50h] [rbp-58h]
  unsigned int v21; // [rsp+54h] [rbp-54h]
  PCUNICODE_STRING SourceString[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = SourceFileCount;
  v8 = Flags;
  PoolWithTag = 0LL;
  LOBYTE(v21) = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140348B88 )
  {
    v12 = -1073741823;
    goto LABEL_42;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_49;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_57;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_49:
    v12 = -1073741584;
    goto LABEL_42;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_50;
  if ( PreviousMode != 1 )
  {
    if ( (Flags & 1) != 0 )
    {
      LOBYTE(v21) = 15;
      goto LABEL_15;
    }
    if ( (Flags & 2) != 0 )
    {
      LOBYTE(v21) = 8;
      goto LABEL_15;
    }
LABEL_50:
    v12 = -1073741585;
    goto LABEL_42;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_50;
  v8 = Flags | 1;
  if ( (Flags & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v20 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    if ( (BYTE2(Process[2].ActiveProcessors.Bitmap[0]) & 7) != 1 )
    {
      v12 = -1073741790;
      goto LABEL_42;
    }
    v13 = Process[2].ActiveProcessors.Bitmap[0] & 0xF;
    if ( !(unsigned int)SeCompareSigningLevels() )
      v13 = v20 & 0xF;
    v21 = v13;
  }
LABEL_15:
  v14 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v14, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_42;
  }
  if ( PreviousMode == 1 )
  {
    if ( v14 )
    {
      if ( ((unsigned __int8)SourceFiles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&SourceFiles[v14 / 8] > 0x7FFFFFFF0000LL || &SourceFiles[v14 / 8] < SourceFiles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v15 = CacheInformation;
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
    v15 = CacheInformation;
  }
  memmove(PoolWithTag, SourceFiles, v14);
  if ( !v15 )
    goto LABEL_38;
  if ( v15->Size < 0x18 )
  {
    v12 = -1073741580;
    goto LABEL_42;
  }
  if ( !v15->CatalogDirectoryPath.Length
    || (v12 = SepCaptureUnicodeStringArray((__int64)&v15->CatalogDirectoryPath, 1u, PreviousMode, SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v17), v12 >= 0) )
  {
LABEL_38:
    v18 = SourceFileCount;
    if ( (v8 & 6) == 0 )
    {
LABEL_41:
      LOBYTE(v16) = InputSigningLevel;
      LOBYTE(v18) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, UNICODE_STRING *, ULONG, HANDLE, PCUNICODE_STRING))qword_140348B88)(
              v8 & 0xF,
              v18,
              v16,
              v21,
              PoolWithTag,
              SourceFileCount,
              TargetFile,
              SourceString[0]);
      goto LABEL_42;
    }
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile != *(HANDLE *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_42;
      }
      goto LABEL_41;
    }
LABEL_57:
    v12 = -1073741582;
  }
LABEL_42:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v12;
}

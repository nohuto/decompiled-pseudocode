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

__int64 __fastcall NtSetCachedSigningLevel2(
        char a1,
        char a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r15
  char v8; // r14
  UNICODE_STRING *PoolWithTag; // rdi
  char PreviousMode; // r12
  _KPROCESS *Process; // rdx
  int v12; // ebx
  int v14; // ebx
  SIZE_T v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  ULONG v18; // edx
  __int64 v19; // rdx
  char v20; // [rsp+50h] [rbp-58h]
  unsigned int v21; // [rsp+54h] [rbp-54h]
  PCUNICODE_STRING SourceString[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a4;
  v8 = a1;
  PoolWithTag = 0LL;
  LOBYTE(v21) = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140362628 )
  {
    v12 = -1073741823;
    goto LABEL_12;
  }
  if ( (a2 & 0x30) != 0 )
    goto LABEL_47;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_58;
  if ( (a1 & 6) == 0 && a2 )
  {
LABEL_47:
    v12 = -1073741584;
    goto LABEL_12;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_48;
  if ( PreviousMode != 1 )
  {
    if ( (a1 & 1) != 0 )
    {
      LOBYTE(v21) = 15;
      goto LABEL_21;
    }
    if ( (a1 & 2) != 0 )
    {
      LOBYTE(v21) = 8;
      goto LABEL_21;
    }
LABEL_48:
    v12 = -1073741585;
    goto LABEL_12;
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_48;
  v8 = a1 | 1;
  if ( (a1 & 4) == 0 )
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
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v15] > 0x7FFFFFFF0000LL || &a3[v15] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v16 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v16 = a6;
  }
  memmove(PoolWithTag, a3, v15);
  if ( !v16 )
    goto LABEL_44;
  if ( *(_DWORD *)v16 < 0x18u )
  {
    v12 = -1073741580;
    goto LABEL_12;
  }
  if ( !*(_WORD *)(v16 + 8)
    || (v12 = SepCaptureUnicodeStringArray(v16 + 8, 1u, PreviousMode, SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v18), v12 >= 0) )
  {
LABEL_44:
    v19 = a4;
    if ( (v8 & 6) == 0 )
      goto LABEL_57;
    if ( a4 == 1 )
    {
      if ( a5 != *(_QWORD *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_12;
      }
LABEL_57:
      LOBYTE(v17) = a2;
      LOBYTE(v19) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_140362628)(
              v8 & 0xF,
              v19,
              v17,
              v21,
              PoolWithTag,
              a4,
              a5,
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
  return (unsigned int)v12;
}

/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x14048B484
 * Callers:
 *     NtSetCachedSigningLevel @ 0x14048B460 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x140286140 (RtlUnicodeStringValidateEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     SepCaptureUnicodeStringArray @ 0x140546370 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        char a1,
        char a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r12
  char v8; // r14
  UNICODE_STRING *PoolWithTag; // rdi
  char PreviousMode; // r15
  SIZE_T v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ebx
  ULONG v16; // edx
  __int64 v17; // rdx
  _KPROCESS *Process; // rdx
  _KPROCESS *v20; // rcx
  char v21; // di
  char v22; // bl
  int v23; // eax
  char v24; // cl
  char v25; // [rsp+54h] [rbp-54h]
  PCUNICODE_STRING SourceString[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a4;
  v8 = a1;
  PoolWithTag = 0LL;
  v25 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_1403A5C88 )
  {
    v15 = -1073741823;
    goto LABEL_36;
  }
  if ( (a2 & 0x30) != 0 )
    goto LABEL_43;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_58;
  if ( (a1 & 6) == 0 && a2 )
  {
LABEL_43:
    v15 = -1073741584;
    goto LABEL_36;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_46;
  if ( PreviousMode != 1 )
  {
    if ( (a1 & 1) != 0 )
    {
      v25 = 15;
      goto LABEL_9;
    }
    if ( (a1 & 2) != 0 )
    {
      v25 = 8;
      goto LABEL_9;
    }
LABEL_46:
    v15 = -1073741585;
    goto LABEL_36;
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_46;
  v8 = a1 | 1;
  if ( (a1 & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v20 = Process;
    if ( (BYTE2(Process[2].ActiveProcessors.Bitmap[0]) & 7) != 1 )
    {
      v15 = -1073741790;
      goto LABEL_36;
    }
    v22 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]) & 0xF;
    LOBYTE(Process) = Process[2].ActiveProcessors.Bitmap[0] & 0xF;
    v21 = (char)Process;
    LOBYTE(v20) = v22;
    v23 = SeCompareSigningLevels(v20, Process);
    v24 = v21;
    if ( !v23 )
      v24 = v22;
    v25 = v24;
  }
LABEL_9:
  v11 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v11, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_36;
  }
  if ( PreviousMode == 1 )
  {
    if ( v11 )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v11] > 0x7FFFFFFF0000LL || &a3[v11] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v12 = a6;
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
    v12 = a6;
  }
  memmove(PoolWithTag, a3, v11);
  if ( !v12 )
    goto LABEL_32;
  if ( *(_DWORD *)v12 >= 0x18u )
  {
    if ( !*(_WORD *)(v12 + 8)
      || (LOBYTE(v13) = PreviousMode, v15 = SepCaptureUnicodeStringArray(v12 + 8, 1LL, v13, SourceString), v15 >= 0)
      && (v15 = RtlUnicodeStringValidateEx(SourceString[0], v16), v15 >= 0) )
    {
LABEL_32:
      v17 = a4;
      if ( (v8 & 6) == 0 )
      {
LABEL_35:
        LOBYTE(v14) = v25;
        LOBYTE(v13) = a2;
        LOBYTE(v17) = PreviousMode;
        v15 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_1403A5C88)(
                v8 & 0xF,
                v17,
                v13,
                v14,
                PoolWithTag,
                a4,
                a5,
                SourceString[0]);
        goto LABEL_36;
      }
      if ( a4 == 1 )
      {
        if ( a5 != *(_QWORD *)&PoolWithTag->Length )
        {
          v15 = -1073741581;
          goto LABEL_36;
        }
        goto LABEL_35;
      }
LABEL_58:
      v15 = -1073741582;
    }
  }
  else
  {
    v15 = -1073741580;
  }
LABEL_36:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return (unsigned int)v15;
}

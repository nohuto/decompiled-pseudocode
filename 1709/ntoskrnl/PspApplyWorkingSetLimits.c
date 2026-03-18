/*
 * XREFs of PspApplyWorkingSetLimits @ 0x1407174BC
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x140599D10 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1400D46B0 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x140215AC0 (MmAdjustWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rax
  PVOID *v5; // rbx
  PVOID *result; // rax
  __int64 v7; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v10; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  while ( 1 )
  {
    v2 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || (v3 = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(*(_QWORD *)PspWorkingSetChangeHead + 8LL) != PspWorkingSetChangeHead) )
    {
      __fastfail(3u);
    }
    PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead;
    *(_QWORD *)(v3 + 8) = &PspWorkingSetChangeHead;
    v4 = p_P;
    if ( *p_P != &P )
      __fastfail(3u);
    *(_QWORD *)(v2 + 8) = p_P;
    *(_QWORD *)v2 = &P;
    *v4 = v2;
    p_P = (PVOID *)v2;
    KiStackAttachProcess(*(_KPROCESS **)(v2 + 16), 0, (__int64)&v10);
    MmAdjustWorkingSetSize(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 32), 0, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v2 + 16), 1);
    KiUnstackDetachProcess(&v10, 0LL);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140359F30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140359F30);
  KeAbPostRelease((ULONG_PTR)&qword_140359F30);
  while ( 1 )
  {
    v5 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v7 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v7 + 8) = &P;
    ObfDereferenceObjectWithTag(v5[2], 0x624A7350u);
    ExFreePoolWithTag(v5, 0x72437350u);
  }
  return result;
}

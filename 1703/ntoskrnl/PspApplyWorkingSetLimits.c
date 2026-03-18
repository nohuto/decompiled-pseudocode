/*
 * XREFs of PspApplyWorkingSetLimits @ 0x1406E11DC
 * Callers:
 *     PspSetJobLimitsJobPostCallback @ 0x14045C100 (PspSetJobLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14011DB20 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x14020E360 (MmAdjustWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rax
  PVOID *v5; // rbx
  PVOID *result; // rax
  PVOID *v7; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  $5BC46E0569261879018906DEC3127961 v10; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  while ( 1 )
  {
    v2 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    v3 = *(_QWORD *)PspWorkingSetChangeHead;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || *(_QWORD *)(v3 + 8) != PspWorkingSetChangeHead )
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140341790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140341790);
  KeAbPostRelease((ULONG_PTR)&qword_140341790);
  while ( 1 )
  {
    v5 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    v7 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v7[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v7[1] = &P;
    ObfDereferenceObjectWithTag(v5[2], 0x624A7350u);
    ExFreePoolWithTag(v5, 0x72437350u);
  }
  return result;
}

/*
 * XREFs of PspApplyWorkingSetLimits @ 0x14077B47C
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x140582570 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x1402539A0 (MmAdjustWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  PVOID *v8; // rbx
  PVOID *result; // rax
  __int64 v10; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  _BYTE v13[48]; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  while ( 1 )
  {
    v5 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || (v6 = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(*(_QWORD *)PspWorkingSetChangeHead + 8LL) != PspWorkingSetChangeHead) )
    {
      __fastfail(3u);
    }
    PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead;
    *(_QWORD *)(v6 + 8) = &PspWorkingSetChangeHead;
    v7 = p_P;
    if ( *p_P != &P )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = p_P;
    *(_QWORD *)v5 = &P;
    *v7 = v5;
    p_P = (PVOID *)v5;
    KiStackAttachProcess(*(_KPROCESS **)(v5 + 16), 0, (__int64)v13);
    MmAdjustWorkingSetSize(*(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32), 0, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v5 + 16), 1);
    KiUnstackDetachProcess((__int64)v13, 0LL);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14039D570, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14039D570, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)&qword_14039D570);
  while ( 1 )
  {
    v8 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v10 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v10 + 8) = &P;
    ObfDereferenceObjectWithTag(v8[2], 0x624A7350u);
    ExFreePoolWithTag(v8, 0x72437350u);
  }
  return result;
}

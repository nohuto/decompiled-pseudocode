/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x140566B44
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405848F4 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1406EE778 (CmpTraceHiveFlushBoostedActiveFlusher.c)
 */

void __fastcall CmpBoostActiveHiveWriter(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a2
    && (int)PsGetIoPriorityThread(*(_QWORD *)a2) < 2
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0) )
  {
    PsBoostThreadIo(*(_QWORD *)a2, 0LL);
    IoBoostThreadIoPriority(*(KSPIN_LOCK **)a2, 2, 0);
    KeSetPriorityBoost(*(_QWORD *)a2, 12LL);
    CmpTraceHiveFlushBoostedActiveFlusher();
  }
}

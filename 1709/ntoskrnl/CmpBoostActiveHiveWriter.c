/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x1404E66A0
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140693AF0 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x14068A35C (CmpTraceHiveFlushBoostedActiveFlusher.c)
 */

void __fastcall CmpBoostActiveHiveWriter(__int64 a1, __int64 a2)
{
  __int64 v3; // r8

  if ( *(_QWORD *)a2
    && (int)PsGetIoPriorityThread(*(_QWORD *)a2) < 2
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0) )
  {
    PsBoostThreadIo(*(_QWORD *)a2, 0LL);
    IoBoostThreadIoPriority(*(KSPIN_LOCK **)a2, 2, 0);
    KeSetPriorityBoost(*(_QWORD *)a2, 12, v3);
    CmpTraceHiveFlushBoostedActiveFlusher();
  }
}

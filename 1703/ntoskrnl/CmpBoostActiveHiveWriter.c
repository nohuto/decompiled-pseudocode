/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x14043B768
 * Callers:
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140575D50 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 */

void __fastcall CmpBoostActiveHiveWriter(__int64 a1, __int64 a2)
{
  struct _SINGLE_LIST_ENTRY *v3; // r8
  __int64 v4; // r9

  if ( *(_QWORD *)a2
    && (int)PsGetIoPriorityThread(*(_QWORD *)a2) < 2
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0) )
  {
    PsBoostThreadIo(*(_QWORD *)a2, 0LL);
    IoBoostThreadIoPriority(*(KSPIN_LOCK **)a2, 2, 0);
    KeSetPriorityBoost(*(_QWORD *)a2, 12, v3, v4);
    CmpTraceHiveFlushBoostedActiveFlusher();
  }
}

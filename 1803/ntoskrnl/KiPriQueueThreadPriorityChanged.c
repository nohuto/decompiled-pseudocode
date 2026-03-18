/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x1400AF234
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1400AF538 (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 */

__int64 __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r9
  __int64 v6; // r10
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r11
  char v12; // r10
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    return KiReleaseThreadLockSafe(a2);
  v9 = v4 & 0x100;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  *(_DWORD *)(a2 + 540) = v9 | (unsigned __int8)v2;
  if ( !v5 )
    return KiReleaseThreadLockSafe(a2);
  _interlockedbittestandset(a1, 7u);
  KiReleaseThreadLockSafe(a2);
  if ( v12 )
    result = KiActivateWaiterPriQueue(a1);
  else
    result = KiActivateWaiterQueueWithNoLocks(v11, a1, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    return KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  return result;
}

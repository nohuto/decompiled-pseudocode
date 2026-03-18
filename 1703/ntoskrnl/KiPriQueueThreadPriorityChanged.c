/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x14002CE38
 * Callers:
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140114EE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x140115EEC (KiActivateWaiterPriQueue.c)
 */

__int64 __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  bool v3; // r11
  __int64 v5; // r10
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 result; // rax
  signed __int8 v10; // cf
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0;
  v5 = *(char *)(a2 + 563);
  v6 = (unsigned __int8)*(_DWORD *)(a2 + 540);
  if ( (_DWORD)v6 == (_DWORD)v5 )
    goto LABEL_2;
  v7 = *(_DWORD *)(a2 + 540) & 0x100;
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v8 + 4 * v5 + 536), 1u);
    v3 = (int)v5 < (int)v6;
  }
  result = v7 | (unsigned int)(unsigned __int8)v5;
  *(_DWORD *)(a2 + 540) = result;
  if ( !v3 )
  {
LABEL_2:
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  else
  {
    v10 = _interlockedbittestandset(a1, 7u);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v10 )
      result = KiActivateWaiterQueueWithNoLocks(a2, a1, 0LL);
    else
      result = KiActivateWaiterPriQueue(a1);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      return KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  }
  return result;
}

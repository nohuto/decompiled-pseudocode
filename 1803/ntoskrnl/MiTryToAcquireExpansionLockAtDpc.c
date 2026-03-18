/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400D4DC8
 * Callers:
 *     MiAttachToOwningSession @ 0x1400C6954 (MiAttachToOwningSession.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D508C (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &qword_1403CC4C0;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1) != 0;
}

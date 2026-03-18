/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400764EC
 * Callers:
 *     MiAttachToOwningSession @ 0x140076418 (MiAttachToOwningSession.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x14007651C (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &qword_14036CF80;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock() != 0;
}

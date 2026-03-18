/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400CAD48
 * Callers:
 *     MiAttachToOwningSession @ 0x1400B4828 (MiAttachToOwningSession.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400CAF3C (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  a1[1] = &qword_140389240;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1, &qword_140389240, a3, a4) != 0;
}

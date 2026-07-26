/*
 * XREFs of NdisDprAcquireSpinLock @ 0x1C005A830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisDprAcquireSpinLock(KSPIN_LOCK *a1)
{
  KeAcquireSpinLockAtDpcLevel(a1);
}

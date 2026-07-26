/*
 * XREFs of ndisDereferenceSap @ 0x1C01125F4
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x1C010FB20 (NdisCmDeregisterSapComplete.c)
 *     NdisCmDispatchIncomingCall @ 0x1C010FBA0 (NdisCmDispatchIncomingCall.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceSap(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(P + 5);
  v3 = --*((_DWORD *)P + 9);
  KeReleaseSpinLock(P + 5, v2);
  if ( !v3 )
    ExFreePoolWithTag(P, 0);
}

/*
 * XREFs of ndisDereferenceSap @ 0x1C0114630
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x1C0111B30 (NdisCmDeregisterSapComplete.c)
 *     NdisCmDispatchIncomingCall @ 0x1C0111BB0 (NdisCmDispatchIncomingCall.c)
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

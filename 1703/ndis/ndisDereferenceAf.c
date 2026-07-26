/*
 * XREFs of ndisDereferenceAf @ 0x1C010958C
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0052480 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C01063C0 (NdisClMakeCall.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0106800 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0106920 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C0106B10 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C0106D40 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C0107170 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C0107F10 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C0108310 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C01083E0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C0108710 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  int v4; // ebx

  v1 = P + 48;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v4 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(v1, v3);
  if ( !v4 )
    ExFreePoolWithTag(P, 0);
}

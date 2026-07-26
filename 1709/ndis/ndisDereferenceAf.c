/*
 * XREFs of ndisDereferenceAf @ 0x1C011259C
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00512C0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C010F3C0 (NdisClMakeCall.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C010F810 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C010F930 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C010FB20 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C010FD50 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C0110180 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C0110F20 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C0111320 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C01113F0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C0111720 (NdisCoRequestComplete.c)
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

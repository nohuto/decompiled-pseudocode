/*
 * XREFs of ndisDereferenceAf @ 0x1C01145D8
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0051C10 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C01113C0 (NdisClMakeCall.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0111810 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0111940 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C0111B30 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C0111D60 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C0112190 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C0112F30 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C0113330 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C01133F0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C0113720 (NdisCoRequestComplete.c)
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

/*
 * XREFs of ndisReferenceAf @ 0x1C0112850
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C0051860 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C010F3C0 (NdisClMakeCall.c)
 *     NdisClRegisterSap @ 0x1C010F570 (NdisClRegisterSap.c)
 *     NdisCmDispatchIncomingCall @ 0x1C010FBA0 (NdisCmDispatchIncomingCall.c)
 *     NdisCoOidRequest @ 0x1C0110F20 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C01113F0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C0111D90 (NdisMCmOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceAf(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  char v3; // di
  KIRQL v4; // al

  v1 = (KSPIN_LOCK *)(a1 + 384);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 384));
  if ( *(int *)(a1 + 8) >= 0 )
  {
    ++*(_DWORD *)(a1 + 12);
    v3 = 1;
  }
  KeReleaseSpinLock(v1, v4);
  return v3;
}

/*
 * XREFs of ndisReferenceAf @ 0x1C0109840
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C0052A20 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C01063C0 (NdisClMakeCall.c)
 *     NdisClRegisterSap @ 0x1C0106560 (NdisClRegisterSap.c)
 *     NdisCmDispatchIncomingCall @ 0x1C0106B90 (NdisCmDispatchIncomingCall.c)
 *     NdisCoOidRequest @ 0x1C0107F10 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C01083E0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C0108D80 (NdisMCmOidRequest.c)
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

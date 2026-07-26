/*
 * XREFs of NdisMCoActivateVcComplete @ 0x1C0108E80
 * Callers:
 *     NdisCmActivateVc @ 0x1C0106650 (NdisCmActivateVc.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMCoActivateVcComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters)
{
  __int64 v3; // rbx
  KIRQL v6; // al

  v3 = *((_QWORD *)NdisVcHandle + 9);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 8));
  *(_DWORD *)(v3 + 4) &= ~2u;
  if ( !Status )
    *(_DWORD *)(v3 + 4) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 8), v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, PCO_CALL_PARAMETERS))(v3 + 96))(
    (unsigned int)Status,
    *(_QWORD *)(v3 + 88),
    CallParameters);
}

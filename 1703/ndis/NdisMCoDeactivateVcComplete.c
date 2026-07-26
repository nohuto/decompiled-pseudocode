/*
 * XREFs of NdisMCoDeactivateVcComplete @ 0x1C0108EF0
 * Callers:
 *     NdisCmDeactivateVc @ 0x1C0106A70 (NdisCmDeactivateVc.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMCoDeactivateVcComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle)
{
  __int64 v2; // rbx
  KIRQL v4; // al

  v2 = *((_QWORD *)NdisVcHandle + 9);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
  *(_DWORD *)(v2 + 4) &= ~4u;
  if ( !Status )
    *(_DWORD *)(v2 + 4) &= ~1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 8), v4);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 104))((unsigned int)Status, *(_QWORD *)(v2 + 88));
}

/*
 * XREFs of ndisReferenceRefEx @ 0x1C001E3C8
 * Callers:
 *     ndisReferenceRef @ 0x1C0001618 (ndisReferenceRef.c)
 *     ndisReferenceFilterByHandle @ 0x1C0001634 (ndisReferenceFilterByHandle.c)
 *     ndisReferenceDriver @ 0x1C0002828 (ndisReferenceDriver.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C0003640 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0011418 (ndisReferenceMiniportByHandle.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C788 (ndisGetHigherFilterWithPnpRef.c)
 *     NdisAllocateIoWorkItem @ 0x1C001DF40 (NdisAllocateIoWorkItem.c)
 *     NdisCancelDirectOidRequest @ 0x1C0042530 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0043720 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0043980 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0047228 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C0047510 (ndisRefNextFilterForOidCancellation.c)
 *     NdisFRestartFilter @ 0x1C0058D80 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0058F20 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005B698 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceRefEx(PKSPIN_LOCK SpinLock, unsigned __int8 a2, _DWORD *a3)
{
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // si
  unsigned __int16 v9; // cx

  v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v7 = *((_BYTE *)SpinLock + 10) == 0;
  *a3 = 1;
  v8 = v6;
  if ( v7 )
  {
    v9 = *((_WORD *)SpinLock + 4);
    if ( v9 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      *a3 = 2;
    }
    else
    {
      *((_WORD *)SpinLock + 4) = v9 + 1;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2], a2);
      *a3 = 0;
    }
  }
  KeReleaseSpinLock(SpinLock, v8);
  return *a3 == 0;
}

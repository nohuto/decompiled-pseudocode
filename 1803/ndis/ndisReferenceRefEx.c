/*
 * XREFs of ndisReferenceRefEx @ 0x1C0022014
 * Callers:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001024C (ndisGetHigherFilterWithPnpRef.c)
 *     ndisReferenceRef @ 0x1C00122E0 (ndisReferenceRef.c)
 *     ndisReferenceFilterByHandle @ 0x1C00122FC (ndisReferenceFilterByHandle.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001A448 (ndisReferenceMiniportByHandle.c)
 *     ndisReferenceFilterDriver @ 0x1C001A8DC (ndisReferenceFilterDriver.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001F064 (ndisGetLowerFilterWithPnpRef.c)
 *     NdisAllocateIoWorkItem @ 0x1C0024400 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceDriver @ 0x1C0025174 (ndisReferenceDriver.c)
 *     NdisCancelDirectOidRequest @ 0x1C00435A0 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044800 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00484B0 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C00487AC (ndisRefNextFilterForOidCancellation.c)
 *     ndisSynchronousOidRequest @ 0x1C0048A94 (ndisSynchronousOidRequest_ea_1C0048A94.c)
 *     NdisFRestartFilter @ 0x1C0059480 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0059620 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A9F0 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BDEC (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
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

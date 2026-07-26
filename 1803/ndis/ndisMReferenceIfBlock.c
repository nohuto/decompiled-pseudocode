/*
 * XREFs of ndisMReferenceIfBlock @ 0x1C0019FC4
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0017990 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0020524 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00653F0 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 */

__int64 __fastcall ndisMReferenceIfBlock(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rbx
  KIRQL v5; // si

  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 4056) )
  {
    v4 = *(_QWORD *)(a1 + 4064);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 1448), a2);
    ++*(_DWORD *)(v4 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  return v4;
}

/*
 * XREFs of ndisMReferenceIfBlock @ 0x1C001F6AC
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00048E4 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisMSetGeneralAttributes @ 0x1C00115A0 (ndisMSetGeneralAttributes.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00648B0 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00EB0CC (ndisMiniportFatalError.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
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

/*
 * XREFs of ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015514
 * Callers:
 *     ndisSetOpenRSSParameters @ 0x1C0015640 (ndisSetOpenRSSParameters.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0048100 (ndisQueryMiniportRSSParameters.c)
 *     ndisGetAdapterRssInfo @ 0x1C00E848C (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00E8708 (ndisGetHardwareInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsRssEnabledForMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // r8
  bool v2; // dl

  CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
  v2 = CombinedNdisRSSParameters != 0LL;
  if ( (a1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 && CombinedNdisRSSParameters )
    return (CombinedNdisRSSParameters->Flags & 0x10) == 0 && LOBYTE(CombinedNdisRSSParameters->HashInformation);
  return v2;
}

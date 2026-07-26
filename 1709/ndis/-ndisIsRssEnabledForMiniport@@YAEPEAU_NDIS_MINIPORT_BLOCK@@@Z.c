/*
 * XREFs of ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001CBE8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisSetOpenRSSParameters @ 0x1C001CD14 (ndisSetOpenRSSParameters.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0046E70 (ndisQueryMiniportRSSParameters.c)
 *     ndisGetAdapterRssInfo @ 0x1C00E6A54 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00E6CD0 (ndisGetHardwareInfo.c)
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
    return (CombinedNdisRSSParameters->Flags & 0x10) == 0 && (unsigned __int8)CombinedNdisRSSParameters->HashInformation;
  return v2;
}

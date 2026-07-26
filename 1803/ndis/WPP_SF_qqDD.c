/*
 * XREFs of WPP_SF_qqDD @ 0x1C003A8FC
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001553C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0015640 (ndisSetOpenRSSParameters.c)
 *     ndisFDoDirectOidRequestInternal @ 0x1C0044CE0 (ndisFDoDirectOidRequestInternal.c)
 *     ndisMDoDirectOidRequest @ 0x1C00458E0 (ndisMDoDirectOidRequest.c)
 *     ndisOidPreOffloadCaps @ 0x1C00471E0 (ndisOidPreOffloadCaps.c)
 *     ndisPreTaskOffloadQuery @ 0x1C0047CD8 (ndisPreTaskOffloadQuery.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C5B0 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C8EC (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreRSSv2Parameters @ 0x1C007D020 (ndisOidPreRSSv2Parameters.c)
 *     ndisOidPreRSSParameters @ 0x1C00B59A0 (ndisOidPreRSSParameters.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00C48DC (ndisSetMiniportEthMulticastList.c)
 *     ndisOidPreEthMulticastList @ 0x1C00C49B0 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00C73E0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisOidPreRSSCaps @ 0x1C00C9FF0 (ndisOidPreRSSCaps.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C00DBEE0 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C00DC140 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00DC390 (ndisOidPreReceiveFilterCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C00DEB40 (ndisOidPreTaskOffload.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00F2800 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00F2CE0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F3370 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00F3EC0 (ndisOidPreIovVPortParameters.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}

/*
 * XREFs of WPP_SF_qqDD @ 0x1C0039564
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001CC10 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C001CD14 (ndisSetOpenRSSParameters.c)
 *     ndisFDoDirectOidRequestInternal @ 0x1C0043C00 (ndisFDoDirectOidRequestInternal.c)
 *     ndisMDoDirectOidRequest @ 0x1C0044710 (ndisMDoDirectOidRequest.c)
 *     ndisOidPreOffloadCaps @ 0x1C0045FE0 (ndisOidPreOffloadCaps.c)
 *     ndisPreTaskOffloadQuery @ 0x1C0046A58 (ndisPreTaskOffloadQuery.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B6BC (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B9F4 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreRSSv2Parameters @ 0x1C007C0D0 (ndisOidPreRSSv2Parameters.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00BA65C (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00C27C8 (ndisSetMiniportEthMulticastList.c)
 *     ndisOidPreEthMulticastList @ 0x1C00C2890 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00C3900 (ndisOidPreOffloadEncapsulation.c)
 *     ndisOidPreRSSParameters @ 0x1C00C4530 (ndisOidPreRSSParameters.c)
 *     ndisOidPreRSSCaps @ 0x1C00C5950 (ndisOidPreRSSCaps.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C00DA310 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C00DA590 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00DA7F0 (ndisOidPreReceiveFilterCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C00DCE40 (ndisOidPreTaskOffload.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00EFBE0 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00F00F0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F07B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00F1350 (ndisOidPreIovVPortParameters.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}

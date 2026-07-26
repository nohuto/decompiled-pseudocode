/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C001CCB0
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     NdisFOidRequest @ 0x1C000BF60 (NdisFOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C001CB10 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C0046920 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C0046B70 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C00479B0 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C005E960 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C0060CF4 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C00610B0 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C00614CC (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C0061680 (ndisMResetMiniportInternal.c)
 *     ndisIndicatePMCapabilities @ 0x1C00E0EEC (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00E1D40 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E264C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E2840 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 473) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 663),
    MiniportAdapterHandle,
    StatusIndication);
}

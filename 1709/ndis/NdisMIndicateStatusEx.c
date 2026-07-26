/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C0011180
 * Callers:
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 *     NdisFOidRequest @ 0x1C000A360 (NdisFOidRequest.c)
 *     ndisOidPostLinkSpeed @ 0x1C0045730 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C0045980 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0046740 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C005DF60 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C00602E8 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C00606A0 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060AB4 (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C64 (ndisMResetMiniportInternal.c)
 *     ndisIndicatePMCapabilities @ 0x1C00DF3F0 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00E0560 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E0E74 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E1068 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
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

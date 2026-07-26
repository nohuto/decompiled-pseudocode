/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C001C410
 * Callers:
 *     NdisFOidRequest @ 0x1C000A120 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C001C270 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C0048310 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C0048560 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0049360 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C005E1A0 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C00602AC (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060A74 (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 *     ndisIndicatePMCapabilities @ 0x1C00D4BEC (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00D60D0 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00D6A14 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00D6C10 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
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

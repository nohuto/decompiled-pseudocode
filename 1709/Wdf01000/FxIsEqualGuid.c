/*
 * XREFs of FxIsEqualGuid @ 0x1C003027C
 * Callers:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0030100 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00308C0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C0070CBC (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiProviderCreate @ 0x1C00712A0 (imp_WdfWmiProviderCreate.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0083CA0 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00899F0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}

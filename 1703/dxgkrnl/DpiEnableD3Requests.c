/*
 * XREFs of DpiEnableD3Requests @ 0x1C0001278
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C008C3D4 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C008C4E0 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiGetDxgAdapterSafe @ 0x1C008C920 (DpiGetDxgAdapterSafe.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00A86E0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1C00AB220 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C00AB520 (DpiPdoHandleQueryDeviceRelations.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00D3304 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     DpiFdoStopMiracastSession @ 0x1C0102E30 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleDevicePower @ 0x1C0102F30 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01032E4 (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 *     DxgkChangeD3RequestsState @ 0x1C01051A0 (DxgkChangeD3RequestsState.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDispatchPnp @ 0x1C0116050 (DpiFdoDispatchPnp.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0116260 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoHandleStartDevice @ 0x1C01165E0 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121BA4 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C0123110 (DpiPdoHandleStartDevice.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DpiPollDisplayChildren @ 0x1C01C2850 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01C3C10 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01C4780 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01C6500 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01C66BC (DpiEnableMsBddFallbackDriver.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01C7500 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C01C8674 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C01C9CD0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C01C9E10 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C01C9F60 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C01CA050 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C01CA190 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C01CA3F0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C01CA550 (DpiFdoThermalPassiveCooling.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01CACA0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01CC140 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C01CD8D0 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01CDA80 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C01CE1F0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C01CE6C0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C01CE8B0 (DpiPdoPollingWorkItem.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01CFA78 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedDecrement((volatile signed __int32 *)(result + 3888));
  return result;
}

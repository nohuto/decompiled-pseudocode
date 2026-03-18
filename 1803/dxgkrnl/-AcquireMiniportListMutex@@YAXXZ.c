/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C00084B0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiEnterSystemDisplay @ 0x1C003BF30 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C003D0B0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C003E0D0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0041AD0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0041C30 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiValidateDeviceName @ 0x1C009F9E4 (DpiValidateDeviceName.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00A29F4 (DpiGetDxgAdapterSafe.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 *     DpiControlEtwLogging @ 0x1C01EE4DC (DpiControlEtwLogging.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C01F5314 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01F5450 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 *     DpiFdoStopMiracastSession @ 0x1C01FB3E0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01FEFE0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01FF2C0 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C0200168 (DxgkHandleMiracastEscape.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0200880 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 *     DpiCleanup @ 0x1C0204A7C (DpiCleanup.c)
 *     DpiInitializeEx @ 0x1C0205138 (DpiInitializeEx.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C0205FB0 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02073D4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0207E00 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C020807C (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0209E98 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C007A788, (__int64)KeGetCurrentThread());
}

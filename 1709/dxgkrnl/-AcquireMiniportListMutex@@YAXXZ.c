/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000F410 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiEnterSystemDisplay @ 0x1C0011370 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C002EFC0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C002FFE0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0033200 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0033360 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiValidateDeviceName @ 0x1C00FC024 (DpiValidateDeviceName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00FC1C0 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 *     DpiFdoStopMiracastSession @ 0x1C01019A0 (DpiFdoStopMiracastSession.c)
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiInitializeEx @ 0x1C011F6D0 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121708 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0122784 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1C01DBB54 (DpiControlEtwLogging.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C01DDA6C (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01E1628 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01E1908 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C01E27B8 (DxgkHandleMiracastEscape.c)
 *     DpiCleanup @ 0x1C01E4C78 (DpiCleanup.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01E548C (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01E6520 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C01E6A24 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C0060888, (__int64)KeGetCurrentThread());
}

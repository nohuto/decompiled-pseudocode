/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C000F314
 * Callers:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000F238 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiPdoDispatchPower @ 0x1C0010DD0 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C0011370 (DpiEnterSystemDisplay.c)
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C002E788 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0033200 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0033360 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1C00B9690 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C00B9DA0 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00B9E40 (DpiPdoDispatchInternalIoctl.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00FB408 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 *     DpiFdoHandleSystemPower @ 0x1C01011E8 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01019A0 (DpiFdoStopMiracastSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoDispatchPnp @ 0x1C011ACC0 (DpiFdoDispatchPnp.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C011AED0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoHandleStartDevice @ 0x1C011B250 (DpiFdoHandleStartDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121708 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C01236C0 (DpiPdoHandleStartDevice.c)
 *     DpiPollDisplayChildren @ 0x1C01DBF3C (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01DD5A0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01DE1E0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01E062C (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01E07E8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01E1628 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C01E27B8 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C01E3EA0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C01E4040 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C01E4190 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C01E4300 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C01E44A0 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C01E4700 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C01E4870 (DpiFdoThermalPassiveCooling.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01E6520 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01E7E90 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C01E8600 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C01E8AD0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C01E8CC0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3904), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 3912LL));
  v2 = *(_DWORD *)(a1 + 3968);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 3912LL));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 3920), Executive, 0, 0, 0LL);
}

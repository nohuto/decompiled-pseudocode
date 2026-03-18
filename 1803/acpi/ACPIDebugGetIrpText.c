/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C000167C
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00713C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0071690 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0073030 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00732C0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00736B0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00739C0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C0073B70 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0075650 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0075FF0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C0076350 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C0076420 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C0076830 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0077BA0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C007B4F0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C007B640 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007BA80 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStartDevice @ 0x1C007C120 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C007C270 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007C600 (ACPIFilterIrpStopDevice.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C007C790 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C007CAB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C0087530 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0087654 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C0087860 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0087A90 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0087D40 (ACPIRootIrpQueryInterface.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0087F60 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C0088090 (ACPIRootIrpStopDevice.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = a2;
  if ( a2 >= 0x1Au )
    v2 = 26LL;
  return ACPIDispatchPnpTableNames[v2];
}

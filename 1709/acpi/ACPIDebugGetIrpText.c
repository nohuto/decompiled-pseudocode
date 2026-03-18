/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C0004E3C
 * Callers:
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0085C20 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0085F50 (ACPIFilterIrpStartDevice.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0086060 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpQueryId @ 0x1C0086AD0 (ACPIBusIrpQueryId.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0087230 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00874E0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087DC0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C008C280 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008C7B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C008CAE0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C008D3BC (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0094760 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0094AB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C0094E30 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C00954E0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00963D0 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0096670 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00968E0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009E210 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C009E4A0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C009E890 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C009EB90 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C009ED40 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009FEC0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00A02C0 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00A0390 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00A05F0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C00A1DB0 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00A2080 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00A2270 (ACPIFilterIrpStopDevice.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00A2400 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00A68E0 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00A6A10 (ACPIRootIrpStopDevice.c)
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

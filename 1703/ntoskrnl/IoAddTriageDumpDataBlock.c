/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x140166F20
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x140005BB8 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140067520 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x1400A9314 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x1400F0FF0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     IoGetDeviceInstanceName @ 0x1401477FC (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x140149710 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401747D0 (KiMarkBugCheckRegions.c)
 *     IopUpdateMinidumpContext @ 0x1401F2830 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401F6ED8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401F6FE4 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401F717C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F7284 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401F7374 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401F74F8 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401F75F8 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401F7694 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x1401F7E80 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402006D8 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x140212FAC (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1402136C4 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402271CC (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x14022735C (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x14025F820 (WheapAddToDumpFile.c)
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140406CAC (PopRequestWrite.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     IopDestroyDeviceNode @ 0x14044C1A0 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x140466970 (IoGetDeviceInterfaces.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0008 (PipProcessEnumeratedChildDevice.c)
 *     IoGetDevicePropertyData @ 0x1404E59C0 (IoGetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 *     IoReportTargetDeviceChange @ 0x140574FF0 (IoReportTargetDeviceChange.c)
 *     IoSetDevicePropertyData @ 0x1405B8D60 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1405C2994 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x1405CB2A0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1405CB374 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x1406921F0 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x1406924E0 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1406941D0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1406943C0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x140166F74 (IopAddTriageDumpDataBlock.c)
 */

__int64 __fastcall IoAddTriageDumpDataBlock(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int128 *v4; // [rsp+38h] [rbp-10h]

  v3[0] = IopNumTriageDumpDataBlocks;
  v4 = &IopTriageDumpDataBlocks;
  v3[1] = 256;
  result = IopAddTriageDumpDataBlock(1, (unsigned int)v3, (unsigned int)v3, a1, a2);
  IopNumTriageDumpDataBlocks = v3[0];
  return result;
}

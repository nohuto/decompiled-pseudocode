/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x140185870
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400751F0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14009F534 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x1400DC40C (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140106870 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x140106AE0 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x140106CD0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140107070 (IopCheckVpbMounted.c)
 *     IoInvalidateDeviceRelations @ 0x140145A30 (IoInvalidateDeviceRelations.c)
 *     PiDmaGuardProcessPreStart @ 0x14014714C (PiDmaGuardProcessPreStart.c)
 *     IoGetDeviceInstanceName @ 0x14015F4A0 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x14016C7D0 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x140193188 (KiMarkBugCheckRegions.c)
 *     sub_1401A13EC @ 0x1401A13EC (sub_1401A13EC.c)
 *     IopUpdateMinidumpContext @ 0x1402354E0 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140239A68 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140239AD0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140239B78 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140239D14 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140239DD0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140239ED8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140239FC8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14023A124 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14023A224 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14023A2C0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14023A980 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402444E4 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x140257290 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140257910 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402713B4 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x14027153C (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x1402BE904 (WheapAddToDumpFile.c)
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     IoGetDeviceInterfaces @ 0x14048FF60 (IoGetDeviceInterfaces.c)
 *     IopDestroyDeviceNode @ 0x140577FF0 (IopDestroyDeviceNode.c)
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1405C4A18 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1405D1B3C (PipProcessEnumeratedChildDevice.c)
 *     PnpNotifyDriverCallback @ 0x1405E28F8 (PnpNotifyDriverCallback.c)
 *     IoReportTargetDeviceChange @ 0x1405E5D70 (IoReportTargetDeviceChange.c)
 *     PiQueryPowerRelations @ 0x140603784 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140603978 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoSetDevicePropertyData @ 0x140606140 (IoSetDevicePropertyData.c)
 *     IoGetDmaAdapter @ 0x1406478F0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1406479C4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x140722F20 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140723210 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1407259E0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140725BD0 (IoReportResourceUsage.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1407292E0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x1401858C4 (IopAddTriageDumpDataBlock.c)
 */

__int64 __fastcall IoAddTriageDumpDataBlock(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v4; // [rsp+38h] [rbp-10h]

  v3[0] = IopNumTriageDumpDataBlocks;
  v4 = &IopTriageDumpDataBlocks;
  v3[1] = 256;
  result = IopAddTriageDumpDataBlock(1, (unsigned int)v3, (unsigned int)v3, a1, a2);
  IopNumTriageDumpDataBlocks = v3[0];
  return result;
}

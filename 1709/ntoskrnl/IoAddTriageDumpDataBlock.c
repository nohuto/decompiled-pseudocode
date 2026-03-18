/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14015ACC8
 * Callers:
 *     IopCheckDeviceAndDriver @ 0x140085280 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1400855E0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140085AF0 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x1400A4DCC (IopIncrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400FA764 (IopDecrementDeviceObjectRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400FB110 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PiDmaGuardProcessPreStart @ 0x1400FCF80 (PiDmaGuardProcessPreStart.c)
 *     IoGetDeviceInstanceName @ 0x1400FE86C (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x140156E10 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401690CC (KiMarkBugCheckRegions.c)
 *     sub_140176C50 @ 0x140176C50 (sub_140176C50.c)
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401FCD2C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401FCE38 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401FCFD0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401FD0DC (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401FD1CC (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401FD328 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401FD428 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401FD4C4 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x1401FDFB0 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140206B68 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x14021AD50 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x14021B6A8 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x140239EA0 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x14023A02C (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x1402893D4 (WheapAddToDumpFile.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140517228 (PiDmaGuardProcessNewDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x140517360 (IoGetDeviceInterfaces.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     IoSetDevicePropertyData @ 0x14052F300 (IoSetDevicePropertyData.c)
 *     IoGetDevicePropertyData @ 0x14054F460 (IoGetDevicePropertyData.c)
 *     PipProcessEnumeratedChildDevice @ 0x140553688 (PipProcessEnumeratedChildDevice.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 *     PiQueryPowerRelations @ 0x14055EFD0 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14055F1C4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 *     IopDestroyDeviceNode @ 0x1405887A0 (IopDestroyDeviceNode.c)
 *     IoGetDmaAdapter @ 0x140599080 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140599154 (PiGetDmaAdapterFromBusInterface.c)
 *     IoReportTargetDeviceChange @ 0x14059A790 (IoReportTargetDeviceChange.c)
 *     IoAssignResources @ 0x1406BDEB0 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x1406BE1A0 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1406BFF90 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1406C0180 (IoReportResourceUsage.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1406C3200 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x14015AD1C (IopAddTriageDumpDataBlock.c)
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

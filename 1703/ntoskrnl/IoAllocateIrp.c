/*
 * XREFs of IoAllocateIrp @ 0x140081530
 * Callers:
 *     CcSetValidData @ 0x14008142C (CcSetValidData.c)
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14024DE44 (SmKmIssueVolumeIo.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14043C110 (WmipSendWmiIrpToTraceDeviceList.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     PnpAsynchronousCall @ 0x1404DB8E0 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14055BFFC (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x140580D5C (WmipSendWmiIrp.c)
 *     WmipGetFilePDO @ 0x140584258 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x1405A0034 (WmipSetTraceNotify.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x1405D6E58 (PopAcquireCoolingInterface.c)
 *     IopEjectDevice @ 0x1406A792C (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x140702254 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     <none>
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota, retaddr);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, StackSize, ChargeQuota, retaddr);
  return (PIRP)IovAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}

/*
 * XREFs of IoAllocateIrp @ 0x1400DEBD0
 * Callers:
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     CcSetValidData @ 0x1400DE714 (CcSetValidData.c)
 *     SmKmIssueVolumeIo @ 0x140273624 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x1405532A4 (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1405580F0 (IopFilterResourceRequirementsCall.c)
 *     PopFxRegisterDeviceWorker @ 0x1405CA234 (PopFxRegisterDeviceWorker.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x1405E5190 (WmipGetFilePDO.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x1406D25EC (IopEjectDevice.c)
 *     PopAcquireCoolingInterface @ 0x1406F6C9C (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14073A558 (SmKmIsVolumeIoPossible.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400FFE44 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1407A4620 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, StackSize, ChargeQuota, retaddr);
  return (PIRP)IovAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}

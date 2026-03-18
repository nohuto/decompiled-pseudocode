/*
 * XREFs of IoAllocateIrp @ 0x1400075E0
 * Callers:
 *     CcSetValidData @ 0x1400074E4 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x1402A73DC (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x140499488 (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1405DBF84 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x1405DCF88 (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x1405E2C94 (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x140600BEC (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x140613250 (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x140614C84 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x140626BD4 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140627358 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1406464B0 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x14073A03C (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14079D55C (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140006144 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1408115F0 (IovAllocateIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  BOOLEAN v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ChargeQuota;
  ChargeQuota = StackSize;
  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, StackSize, v2, retaddr);
}

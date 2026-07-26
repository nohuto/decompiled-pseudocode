/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C0020ACC
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014340 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00147F0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0020870 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C003BBA0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C003BFF0 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C003C240 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003C360 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003C720 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004A9B4 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AB10 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C006D0A0 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006D420 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C006DB50 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006DE50 (ndisOidPreIovEnumVPorts.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00B3DF0 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00B41C0 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00C54A8 (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00C5A04 (ndisPreSetPMParameters.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00E0FD4 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00E3FD4 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00F1D8C (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00F1F88 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00F28F0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00F2B30 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F2DE0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F2F40 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00F3080 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00F31B0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F32B0 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F3370 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00F3770 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00F3860 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00F39A0 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00F3AE0 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00F3BE0 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00F3EC0 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00F4300 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00F4410 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00FB0D0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00FB420 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetOidSourceHandle(__int64 a1)
{
  __int64 i; // rax

  for ( i = a1 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  return *(_QWORD *)(i + 32);
}

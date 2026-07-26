/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C00031DC
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0002460 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0002550 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0002F80 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C00396F4 (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C003A810 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C003AC70 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C003AEC0 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003AFF0 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003B3C0 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003B5FC (ndisSetReceiveFilter.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049570 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00497B0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C006C840 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006CBB0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C006D2E0 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006D5F0 (ndisOidPreIovEnumVPorts.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00ABFF4 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00AD8AC (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00ADE04 (ndisPreSetPMParameters.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00DF510 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00E0090 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00E285C (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00EF16C (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00EF384 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00EFCE0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00EFF20 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F0200 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F0370 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00F04C0 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00F05F0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F0700 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F07B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00F0BE0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00F0CD0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00F0E20 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00F0F70 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00F1070 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00F1350 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00F1790 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00F18B0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00F84E0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00F8830 (ndisOidPrePDOpenProvider.c)
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

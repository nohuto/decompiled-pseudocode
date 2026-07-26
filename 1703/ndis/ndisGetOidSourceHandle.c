/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C001F33C
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C001F0E0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C003CC6C (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C003DD80 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C003E1D0 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C003E420 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003E550 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003E920 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004BA7C (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C004BB50 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004BD90 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C004BF00 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C006B2E0 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006B650 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C006BD80 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006C090 (ndisOidPreIovEnumVPorts.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BA92C (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00BAE84 (ndisPreSetPMParameters.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00D4D0C (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00D4EDC (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00D5BF0 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00D84B0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00E5B3C (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00E5D54 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00E66B0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00E6900 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00E6BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00E6D60 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00E6EA0 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00E6FE0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00E70F0 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00E71B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00E75F0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00E76E0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00E7830 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00E7980 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00E7A90 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00E7D80 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00E8200 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00E8330 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00EEF00 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00EF250 (ndisOidPrePDOpenProvider.c)
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

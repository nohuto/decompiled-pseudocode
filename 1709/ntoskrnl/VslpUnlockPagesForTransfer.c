/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140159CE0
 * Callers:
 *     VslValidateSecureImagePages @ 0x140159BB0 (VslValidateSecureImagePages.c)
 *     VslFreePoolTransferObject @ 0x1401F1E4C (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1401F1E98 (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x1401F2140 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401F2494 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1401F2608 (VslRegisterLogPages.c)
 *     VslCreateSecureImageSection @ 0x1401F2EE0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1401F2FE0 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1401F3330 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1401F34E0 (VslTransferSecureImageVersionResource.c)
 *     VslCreateEnclave @ 0x1406B355C (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x1406B3700 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x1406B3974 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x1406B3C14 (VslGetOnDemandDebugChallenge.c)
 *     VslLoadEnclaveModule @ 0x1406B3F54 (VslLoadEnclaveModule.c)
 *     VslStartSecureProcessor @ 0x1406B41D8 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
      MmUnlockPages(*(PMDL *)a1);
    ExFreePoolWithTag(*(PVOID *)a1, 0);
  }
}

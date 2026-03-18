/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1401EE0D4
 * Callers:
 *     VslFreePoolTransferObject @ 0x1401ECFCC (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1401ED018 (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x1401ED320 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401ED628 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1401ED798 (VslRegisterLogPages.c)
 *     VslCreateSecureImageSection @ 0x140269FD0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14026A0D0 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x14026A410 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14026A670 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14026A950 (VslValidateSecureImagePages.c)
 *     VslCreateSecureSection @ 0x140687940 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140687BB0 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x140687E54 (VslGetOnDemandDebugChallenge.c)
 *     VslStartSecureProcessor @ 0x1406882A8 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1407F6C58 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 a1)
{
  MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    MmUnlockPages(*(PMDL *)a1);
  ExFreePoolWithTag(*(PVOID *)a1, 0);
}

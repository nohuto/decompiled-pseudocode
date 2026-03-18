/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x14015CF14
 * Callers:
 *     VslFillSecureAllocation @ 0x14015C7D0 (VslFillSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14015C8E0 (VslCreateSecureImageSection.c)
 *     VslPrepareSecureImageRelocations @ 0x14015CAB0 (VslPrepareSecureImageRelocations.c)
 *     VslFreePoolTransferObject @ 0x14015CD8C (VslFreePoolTransferObject.c)
 *     VslValidateSecureImagePages @ 0x14015CDE0 (VslValidateSecureImagePages.c)
 *     VslGetEtwDebugId @ 0x14022F804 (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x14022FC60 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14022FFB4 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x140230128 (VslRegisterLogPages.c)
 *     VslTransferSecureImageVersionResource @ 0x140230A10 (VslTransferSecureImageVersionResource.c)
 *     VslCreateEnclave @ 0x14071818C (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140718330 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x1407185A4 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x140718844 (VslGetOnDemandDebugChallenge.c)
 *     VslLoadEnclaveModule @ 0x140718B84 (VslLoadEnclaveModule.c)
 *     VslStartSecureProcessor @ 0x140718E08 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 a1)
{
  struct _MDL *v2; // rcx

  if ( (*(_BYTE *)(a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
  {
    v2 = *(struct _MDL **)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    {
      MmUnlockPages(v2);
      v2 = *(struct _MDL **)a1;
    }
    ExFreePoolWithTag(v2, 0);
  }
}

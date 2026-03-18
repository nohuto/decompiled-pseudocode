/*
 * XREFs of VslpLockPagesForTransfer @ 0x14015CF58
 * Callers:
 *     VslFillSecureAllocation @ 0x14015C7D0 (VslFillSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14015C8E0 (VslCreateSecureImageSection.c)
 *     VslPrepareSecureImageRelocations @ 0x14015CAB0 (VslPrepareSecureImageRelocations.c)
 *     VslAllocatePool @ 0x14015CCC0 (VslAllocatePool.c)
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
 *     VslStartSecureProcessor @ 0x140718E08 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     VslpLockMdlForTransfer @ 0x14015D09C (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v6; // r12
  unsigned int v9; // r10d
  int v10; // edi
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v12; // rbx
  int v13; // edi
  __int16 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp+10h]

  v6 = a3;
  v15 = a2;
  v16 = a2 & 0xFFF;
  v9 = 8 * (((unsigned __int64)a3 + 4095 + v16) >> 12) + 48;
  v10 = 1;
  if ( (a5 & 1) != 0 )
    v9 = 4096;
  if ( (a5 & 4) != 0 )
    v9 = (v9 + 4095) & 0xFFFFF000;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x54736D56u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (((unsigned __int64)(v6 + v16 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = v15 & 0xFFF;
  PoolWithTag->ByteCount = v6;
  if ( (a5 & 6) != 0 )
  {
    MmBuildMdlForNonPagedPool(PoolWithTag);
  }
  else if ( (_DWORD)v6 )
  {
    if ( !a4 )
      v10 = 0;
    MiProbeAndLockPages(PoolWithTag, 0, v10);
  }
  v13 = VslpLockMdlForTransfer(a1, v12, a5);
  if ( v13 < 0 )
  {
    if ( (v12->MdlFlags & 2) != 0 )
      MmUnlockPages(v12);
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v13;
  }
  else
  {
    *(_DWORD *)(a1 + 64) |= 8u;
    return 0LL;
  }
}

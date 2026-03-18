/*
 * XREFs of VslpLockPagesForTransfer @ 0x140159D24
 * Callers:
 *     VslValidateSecureImagePages @ 0x140159BB0 (VslValidateSecureImagePages.c)
 *     VslAllocatePool @ 0x1401F19C0 (VslAllocatePool.c)
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
 *     VslStartSecureProcessor @ 0x1406B41D8 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     VslpLockMdlForTransfer @ 0x140159E68 (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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

/*
 * XREFs of VslpLockPagesForTransfer @ 0x1401EDEB8
 * Callers:
 *     VslAllocatePool @ 0x1401ECB60 (VslAllocatePool.c)
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
 *     MmBuildMdlForNonPagedPool @ 0x14005A730 (MmBuildMdlForNonPagedPool.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(unsigned __int64 *a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  __int64 v6; // r15
  __int64 v9; // r12
  unsigned int v10; // eax
  int v11; // edi
  _DWORD *PoolWithTag; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // [rsp+60h] [rbp+18h]

  v6 = a3;
  v9 = a2 & 0xFFF;
  v10 = 8 * ((v9 + (unsigned __int64)a3 + 4095) >> 12) + 48;
  v15 = v10;
  v11 = 1;
  if ( (a5 & 1) != 0 )
    v10 = 4096;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x54736D56u);
  *a1 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_WORD *)PoolWithTag + 4) = 8 * (((unsigned __int64)(v9 + v6 + 4095) >> 12) + 6);
  *((_WORD *)PoolWithTag + 5) = 0;
  *((_QWORD *)PoolWithTag + 4) = a2 & 0xFFFFFFFFFFFFF000uLL;
  PoolWithTag[11] = a2 & 0xFFF;
  PoolWithTag[10] = v6;
  if ( (a5 & 2) != 0 )
  {
    MmBuildMdlForNonPagedPool((PMDL)*a1);
  }
  else if ( (_DWORD)v6 )
  {
    if ( !a4 )
      v11 = 0;
    MiProbeAndLockPages((_DWORD *)*a1, 0, v11);
  }
  v14 = *a1;
  a1[1] = 0LL;
  *((_WORD *)a1 + 8) = 8 * ((((v14 & 0xFFF) + v15 + 4095LL) >> 12) + 6);
  *((_WORD *)a1 + 9) = 0;
  a1[5] = v14 & 0xFFFFFFFFFFFFF000uLL;
  *((_DWORD *)a1 + 13) = v14 & 0xFFF;
  *((_DWORD *)a1 + 12) = v15;
  MiProbeAndLockPages((_DWORD *)a1 + 2, 0, 0);
  return 0LL;
}

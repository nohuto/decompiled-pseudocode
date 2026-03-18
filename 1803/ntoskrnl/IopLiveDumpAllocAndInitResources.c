/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x14071F3A0
 * Callers:
 *     IoCaptureLiveDump @ 0x14071EC24 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     VslIsSecureKernelRunning @ 0x1400D2E2C (VslIsSecureKernelRunning.c)
 *     RtlClearAllBitsEx @ 0x140139760 (RtlClearAllBitsEx.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x14016E840 (HvlGetHypervisorEncryptionDomain.c)
 *     IopGetPhysicalMemoryBlock @ 0x140183938 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x1401844B0 (RtlSetAllBitsEx.c)
 *     HvlGetEncryptedDataDomains @ 0x140187330 (HvlGetEncryptedDataDomains.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x14022CC78 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140238948 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1402389C4 (IopLiveDumpTraceBufferAllocation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14048217C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x140482C64 (IopLiveDumpResetCorralContext.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14071F948 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14071FB28 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14071FC44 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x140720030 (IopLiveDumpReleaseResources.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  __int64 v2; // r12
  unsigned __int64 v4; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 *v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+70h] [rbp-38h]
  int v8; // [rsp+74h] [rbp-34h]

  v2 = MEMORY[0xFFFFF78000000008];
  if ( !IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
  {
    *(_QWORD *)(a1 + 240) = a1;
    IopLiveDumpResetCorralContext(a1 + 240);
    IopGetPhysicalMemoryBlock();
  }
  if ( stru_1403983C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403983C0, 0x200000000000uLL) )
  {
    v7 = 8;
    v8 = 0;
    v4 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v6 = &v4;
    TlgWrite(&stru_1403983C0, &unk_140309379, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  IopLiveDumpReleaseResources(a1);
  return 3221226048LL;
}

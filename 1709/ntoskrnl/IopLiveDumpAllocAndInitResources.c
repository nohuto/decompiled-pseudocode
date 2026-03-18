/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x1406BA400
 * Callers:
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     RtlClearAllBitsEx @ 0x14010C850 (RtlClearAllBitsEx.c)
 *     VslIsSecureKernelRunning @ 0x140132620 (VslIsSecureKernelRunning.c)
 *     HvlGetEncryptedDataDomains @ 0x14014FA48 (HvlGetEncryptedDataDomains.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014FA60 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x140157ED0 (RtlSetAllBitsEx.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x14015D510 (HvlGetHypervisorEncryptionDomain.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1401EFC68 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1401FBC70 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401FBCEC (IopLiveDumpTraceBufferAllocation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14042B67C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x14042C130 (IopLiveDumpResetCorralContext.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1406BA9B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1406BAB9C (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1406BACB8 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x1406BB07C (IopLiveDumpReleaseResources.c)
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
  if ( stru_1403551C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403551C0, 0x200000000000uLL) )
  {
    v7 = 8;
    v8 = 0;
    v4 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v6 = &v4;
    TlgWrite(&stru_1403551C0, &unk_1402CF9AD, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  IopLiveDumpReleaseResources(a1);
  return 3221226048LL;
}

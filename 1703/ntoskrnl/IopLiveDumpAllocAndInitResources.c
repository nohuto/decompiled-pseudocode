/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x14068E734
 * Callers:
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     VslIsSecureKernelRunning @ 0x14003CC70 (VslIsSecureKernelRunning.c)
 *     RtlClearAllBitsEx @ 0x140073BE0 (RtlClearAllBitsEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x14014B870 (HvlGetHypervisorEncryptionDomain.c)
 *     RtlSetAllBitsEx @ 0x140158BD0 (RtlSetAllBitsEx.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401661AC (IopGetPhysicalMemoryBlock.c)
 *     HvlGetEncryptedDataDomains @ 0x1401686D0 (HvlGetEncryptedDataDomains.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1401EAA9C (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1401F5E28 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401F5EA4 (IopLiveDumpTraceBufferAllocation.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14041663C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x140417100 (IopLiveDumpResetCorralContext.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14068EED8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14068EFF4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x14068F3B0 (IopLiveDumpReleaseResources.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  char *v2; // r14
  __int64 v3; // r12
  int MappingResources; // edi
  char *PhysicalMemoryBlock; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  PVOID PoolWithTag; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rbp
  __int64 EncryptedDataDomains; // r15
  SIZE_T v13; // rbp
  PVOID v14; // rax
  void *v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  PVOID v18; // rax
  __int64 v19; // r9
  MM_SYSTEMSIZE HypervisorEncryptionDomain; // eax
  __int64 v21; // rdx
  PVOID v22; // rax
  __int64 v23; // r9
  __int64 i; // rdi
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rsi
  __int64 IndependentPages; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  void *v38; // rcx
  unsigned __int64 v40; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 *v44; // [rsp+68h] [rbp-50h]
  int v45; // [rsp+70h] [rbp-48h]
  int v46; // [rsp+74h] [rbp-44h]

  v2 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
    goto LABEL_2;
  *(_QWORD *)(a1 + 240) = a1;
  IopLiveDumpResetCorralContext(a1 + 240);
  PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
  v2 = PhysicalMemoryBlock;
  if ( !PhysicalMemoryBlock )
    goto LABEL_4;
  v6 = *(_DWORD *)PhysicalMemoryBlock;
  if ( !v6 )
  {
    MappingResources = -1073741595;
    goto LABEL_38;
  }
  v7 = *(_QWORD *)&v2[16 * (v6 - 1) + 16] + *(_QWORD *)&v2[16 * (v6 - 1) + 24];
  *(_QWORD *)(a1 + 88) = v7;
  v8 = (((unsigned __int64)(v7 + 7) >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 416) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
    goto LABEL_2;
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 408) = v10;
  RtlSetAllBitsEx((_QWORD *)(a1 + 400));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 416), (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v11 = v8 + 8320;
  LODWORD(EncryptedDataDomains) = 0;
  if ( VslIsSecureKernelRunning() )
  {
    EncryptedDataDomains = (unsigned int)HvlGetEncryptedDataDomains();
    v11 += v8 * EncryptedDataDomains;
  }
  v13 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x706D644Cu);
  *(_QWORD *)(a1 + 384) = v14;
  if ( !v14 )
    goto LABEL_4;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
    goto LABEL_2;
  *(_QWORD *)(a1 + 392) = v13;
  memset(v15, 0, v13);
  v16 = *(_QWORD *)(a1 + 384) + 0x2000LL;
  *(_QWORD *)(v16 + 32) = v13;
  v17 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(v16 + 48) = v17;
  *(_QWORD *)(a1 + 368) = v17;
  *(_QWORD *)(a1 + 376) = v16 + 56;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 368));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 384), *(_QWORD *)(a1 + 392));
  v18 = ExAllocatePoolWithTag(NonPagedPoolNx, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 456) = v18;
  if ( !v18 )
    goto LABEL_4;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
    goto LABEL_2;
  *(_QWORD *)(a1 + 424) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 432) = v19;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 424));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 456), (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  HypervisorEncryptionDomain = HvlGetHypervisorEncryptionDomain();
  if ( (unsigned int)EncryptedDataDomains < HypervisorEncryptionDomain )
  {
    v21 = *(_QWORD *)(a1 + 456);
    *(_QWORD *)(a1 + 440) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 448) = v21;
  }
  else
  {
    *(_QWORD *)(a1 + 440) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 448) = v16 + v8 * (unsigned int)HypervisorEncryptionDomain + 56;
  }
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 480) = v22;
  if ( !v22 )
  {
LABEL_4:
    MappingResources = -1073741670;
    goto LABEL_38;
  }
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
    goto LABEL_2;
  *(_QWORD *)(a1 + 464) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 472) = v23;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 464));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 480), (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 32) )
    IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(i + 16), *(unsigned int *)(i + 24));
  MappingResources = IopLiveDumpAllocateMappingResources(a1);
  if ( MappingResources < 0 )
    goto LABEL_38;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
  {
LABEL_2:
    MappingResources = -1073741248;
    goto LABEL_38;
  }
  MappingResources = IopLiveDumpEstimateMemoryPages(a1);
  if ( MappingResources < 0 )
    goto LABEL_38;
  MappingResources = IopLiveDumpAllocateDumpBuffers(a1);
  if ( MappingResources < 0 )
    goto LABEL_38;
  v26 = *(_QWORD *)(a1 + 504);
  if ( v26 )
  {
    v27 = v26 >> 6;
    v28 = *(_QWORD *)(a1 + 544) - v27;
    MappingResources = HvlPrepareLivedumpDescriptor(
                         *(_QWORD *)(a1 + 552) + 8 * v28,
                         v27,
                         (int)a1 + 184,
                         (int)&v41,
                         (__int64)&v40,
                         a1 + 184);
    if ( MappingResources >= 0 )
    {
      v29 = v40;
      *(_DWORD *)(a1 + 224) = 0;
      v30 = v29 >> 6;
      *(_QWORD *)(a1 + 200) = v29 & 0x3F;
      v31 = v41;
      *(_QWORD *)(a1 + 192) = v28 + v30;
      *(_QWORD *)(a1 + 216) = v31 & 0x3F;
      *(_QWORD *)(a1 + 232) = 0LL;
      *(_QWORD *)(a1 + 208) = v28 + (v31 >> 6);
    }
    else
    {
      *(_QWORD *)(a1 + 504) = 0LL;
    }
  }
  v32 = *(_QWORD *)(a1 + 120);
  if ( !v32 )
    goto LABEL_36;
  v33 = v32 << 12;
  IndependentPages = MmAllocateIndependentPages(v33, -1, v25);
  *(_QWORD *)(a1 + 128) = IndependentPages;
  if ( IndependentPages )
  {
    v35 = *(_QWORD *)(a1 + 600);
    v36 = *(_QWORD *)(a1 + 592);
    *(_DWORD *)(a1 + 136) = v33;
    if ( !IopLiveDumpIsUnderMemoryPressure(v36, v35) )
    {
      IopLiveDumpDiscardVirtualAddressRange(a1, v37, v33);
      v38 = *(void **)(a1 + 128);
      *(_DWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 160) = v38;
      memset(v38, 0, v33);
      goto LABEL_36;
    }
    goto LABEL_2;
  }
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 136) = 0;
LABEL_36:
  if ( MappingResources >= 0 )
    IopLiveDumpTraceBufferAllocation();
LABEL_38:
  if ( stru_14033C990.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C990, 0x400000000000uLL) )
  {
    v45 = 8;
    v46 = 0;
    v42 = (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    v44 = &v42;
    TlgWrite(&stru_14033C990, &unk_1402ABBCE, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( MappingResources < 0 )
    IopLiveDumpReleaseResources(a1);
  return (unsigned int)MappingResources;
}

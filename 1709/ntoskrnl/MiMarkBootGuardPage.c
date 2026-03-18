/*
 * XREFs of MiMarkBootGuardPage @ 0x1405B76A0
 * Callers:
 *     MmAllocateIsrStack @ 0x1405B7620 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x14082EA74 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  __int64 PteShadow; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // r10
  unsigned int v8; // edx
  ULONG_PTR *v9; // rdi
  unsigned __int64 v10; // r11
  int v11; // esi
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    v2 = (__int64)(a1 << 25) >> 16;
    if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v12 = PteShadow;
    v3 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v12) - 0x58000000000LL;
    v4 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF);
    v8 = 0;
    v9 = (ULONG_PTR *)v5;
    *v6 = 0LL;
    if ( (unsigned __int64)v6 >= v10 && (unsigned __int64)v6 <= v7 )
      MiWritePteShadow();
    KeFlushSingleTb(v2, v8, 1u);
    v11 = MiLockAndDecrementShareCount(v3, 1);
    MiLockAndDecrementShareCount(v4, 0);
    if ( v9 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      MiReturnPartitionResidentAvailable((__int64)v9, 1uLL);
    if ( v11 != 3 )
      MiReturnCommit((__int64)v9, 1uLL);
    if ( v9 == &MiSystemPartition )
    {
      if ( (unsigned int)MiGetSystemRegionType(v2) == 15 )
        _InterlockedExchangeAdd64(&qword_1403893F8, 0xFFFFFFFFFFFFFFFFuLL);
      else
        --qword_1403893D8;
    }
  }
}

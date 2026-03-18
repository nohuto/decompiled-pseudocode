/*
 * XREFs of MiMarkBootGuardPage @ 0x1405A7878
 * Callers:
 *     MmAllocateIsrStack @ 0x1405A77F8 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140808E5C (MiInitializeKernelStacks.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // r9
  ULONG_PTR *v6; // rbx
  unsigned int v7; // edx
  int v8; // esi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v1 = (__int64)(a1 << 25) >> 16;
    v9 = MI_READ_PTE_LOCK_FREE(a1);
    v2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v3 = 48 * (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v2 + 40)) >> 8) & 0x3FF);
    *v5 = 0LL;
    v6 = (ULONG_PTR *)v4;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
      MiWritePteShadow();
    KeFlushSingleTb(v1, v7, 1u);
    v8 = MiLockAndDecrementShareCount(v2, 1);
    MiLockAndDecrementShareCount(v3, 0);
    if ( v6 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      MiReturnPartitionResidentAvailable((__int64)v6, 1uLL);
    if ( v8 != 3 )
      MiReturnCommit((__int64)v6, 1uLL);
    if ( v6 == &MiSystemPartition )
    {
      if ( (unsigned int)MiGetSystemRegionType(v1) == 9 )
        _InterlockedExchangeAdd64(&qword_14036D138, 0xFFFFFFFFFFFFFFFFuLL);
      else
        --qword_14036D118;
    }
  }
}

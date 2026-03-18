/*
 * XREFs of MiMarkBootGuardPage @ 0x14062B064
 * Callers:
 *     MmAllocateIsrStack @ 0x14062AFE4 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x1408AB5F0 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // r9
  ULONG_PTR *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v1 = (__int64)(a1 << 25) >> 16;
    v11 = MI_READ_PTE_LOCK_FREE(a1);
    v2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    v3 = 48 * (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v2 + 40)) >> 8) & 0x3FF);
    *v5 = ZeroPte;
    v6 = (ULONG_PTR *)v4;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
      MiWritePteShadow(v8, v7, v9);
    KeFlushSingleTb(v1, 0, 1u);
    v10 = MiLockAndDecrementShareCount(v2, 1);
    MiLockAndDecrementShareCount(v3, 0);
    if ( v6 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      MiReturnPartitionResidentAvailable((__int64)v6, 1uLL);
    if ( v10 != 3 )
      MiReturnCommit((__int64)v6, 1uLL);
    if ( v6 == &MiSystemPartition )
    {
      if ( (unsigned int)MiGetSystemRegionType(v1) == 15 )
        _InterlockedExchangeAdd64(&qword_1403CC670, 0xFFFFFFFFFFFFFFFFuLL);
      else
        --qword_1403CC650;
    }
  }
}

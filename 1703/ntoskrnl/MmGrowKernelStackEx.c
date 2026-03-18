/*
 * XREFs of MmGrowKernelStackEx @ 0x1401359F0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14010F550 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x140184CE0 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x140211F00 (MmGrowKernelStack.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentThread; // rbp
  unsigned int v4; // esi
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(CurrentThread + 56) - (*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v4 = 0;
  v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(CurrentThread + 544) + 1452LL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = ((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v8 < v7 )
  {
    if ( v8 >= ((*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      v9 = ((__int64)(v7 - v8 - 8) >> 3) + 1;
      if ( (unsigned int)MiChargeResident((ULONG_PTR *)v5, v9, 0LL) )
      {
        v11 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
        if ( (unsigned int)MiAllocateKernelStackPages(
                             v5,
                             (unsigned __int64 *)v8,
                             v9,
                             CurrentThread | 1,
                             (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL)) >> 2,
                             2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v8 << 25) >> 16;
        }
        else
        {
          if ( (ULONG_PTR *)v5 == &MiSystemPartition )
            MiReturnResidentAvailable(v9);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 5824), v9);
          v4 = -1073741670;
        }
      }
      else
      {
        v4 = -1073741801;
      }
    }
    else
    {
      ++dword_14036CD98;
      v4 = -1073741571;
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}

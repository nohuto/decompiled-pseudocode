/*
 * XREFs of MmGrowKernelStackEx @ 0x140151490
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140028B90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x140184760 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x140219880 (MmGrowKernelStack.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14022A120 (MI_GET_NODE_FROM_VALID_PTE.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentThread; // rbp
  unsigned int v3; // esi
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int16 v9; // ax

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(CurrentThread + 56) - (*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(CurrentThread + 544) + 1452LL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = ((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 < v6 )
  {
    if ( v7 < ((*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140389008;
      v3 = -1073741571;
    }
    else
    {
      v8 = ((__int64)(v6 - v7 - 8) >> 3) + 1;
      if ( (unsigned int)MiChargeResident((ULONG_PTR *)v4, v8) )
      {
        v9 = MI_GET_NODE_FROM_VALID_PTE(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        if ( (unsigned int)MiAllocateKernelStackPages(v4, (__int64 *)v7, v8, CurrentThread | 1, v9, 2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v7 << 25) >> 16;
        }
        else
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v8);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6016), v8);
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}

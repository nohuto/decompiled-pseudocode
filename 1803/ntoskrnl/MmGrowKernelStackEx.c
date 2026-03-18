/*
 * XREFs of MmGrowKernelStackEx @ 0x1400CAE30
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14012F950 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x1401AE3B0 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x140256430 (MmGrowKernelStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // esi
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (char *)CurrentThread->StackBase - (*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (void *)0x12000 )
    return 3221225659LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&CurrentThread->Process[1].SecureState.Flags + 3));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 < v6 )
  {
    if ( v7 < ((*((_QWORD *)CurrentThread->InitialStack + 1) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_1403CC2B8;
      v3 = -1073741571;
    }
    else
    {
      v8 = ((__int64)(v6 - v7 - 8) >> 3) + 1;
      if ( (unsigned int)MiChargeResident(v4, v8, 0LL) )
      {
        v12 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
        if ( (unsigned int)MiAllocateKernelStackPages(
                             v4,
                             v7,
                             v8,
                             (unsigned int)CurrentThread | 1,
                             *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 58,
                             2) )
        {
          CurrentThread->StackLimit = (void *volatile)((__int64)(v7 << 25) >> 16);
        }
        else
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v8, v10);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7104), v8);
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

/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1400EAD50
 * Callers:
 *     <none>
 * Callees:
 *     MiOutSwapKernelStackPage @ 0x140002130 (MiOutSwapKernelStackPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x140124A10 (MiGetWorkingSetSwapSupport.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MiCreateKernelStackNode @ 0x1402196D0 (MiCreateKernelStackNode.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 *v4; // rsi
  __int64 WorkingSetSwapSupport; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 result; // rax
  LONG *SharedVm; // rdi
  KIRQL v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 PteShadow; // rax
  __int64 v17; // r14
  __int64 TransitionPte; // rax
  unsigned __int64 v19; // r13
  __int64 *v20; // rdi
  unsigned int i; // r15d
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+20h] [rbp-78h]
  __int64 DemandZeroPte; // [rsp+28h] [rbp-70h]
  unsigned __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  char *AnyMultiplexedVm; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+A0h] [rbp+8h] BYREF
  KIRQL v35; // [rsp+A8h] [rbp+10h]
  int *v36; // [rsp+B0h] [rbp+18h]
  __int64 v37; // [rsp+B8h] [rbp+20h]

  v36 = a3;
  v34 = a1;
  v29 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (__int64 *)v31;
  v32 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v37 = (unsigned int)((__int64)(v29 - v31) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31LL);
  WorkingSetSwapSupport = 0LL;
  v7 = *(_QWORD *)(v6 + 544);
  v8 = *(unsigned __int16 *)(v7 + 1452);
  v9 = v7 + 1280;
  v10 = *(_QWORD *)(qword_140388AF0 + 8 * v8);
  if ( (ULONG_PTR *)v10 == &MiSystemPartition
    || (result = MiCreateKernelStackNode(*(_QWORD *)(qword_140388AF0 + 8 * v8), a2)) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v14 = a2[2];
    v35 = v13;
    *(_QWORD *)(v14 - 8) = v34;
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v9) > 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 1120));
      if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v9) <= 2 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 1120));
      else
        WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v15);
    }
    do
    {
      PteShadow = *v4;
      if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v4, *v4);
      v34 = PteShadow;
      v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v34);
      if ( WorkingSetSwapSupport )
        MiOutSwapKernelStackPage(WorkingSetSwapSupport, v10, (__int64)v4);
      TransitionPte = MiMakeTransitionPte(v17, 31LL);
      v34 = TransitionPte;
      *v4 = TransitionPte;
      if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v4, TransitionPte);
      MiLockAndDecrementShareCount(48 * v17 - 0x58000000000LL, 0);
      ++v4;
    }
    while ( (unsigned __int64)v4 <= v29 );
    v19 = (__int64)(v31 << 25) >> 16;
    if ( WorkingSetSwapSupport )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 1120));
    v20 = (__int64 *)(v31 - 8);
    for ( i = v37; v20 != (__int64 *)v32; ++i )
    {
      v22 = *v20;
      if ( (*v20 & 1) == 0 )
        break;
      if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
        v22 = MiReadPteShadow(v20, *v20);
      v34 = v22;
      v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v34);
      v24 = 48 * v23 - 0x58000000000LL;
      v25 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v24);
      if ( *(_WORD *)(v24 + 32) == 1 )
      {
        *v20 = DemandZeroPte;
        if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v20, DemandZeroPte);
        *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
        *(_QWORD *)(v24 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      }
      else
      {
        v26 = MiMakeTransitionPte(v23, 31LL);
        v34 = v26;
        *v20 = v26;
        if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v20, v26);
      }
      v27 = MiDecrementShareCount(v24);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v27 != 3 )
      {
        MiLockPageAtDpcInline(v25);
        MiDecrementShareCount(v25);
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v19 -= 4096LL;
      --v20;
    }
    MiInsertTbFlushEntry(v36, v19, i, 0);
    LOBYTE(v28) = v35;
    return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v28);
  }
  return result;
}

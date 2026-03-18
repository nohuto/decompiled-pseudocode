/*
 * XREFs of MiOutPageSingleKernelStack @ 0x14007C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiOutSwapKernelStackPage @ 0x14007CC6C (MiOutSwapKernelStackPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetWorkingSetSwapSupport @ 0x1400A7F08 (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MiCreateKernelStackNode @ 0x140211DB8 (MiCreateKernelStackNode.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 DemandZeroPte; // rbx
  __int64 WorkingSetSwapSupport; // r14
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 SharedVm; // rdi
  KIRQL v13; // al
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r12
  unsigned int v23; // r13d
  __int64 *i; // rdi
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // [rsp+20h] [rbp-78h]
  unsigned __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 AnyMultiplexedVm; // [rsp+48h] [rbp-50h]
  __int64 TransitionPte; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+18h]
  KIRQL v39; // [rsp+B8h] [rbp+20h]

  v38 = a3;
  TransitionPte = (__int64)a2;
  v32 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v3 = (_QWORD *)v33;
  DemandZeroPte = MiMakeDemandZeroPte(31LL);
  WorkingSetSwapSupport = 0LL;
  v7 = *(_QWORD *)(v6 + 544);
  v8 = *(unsigned __int16 *)(v7 + 1452);
  v9 = v7 + 1280;
  v10 = *(_QWORD *)(qword_14036C8F8 + 8 * v8);
  if ( (ULONG_PTR *)v10 == &MiSystemPartition
    || (result = MiCreateKernelStackNode(*(_QWORD *)(qword_14036C8F8 + 8 * v8))) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v39 = v13;
    *(_QWORD *)(*(_QWORD *)(TransitionPte + 16) - 8LL) = a1;
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v9, a1, v14) > 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 1168));
      if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v9, v15, v16) <= 2 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 1168));
      else
        WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v18, v17, v19);
    }
    do
    {
      TransitionPte = MI_READ_PTE_LOCK_FREE(v3);
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(&TransitionPte);
      if ( WorkingSetSwapSupport )
        MiOutSwapKernelStackPage(WorkingSetSwapSupport, v10, v3);
      TransitionPte = MiMakeTransitionPte(v20, 31LL);
      *v3 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(v3) )
        MiWritePteShadow(v21);
      MiLockAndDecrementShareCount(48 * v20 - 0x58000000000LL, 0LL);
      ++v3;
    }
    while ( (unsigned __int64)v3 <= v32 );
    v22 = (__int64)(v33 << 25) >> 16;
    v23 = ((__int64)(v32 - v33) >> 3) + 1;
    if ( WorkingSetSwapSupport )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 1168));
    for ( i = (__int64 *)(v33 - 8); i != (__int64 *)v34 && (*(_DWORD *)i & 1) != 0; --i )
    {
      TransitionPte = MI_READ_PTE_LOCK_FREE(i);
      v25 = MI_GET_PAGE_FRAME_FROM_PTE(&TransitionPte);
      v26 = 48 * v25 - 0x58000000000LL;
      v27 = 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v26);
      if ( *(_WORD *)(v26 + 32) == 1 )
      {
        *i = DemandZeroPte;
        if ( (unsigned int)MiPteInShadowRange(i) )
          MiWritePteShadow(v29);
        *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
        *(_QWORD *)(v26 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      }
      else
      {
        TransitionPte = MiMakeTransitionPte(v25, 31LL);
        *i = TransitionPte;
        if ( (unsigned int)MiPteInShadowRange(i) )
          MiWritePteShadow(v28);
      }
      v30 = MiDecrementShareCount(v26);
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v30 != 3 )
      {
        MiLockPageAtDpcInline(v27);
        MiDecrementShareCount(v27);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      ++v23;
      v22 -= 4096LL;
    }
    MiInsertTbFlushEntry(v38, v22, v23, 0LL);
    LOBYTE(v31) = v39;
    return MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v31);
  }
  return result;
}

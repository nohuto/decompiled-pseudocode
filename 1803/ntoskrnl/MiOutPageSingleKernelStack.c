/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1400520A0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetWorkingSetSwapSupport @ 0x14007F460 (MiGetWorkingSetSwapSupport.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiOutSwapKernelStackPage @ 0x1400CBDA0 (MiOutSwapKernelStackPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MiCreateKernelStackNode @ 0x1402562D0 (MiCreateKernelStackNode.c)
 */

unsigned __int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  __int64 WorkingSetSwapSupport; // r13
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  _DWORD *v23; // rdi
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rcx
  BOOL v29; // r8d
  __int64 v30; // rax
  int v31; // r8d
  int v32; // eax
  __int64 v33; // r8
  unsigned int v34; // [rsp+20h] [rbp-98h]
  unsigned __int64 v35; // [rsp+28h] [rbp-90h]
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-88h]
  unsigned __int64 v37; // [rsp+38h] [rbp-80h]
  unsigned __int64 v38; // [rsp+48h] [rbp-70h]
  unsigned __int64 v39; // [rsp+50h] [rbp-68h]
  unsigned __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 DemandZeroPte; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+68h] [rbp-50h]
  __int64 TransitionPte; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+18h]
  unsigned __int8 v46; // [rsp+D8h] [rbp+20h]

  v45 = a3;
  TransitionPte = (__int64)a2;
  v3 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v3;
  v42 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = v4;
  v5 = (_QWORD *)v42;
  v34 = ((__int64)(v3 - v42) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31LL);
  WorkingSetSwapSupport = 0LL;
  v10 = *(_QWORD *)(v9 + 544);
  v11 = *(unsigned __int16 *)(v10 + 1454);
  v12 = v10 + 1280;
  v13 = *(_QWORD *)(qword_1403CBD88 + 8 * v11);
  if ( (ULONG_PTR *)v13 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_1403CBD88 + 8 * v11));
    if ( !result )
      return result;
    v6 = 0x7FFFFFFFF8LL;
    v7 = 0xFFFFF68000000000uLL;
  }
  v37 = v6 & (v4 >> 9);
  v38 = v6 & (v3 >> 9);
  v15 = v37 + v7;
  v39 = v37 + v7;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v46 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
  if ( v37 != v38 )
    MiLockPageTableInternal(AnyMultiplexedVm, v15 + 8, 0LL);
  *(_QWORD *)(*(_QWORD *)(TransitionPte + 16) - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v12) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 1120));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v12) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 1120));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v16);
  }
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v13, v5);
    TransitionPte = MiMakeTransitionPte(v17, 31LL);
    *v5 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
      MiWritePteShadow(v19, v18);
    MiLockAndDecrementShareCount(48 * v17 - 0x58000000000LL, 0LL);
    ++v5;
  }
  while ( (unsigned __int64)v5 <= v40 );
  v20 = (__int64)AnyMultiplexedVm;
  v21 = v37;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 1120));
  v22 = (__int64)(v42 << 25) >> 16;
  v23 = (_DWORD *)(v42 - 8);
  if ( v42 - 8 >= v35 )
  {
    v24 = v34;
    do
    {
      if ( (*v23 & 1) == 0 )
        break;
      TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v23);
      v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v26 = 48 * v25 - 0x58000000000LL;
      v27 = 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v26);
      v29 = MiPteInShadowRange((unsigned __int64)v23);
      if ( *(_WORD *)(v26 + 32) == 1 )
      {
        *(_QWORD *)v23 = DemandZeroPte;
        if ( v29 )
          MiWritePteShadow(v28, DemandZeroPte);
        *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
        *(_QWORD *)(v26 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      }
      else
      {
        v30 = MiMakeTransitionPte(v25, 31LL);
        TransitionPte = v30;
        *(_QWORD *)v23 = v30;
        if ( v31 )
          MiWritePteShadow(v23, v30);
      }
      v32 = MiDecrementShareCount(48 * v25 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v32 != 3 )
      {
        MiLockPageAtDpcInline(v27);
        MiDecrementShareCount(v27);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      ++v24;
      v22 -= 4096LL;
      v23 -= 2;
    }
    while ( (unsigned __int64)v23 >= v35 );
    v20 = (__int64)AnyMultiplexedVm;
    v34 = v24;
    v21 = v37;
  }
  if ( v21 != v38 )
    MiUnlockPageTableInternal(v20, v39 + 8);
  MiUnlockPageTableInternal(v20, v39);
  MiUnlockWorkingSetShared(v20, v46, v33);
  return MiInsertTbFlushEntry(v45, v22, v34, 0);
}

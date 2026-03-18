/*
 * XREFs of MmStealTopLevelPage @ 0x140143AFC
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x140143A10 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140070A08 (KeMakeKernelDirectoryTableBase.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     KeMakeUserDirectoryTableBase @ 0x1400CA584 (KeMakeUserDirectoryTableBase.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned int v7; // esi
  unsigned __int8 v8; // r13
  __int64 v9; // rbp
  _QWORD *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  BOOL v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 *v16; // r11
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  BOOL v23; // r12d
  __int64 v24; // r8
  unsigned __int64 v25; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v7 = 0;
  SharedVm[1] = 0;
  v8 = v6;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    *v10 = ZeroPte;
    v13 = MiPteInShadowRange((unsigned __int64)v10);
    if ( v13 )
      MiWritePteShadow(v12, v11, v14);
    *v16 = v15;
    if ( v13 )
      MiWritePteShadow((__int64)v16, v15, v14);
    if ( *(_DWORD *)(a1 + 60) )
    {
      v17 = ((Process[2].Affinity.Bitmap[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v18 = MI_READ_PTE_LOCK_FREE(v17);
      *(_QWORD *)v17 = ZeroPte;
      v19 = v18;
      v23 = MiPteInShadowRange(v17);
      if ( v23 )
        MiWritePteShadow(v21, v20, v22);
      KeFlushSingleTb(v17 << 25 >> 16, 0, 2u);
      v25 = ((v9 & 0xFFFFFFFFFLL) << 12) | v19 & 0xFFFF000000000FFFuLL;
      *(_QWORD *)v17 = v25;
      if ( v23 )
        MiWritePteShadow(v17, v25, v24);
      Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v9 << 12);
    }
    else
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v9 << 12);
    }
    v7 = 1;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8);
  return v7;
}

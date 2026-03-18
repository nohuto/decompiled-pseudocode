/*
 * XREFs of MmStealTopLevelPage @ 0x14013497C
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x140134890 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiReplacePageTablePage @ 0x140023E74 (MiReplacePageTablePage.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017C610 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x14017C628 (KeMakeUserDirectoryTableBase.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned int v7; // edi
  unsigned __int8 v8; // r14
  LONG *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // r11
  LONG *v20; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v7 = 0;
  SharedVm[1] = 0;
  v8 = v6;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 64) >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    *v13 = v12 | v11 & 0xFFFF000000000FFFuLL;
    if ( (unsigned int)MiPteInShadowRange(v13) )
      MiWritePteShadow(v14);
    if ( *(_DWORD *)(a1 + 68) )
    {
      v15 = MI_READ_PTE_LOCK_FREE(((Process[2].Affinity.Bitmap[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MI_INTERLOCKED_EXCHANGE_PTE(v18, v16 | v15 & 0xFFFF000000000FFFuLL, v17);
      KeFlushSingleTb(v19 << 25 >> 16, 0, 2u);
      Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v10 << 12);
    }
    else
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v10 << 12);
    }
    MiPreUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8);
    v20 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
    else
      *v20 = 0;
    v7 = 1;
  }
  else
  {
    MiPreUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8);
    v9 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
    else
      *v9 = 0;
  }
  __writecr8(v8);
  return v7;
}

/*
 * XREFs of MmStealTopLevelPage @ 0x1400D08FC
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1400D0810 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017BD30 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x14017BD48 (KeMakeUserDirectoryTableBase.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  __int64 *v11; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // r11
  __int64 v15; // r11
  LONG *v16; // rax
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
    v11 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    PteShadow = *v11;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(
                    *(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF),
                    *v11);
    v13 = ((v10 & 0xFFFFFFFFFLL) << 12) | PteShadow & 0xFFFF000000000FFFuLL;
    *v11 = v13;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v11, v13);
    if ( *(_DWORD *)(a1 + 68) )
    {
      v14 = (_QWORD *)(((Process[2].Affinity.Bitmap[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
        MiReadPteShadow(((Process[2].Affinity.Bitmap[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v14);
      MI_INTERLOCKED_EXCHANGE_PTE(v14);
      KeFlushSingleTb(v15 << 25 >> 16, 0, 2u);
      Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v10 << 12);
    }
    else
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v10 << 12);
    }
    MiPreUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8);
    v16 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
    else
      *v16 = 0;
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

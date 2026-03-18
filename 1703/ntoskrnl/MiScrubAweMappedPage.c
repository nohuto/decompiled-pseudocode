/*
 * XREFs of MiScrubAweMappedPage @ 0x140226064
 * Callers:
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiScrubPage @ 0x140226824 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAweMappedPage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  LONG *SharedVm; // rdi
  KIRQL v11; // al
  BOOL v12; // ebp
  unsigned int v13; // edi
  KIRQL v15; // [rsp+50h] [rbp+8h]

  v5 = a4 + 1280;
  v7 = 48 * a2 - 0x58000000000LL;
  v8 = (__int64)(a1 << 25) >> 16;
  v9 = MI_READ_PTE_LOCK_FREE(a1);
  SharedVm = MiGetSharedVm(v5);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v15 = v11;
  if ( *(_WORD *)(v7 + 32) == 2 )
  {
    *(_QWORD *)a1 = 0LL;
    v12 = MiPteInShadowRange(a1);
    if ( v12 )
      MiWritePteShadow();
    KeFlushSingleTb(v8, 1u, 0);
    v13 = MiScrubPage(a3, *(_QWORD *)(a3 + 24), v7, 0LL);
    *(_QWORD *)a1 = v9 | 0x20;
    if ( v12 )
      MiWritePteShadow();
    v11 = v15;
  }
  else
  {
    v13 = 0;
  }
  MiUnlockWorkingSetExclusive(v5, v11);
  return v13;
}

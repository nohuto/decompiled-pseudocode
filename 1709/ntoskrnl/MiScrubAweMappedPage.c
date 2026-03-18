/*
 * XREFs of MiScrubAweMappedPage @ 0x140238654
 * Callers:
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAweMappedPage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 PteShadow; // rdi
  unsigned __int64 v8; // r12
  LONG *SharedVm; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  KIRQL v12; // r13

  v5 = a4 + 1280;
  v6 = 48 * a2 - 0x58000000000LL;
  PteShadow = *(_QWORD *)a1;
  v8 = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  SharedVm = MiGetSharedVm(v5);
  v10 = 0;
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  if ( *(_WORD *)(v6 + 32) == 2 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    KeFlushSingleTb(v8, 1u, 0);
    v10 = MiScrubPage(a3, *(_QWORD *)(a3 + 152), v6, 0LL);
    *(_QWORD *)a1 = PteShadow | 0x20;
    if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
  }
  LOBYTE(v11) = v12;
  MiUnlockWorkingSetExclusive(v5, v11);
  return v10;
}

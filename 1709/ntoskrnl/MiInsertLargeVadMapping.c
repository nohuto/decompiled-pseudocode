/*
 * XREFs of MiInsertLargeVadMapping @ 0x140228908
 * Callers:
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(unsigned __int64 a1, __int64 *a2, char a3, int a4, unsigned __int64 *a5)
{
  __int64 v9; // rdx
  __int64 v10; // r10
  _KPROCESS *Process; // rbx
  LONG *SharedVm; // rbx
  __int64 PteShadow; // rax
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v10 = MiLockProtoPoolPage((unsigned __int64)a2, 0LL);
  if ( v10 )
  {
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v18[0] = PteShadow;
    MiUnlockProtoPoolPage(v10, 0x11u);
    v15 = MI_GET_PAGE_FRAME_FROM_PTE(v18);
    v17 = -262144LL;
    if ( a4 != 1 )
      v17 = -512LL;
    v18[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v17 & v15, v16);
    *a5 = v18[0];
    if ( (unsigned __int64)a5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a5 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    return 1LL;
  }
  else
  {
    LOBYTE(v9) = a3;
    Process = KeGetCurrentThread()->ApcState.Process;
    MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9);
    MmAccessFault(0LL, (signed __int64)a2, 0LL, 0LL);
    SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    return 0LL;
  }
}

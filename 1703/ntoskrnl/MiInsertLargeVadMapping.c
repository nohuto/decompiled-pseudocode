/*
 * XREFs of MiInsertLargeVadMapping @ 0x14021BFD8
 * Callers:
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 *a5)
{
  _KPROCESS *Process; // rbx
  LONG *SharedVm; // rbx
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // rax
  unsigned __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( MiLockProtoPoolPage(a2, 0LL) )
  {
    v16[0] = MI_READ_PTE_LOCK_FREE(a2);
    MiUnlockProtoPoolPage(v12, 0x11u);
    v13 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v16) >> 12;
    v15 = 0xFFFFC0000LL;
    if ( a4 != 1 )
      v15 = 0xFFFFFFE00LL;
    v16[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v15 & v13, v14);
    *a5 = v16[0];
    if ( MiPteInShadowRange((unsigned __int64)a5) )
      MiWritePteShadow();
    return 1LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], a3);
    MmAccessFault(0LL, a2, 0, 0LL);
    SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    return 0LL;
  }
}

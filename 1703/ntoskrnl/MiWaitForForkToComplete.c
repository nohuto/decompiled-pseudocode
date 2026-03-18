/*
 * XREFs of MiWaitForForkToComplete @ 0x140223828
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiWaitForForkToComplete(__int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 896) == CurrentThread )
    return 0LL;
  v5 = a1 + 1280;
  MiUnlockWorkingSetExclusive(a1 + 1280, a2);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 1u;
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  SharedVm = MiGetSharedVm(v5);
  ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  return 1LL;
}

/*
 * XREFs of MiWaitForForkToComplete @ 0x14023027C
 * Callers:
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 */

__int64 __fastcall MiWaitForForkToComplete(__int64 a1, __int64 a2)
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

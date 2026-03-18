/*
 * XREFs of MiWaitForFreePage @ 0x140220450
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140002DEC (MiDoneWithThisPageGetAnother.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiGetSystemPage @ 0x140109CF0 (MiGetSystemPage.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x14021F600 (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  KSPIN_LOCK *v2; // r15
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct _KEVENT *v6; // rsi
  volatile LONG Lock; // ebp
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 584;
  KeAcquireInStackQueuedSpinLock(a1 + 584, &LockHandle);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 || a1 != &MiSystemPartition )
  {
    v5 = 585LL;
    v4 = 34;
  }
  else
  {
    v4 = 160;
    v5 = 589LL;
  }
  v6 = (struct _KEVENT *)&a1[v5];
  Lock = a1[v5 + 3];
  while ( a1[720] < v4 )
  {
    KeResetEvent(v6);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    MiObtainFreePages((__int64)a1);
    if ( KeWaitForSingleObject(v6, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiSeventySeconds) == 258
      && Lock == v6[1].Header.LockNV )
    {
      MiNoPagesLastChance((__int64)a1, v4);
    }
    Lock = v6[1].Header.Lock;
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

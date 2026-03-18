/*
 * XREFs of MiUpdateAvailableEvents @ 0x1401700A4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     MiDecreaseAvailablePages @ 0x1400D5664 (MiDecreaseAvailablePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiIncreaseAvailablePages @ 0x140122A90 (MiIncreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x140170000 (MiUpdatePageThresholdsDpc.c)
 *     MiInitializeMemoryEvents @ 0x14061C8B0 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 __fastcall MiUpdateAvailableEvents(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 608, &LockHandle);
  v2 = a1[880];
  v3 = (struct _KEVENT *)a1[34];
  if ( v2 <= a1[765] )
    KeSetEvent(v3, 0, 0);
  else
    KeResetEvent(v3);
  v4 = (struct _KEVENT *)a1[35];
  if ( v2 <= a1[766] )
    KeResetEvent(v4);
  else
    KeSetEvent(v4, 0, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

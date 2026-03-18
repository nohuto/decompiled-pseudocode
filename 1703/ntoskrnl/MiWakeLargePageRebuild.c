/*
 * XREFs of MiWakeLargePageRebuild @ 0x14022553C
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140083DBC (MiSignalLargePageRebuild.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v7; // esi
  __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = 2184LL * a2 + *(_QWORD *)(a1 + 48) + 1200LL;
  if ( *(_BYTE *)(v5 + 33) || *(_BYTE *)(v5 + 34) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 16) = v8 + 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v7 == 1 )
  {
    *(_BYTE *)(v5 + 33) = 1;
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v5 + 24) = (v4 << 58) | (a1 >> 4) & 0x3FFFFFFFFFFFFFFLL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)v5, BackgroundWorkQueue);
  }
  return v7;
}

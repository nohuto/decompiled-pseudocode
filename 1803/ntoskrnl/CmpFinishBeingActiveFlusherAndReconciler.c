/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140633408
 * Callers:
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140703540 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpReleaseWriteQueue @ 0x14049A59C (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x14049A7E4 (CmpWakeWriteQueueWaiters.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 */

LONG __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rcx
  struct _KEVENT *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct _KEVENT *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // cl

  CmpLockRegistry();
  v2 = (volatile signed __int64 *)(a1 + 72);
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  *(_DWORD *)(a1 + 4280) &= 0xFFFFFFFC;
  v4 = (struct _KEVENT *)CmpReleaseWriteQueue(v3, a1 + 4232);
  v7 = (struct _KEVENT *)CmpReleaseWriteQueue(v5, a1 + 4256);
  v10 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(v2, v6, v8, v9);
  KeAbPostRelease((ULONG_PTR)v2);
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(v4, -1073741823);
  return CmpWakeWriteQueueWaiters(v7, -1073741823);
}

/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x14063378C
 * Callers:
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140703540 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405848F4 (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  char v7; // al
  __int64 v9; // rdx

  v2 = (volatile signed __int64 *)(a1 + 72);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    v6 = *(_DWORD *)(a1 + 4280);
    if ( (v6 & 2) != 0 )
    {
      v9 = a1 + 4256;
      goto LABEL_8;
    }
    if ( (v6 & 1) == 0 )
      break;
    v9 = a1 + 4232;
LABEL_8:
    CmpWaitOnHiveWriteQueue(a1, v9, 0);
  }
  *(_DWORD *)(a1 + 4280) = v6 | 3;
  *(_QWORD *)(a1 + 4232) = KeGetCurrentThread();
  *(_QWORD *)(a1 + 4256) = KeGetCurrentThread();
  v7 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v2, v3, v4, v5);
  KeAbPostRelease((ULONG_PTR)v2);
  return CmpUnlockRegistry();
}

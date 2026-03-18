/*
 * XREFs of CmpTransMgrSyncHive @ 0x1405DFE68
 * Callers:
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  char v6; // bl
  int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  char v13; // cl

  CmpLockRegistry();
  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 72);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
  v5 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL);
  if ( (v5 & 1) != 0 )
    goto LABEL_2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v12 = HvpMarkDirty(BugCheckParameter2, 0, 32, 0);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v9, v10, v11);
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v12 )
  {
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
LABEL_2:
    v6 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72), v5, v3, v4);
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    v7 = CmpFlushHive(BugCheckParameter2, 0);
    if ( v7 < 0 )
      return (unsigned int)-1073741670;
    return (unsigned int)v7;
  }
  v7 = -1073741670;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v5, v3, v4);
  KeAbPostRelease((ULONG_PTR)v2);
  CmpUnlockRegistry();
  return (unsigned int)v7;
}

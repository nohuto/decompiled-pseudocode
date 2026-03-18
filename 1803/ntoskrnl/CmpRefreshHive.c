/*
 * XREFs of CmpRefreshHive @ 0x14070306C
 * Callers:
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpKCBCacheTable @ 0x14054E3C0 (CmpCleanUpKCBCacheTable.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140633408 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14063378C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x1406F78B4 (CmpSwapHiveStorage.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  __int64 v2; // r13
  ULONG_PTR v3; // r15
  ULONG_PTR v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int64 *v10; // rsi
  volatile signed __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // r9d
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  ULONG_PTR v21; // rsi
  char v22; // [rsp+68h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v25[3]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v26[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v27[352]; // [rsp+B8h] [rbp-50h] BYREF

  v25[0] = 0LL;
  v24 = 0xFFFFFFFFLL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(v25[0]) = -1;
  v4 = *(_QWORD *)(v3 + 24);
  BugCheckParameter2 = 0LL;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v4 + 1632)) )
    return (unsigned int)-1073740763;
  CmpBecomeActiveFlusherAndReconciler(v4);
  CmpLockRegistry();
  ExAcquirePushLockSharedEx(v3 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 48));
  v22 = 1;
  v5 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v5 < 0 )
    goto LABEL_6;
  if ( *(_BYTE *)(v4 + 2936) == 1 )
  {
    v5 = -1073741431;
LABEL_6:
    CmpUnlockKcb(v3, v6, v7, v8);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v4 + 160) & 2) == 0 )
  {
LABEL_12:
    v5 = -1073741811;
    goto LABEL_6;
  }
  v10 = (volatile signed __int64 *)(v4 + 72);
  ExAcquirePushLockSharedEx(v4 + 72, 0LL);
  v11 = (volatile signed __int64 *)(v4 + 80);
  ExAcquirePushLockExclusiveEx(v4 + 80, 0LL);
  if ( *(_DWORD *)(v4 + 904) )
  {
    v5 = -1073741823;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80), v12, v13, v14);
    KeAbPostRelease(v4 + 80);
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 72));
    KeAbPostRelease(v4 + 72);
    v15 = 0LL;
LABEL_44:
    if ( v15 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v24);
    if ( v2 )
      (*(void (__fastcall **)(ULONG_PTR, _QWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
    if ( !v22 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80), v12, v13, v14);
  KeAbPostRelease(v4 + 80);
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v4 + 72));
  KeAbPostRelease(v4 + 72);
  if ( (*(_DWORD *)(v3 + 176) & 0x40000) == 0 )
    goto LABEL_12;
  if ( *(_DWORD *)(v4 + 2912) )
  {
    v5 = -1073741823;
    goto LABEL_6;
  }
  CmpUnlockKcb(v3, v6, v7, v8);
  v22 = 0;
  CmpUnlockRegistry();
  memset(v27, 0, sizeof(v27));
  memset(v26, 0, sizeof(v26));
  v26[0] = *(_QWORD *)(v4 + 1536);
  v16 = *(_DWORD *)(v4 + 164);
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v17 = 1;
      v26[1] = *(_QWORD *)(v4 + 1544);
    }
    else
    {
      v17 = 2;
      v26[1] = *(_QWORD *)(v4 + 1568);
      v26[2] = *(_QWORD *)(v4 + 1576);
    }
  }
  else
  {
    v17 = 0;
  }
  v5 = CmpCreateHive(
         &BugCheckParameter2,
         2u,
         *(_DWORD *)(v4 + 160) & 0xFFFEFFFF,
         v17,
         0LL,
         (__int64)v26,
         0LL,
         16777218,
         0LL,
         0LL,
         0LL,
         (__int64)v27);
  if ( v5 < 0 )
    goto LABEL_8;
  CmpLockRegistryExclusive();
  v5 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(v4 + 2936) == 1 )
    {
      v5 = -1073741431;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(v4 + 160) & 2) != 0 )
    {
      if ( *(_DWORD *)(v4 + 904) )
        goto LABEL_38;
      if ( (*(_DWORD *)(v3 + 176) & 0x40000) == 0 )
        goto LABEL_36;
      if ( *(_DWORD *)(v4 + 2912) )
      {
LABEL_38:
        v5 = -1073741823;
        goto LABEL_7;
      }
      v18 = BugCheckParameter2;
      v19 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
      if ( (_DWORD)v19 == *(_DWORD *)(*(_QWORD *)(v4 + 64) + 36LL) )
      {
        v2 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               v19,
               v25);
        v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v4 + 8))(
                v4,
                *(unsigned int *)(*(_QWORD *)(v4 + 64) + 36LL),
                &v24);
        if ( HvpMarkCellDirty(v18, *(unsigned int *)(*(_QWORD *)(v18 + 64) + 36LL), 0) )
        {
          v20 = *(_DWORD *)(v15 + 16);
          *(_WORD *)(v2 + 2) |= 0xCu;
          *(_DWORD *)(v2 + 16) = v20;
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v24);
          v21 = BugCheckParameter2;
          (*(void (__fastcall **)(ULONG_PTR, _QWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
          CmpCleanUpKCBCacheTable(v4);
          CmpSearchKeyControlBlockTreeEx(
            (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpRefreshWorkerRoutine,
            v4,
            0LL,
            1);
          CmpFlushNotifiesOnKeyBodyList(v3, 0LL, 1);
          CmpSwapHiveStorage(v4, v21);
          CmpRebuildKcbCache(v3);
          ++*(_DWORD *)(v4 + 204);
          v5 = 0;
          goto LABEL_7;
        }
        v5 = -1073741443;
        goto LABEL_44;
      }
    }
LABEL_36:
    v5 = -1073741811;
  }
LABEL_7:
  CmpUnlockRegistry();
LABEL_8:
  CmpFinishBeingActiveFlusherAndReconciler(v4);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v4 + 1632));
  if ( BugCheckParameter2 )
    CmpDestroyHive((char *)BugCheckParameter2);
  return (unsigned int)v5;
}

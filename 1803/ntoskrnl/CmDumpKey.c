/*
 * XREFs of CmDumpKey @ 0x1407015A4
 * Callers:
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFreeOffsetArray @ 0x1406F94D4 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x1406F969C (CmpWriteOffsetArrayToFile.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1407067E4 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, void *a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // rbp
  __int64 v14; // rdx
  NTSTATUS v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+80h] [rbp+18h] BYREF
  PVOID *v24; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v22 = 0;
  v24 = 0LL;
  v23 = 0;
  v5 = *(_QWORD **)(v2 + 24);
  if ( v5 == CmpMasterHive )
    return 3221225506LL;
  if ( *(_WORD *)(v2 + 58) )
  {
    CmpLogUnsupportedOperation(0x16u);
    return 3221225474LL;
  }
  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = -1073741491;
LABEL_12:
    CmpUnlockRegistry();
    if ( v8 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return v9;
  }
  ExAcquirePushLockSharedEx(v2 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 48));
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v9 = -1073741444;
LABEL_11:
    CmpUnlockKcb(v2, v10, v11, v12);
    goto LABEL_12;
  }
  v10 = *(unsigned int *)(v5[8] + 36LL);
  if ( *(_DWORD *)(v2 + 32) != (_DWORD)v10 )
  {
    v9 = -1073741811;
    goto LABEL_11;
  }
  v13 = v5 + 9;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 9), 0LL);
  v15 = HvSnapshotHiveToOffsetArray(v5, &v22, &v24, &v23);
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13, v14, v16, v17);
  KeAbPostRelease((ULONG_PTR)v13);
  CmpUnlockKcb(v2, v18, v19, v20);
  CmpUnlockRegistry();
  if ( v15 >= 0 )
  {
    v15 = CmpWriteOffsetArrayToFile(v21, v22, (__int64)v24, v23, a2);
    CmpFreeOffsetArray(v22, v24);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v15;
}

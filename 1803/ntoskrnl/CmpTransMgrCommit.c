/*
 * XREFs of CmpTransMgrCommit @ 0x1405DEFD8
 * Callers:
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x1406FA4C8 (CmpRmUnDoPhase.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 *     CmpIsHiveBoundToTrans @ 0x1405DF978 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1405DFE68 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  char v7; // cl
  char *NextElement; // rax
  char *v9; // rbx
  __int64 *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[48]; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp-21h] BYREF
  int *v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A4h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp+Fh] BYREF

  v15 = 0LL;
  v3 = 0;
  *a3 = 0;
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
    TlgWrite(&stru_140397090, &unk_14030890B, 0LL, 0LL, 2u, &pData);
  v7 = dword_1403E9900;
  if ( dword_1403E9900 )
  {
    ++dword_1403E9900;
    if ( (v7 & 3) != 0 )
      return 3221225626LL;
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
    return 0LL;
  v16 = MEMORY[0xFFFFF78000000014];
  CmpAttachToRegistryProcess((__int64)v17);
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v15, 0);
    v9 = NextElement;
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 24LL) + 4192LL) == a1
      && (*((_DWORD *)NextElement + 16) & 1) == 0 )
    {
      ++*a3;
      if ( v3 >= 0 )
      {
        v3 = CmpTransMgrCommitUoW(NextElement, &v16);
        if ( v3 >= 0 )
          *((_DWORD *)v9 + 16) |= 1u;
      }
    }
  }
  if ( v3 >= 0 )
  {
    CmpLockRegistry();
    for ( i = CmpGetNextActiveHive(0LL); i; i = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)i) )
    {
      if ( i[524] == a1 && (i[20] & 2) == 0 && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive((ULONG_PTR)i) < 0 )
          v3 = -1073741670;
        CmpLockRegistry();
      }
    }
    CmpUnlockRegistry();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a2 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  KiUnstackDetachProcess((__int64)v17, 0LL);
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
  {
    v13 = *a3;
    v21 = 0;
    v14 = v13;
    v19 = &v14;
    v20 = 4;
    TlgWrite(&stru_140397090, &unk_1403088DE, 0LL, 0LL, 3u, &v18);
  }
  return (unsigned int)v3;
}

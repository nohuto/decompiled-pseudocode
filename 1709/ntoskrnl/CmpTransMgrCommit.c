/*
 * XREFs of CmpTransMgrCommit @ 0x1405A51A4
 * Callers:
 *     CmKtmNotification @ 0x1405697C0 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x140693FA0 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x140696A54 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmpIsHiveBoundToTrans @ 0x1405A6B94 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
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
  int v14; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+38h] [rbp-90h] BYREF
  __int64 v16; // [rsp+40h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-80h] BYREF
  int *v18; // [rsp+68h] [rbp-60h]
  int v19; // [rsp+70h] [rbp-58h]
  int v20; // [rsp+74h] [rbp-54h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-50h] BYREF

  v15 = 0LL;
  v3 = 0;
  *a3 = 0;
  if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 1uLL) )
    TlgWrite(&stru_1403549F0, &unk_1402CEF5A, 0LL, 0LL, 2u, &pData);
  v7 = dword_1403A33D0;
  if ( dword_1403A33D0 )
  {
    ++dword_1403A33D0;
    if ( (v7 & 3) != 0 )
      return 3221225626LL;
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
    return 0LL;
  v16 = MEMORY[0xFFFFF78000000014];
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(a2 + 16), &v15, 0);
    v9 = NextElement;
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 24LL) + 5400LL) == a1
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
      if ( i[675] == a1 && (i[18] & 2) == 0 && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
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
  if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 1uLL) )
  {
    v13 = *a3;
    v20 = 0;
    v14 = v13;
    v18 = &v14;
    v19 = 4;
    TlgWrite(&stru_1403549F0, &unk_1402CEF2D, 0LL, 0LL, 3u, &v17);
  }
  return (unsigned int)v3;
}

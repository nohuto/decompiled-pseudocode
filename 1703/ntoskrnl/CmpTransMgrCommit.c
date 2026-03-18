/*
 * XREFs of CmpTransMgrCommit @ 0x1404CD8C4
 * Callers:
 *     CmKtmNotification @ 0x14042C540 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x140669230 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpIsHiveBoundToTrans @ 0x14042E8A4 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x14042E8D4 (CmpTransMgrSyncHive.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  char v7; // cl
  __int64 NextElement; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-90h] BYREF
  int *v20; // [rsp+68h] [rbp-70h]
  int v21; // [rsp+70h] [rbp-68h]
  int v22; // [rsp+74h] [rbp-64h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-58h] BYREF

  v17 = 0LL;
  v3 = 0;
  *a3 = 0;
  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    TlgWrite(&stru_14033C3C0, &unk_1402AB17B, 0LL, 0LL, 2u, &pData);
  v7 = dword_140387C60;
  if ( dword_140387C60 )
  {
    ++dword_140387C60;
    if ( (v7 & 3) != 0 )
      return 3221225626LL;
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
    return 0LL;
  v18 = MEMORY[0xFFFFF78000000014];
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v17, 0LL);
    v10 = NextElement;
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 24LL) + 5400LL) == a1
      && (*(_DWORD *)(NextElement + 64) & 1) == 0 )
    {
      ++*a3;
      if ( v3 >= 0 )
      {
        v3 = CmpTransMgrCommitUoW(NextElement, &v18);
        if ( v3 >= 0 )
          *(_DWORD *)(v10 + 64) |= 1u;
      }
    }
  }
  if ( v3 >= 0 )
  {
    CmpLockRegistry(v9);
    for ( i = CmpGetNextActiveHive(0LL); i; i = CmpGetNextActiveHive(i) )
    {
      if ( *(_QWORD *)(i + 5400) == a1 && (*(_DWORD *)(i + 144) & 2) == 0 && CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive(i) < 0 )
          v3 = -1073741670;
        CmpLockRegistry(v14);
      }
    }
    CmpUnlockRegistry();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a2 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
  {
    v15 = *a3;
    v22 = 0;
    v16 = v15;
    v20 = &v16;
    v21 = 4;
    TlgWrite(&stru_14033C3C0, &unk_1402AB14E, 0LL, 0LL, 3u, &v19);
  }
  return (unsigned int)v3;
}

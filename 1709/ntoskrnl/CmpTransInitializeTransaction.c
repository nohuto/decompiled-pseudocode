/*
 * XREFs of CmpTransInitializeTransaction @ 0x1405D70D4
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpTransReferenceTransaction @ 0x140568F54 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpTransSearchAddTransFromRm @ 0x1405D6DD0 (CmpTransSearchAddTransFromRm.c)
 *     CmpAccountForLogReservation @ 0x1405D7230 (CmpAccountForLogReservation.c)
 *     CmTmCreateEnlistment @ 0x1405D72D8 (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x1405D7350 (CmpStartRMLogs.c)
 */

__int64 __fastcall CmpTransInitializeTransaction(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  int started; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 64;
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(PVOID *)(a1 + 64) != CmRmSystem )
    {
      started = CmpTransSearchAddTransFromRm(CmRmSystem, *(_QWORD *)(a1 + 56), 0LL, 1, (__int64)&v12);
      if ( started < 0 )
        return (unsigned int)started;
    }
    v1 = *(_QWORD *)(a1 + 56);
    started = CmpTransReferenceTransaction(v1);
    if ( started < 0 )
      return (unsigned int)started;
    started = CmpStartRMLogs(*(_QWORD *)(a1 + 64));
    if ( started < 0 )
      goto LABEL_15;
    started = CmTmCreateEnlistment(
                a1 + 80,
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL,
                a1);
    if ( started < 0 )
      goto LABEL_15;
    ObReferenceObjectByHandle(*(HANDLE *)(a1 + 80), 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v5) = 1;
    v6 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)CmpAccountForLogReservation(v6, v7, v5) >= 0 )
      v3 = 96;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
  {
    *(_DWORD *)(a1 + 48) = v3;
    --CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    _InterlockedOr(v10, 0);
    if ( CmpTransactionInitializingEvent )
      ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
    return 0;
  }
  started = -1072103422;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_15:
  if ( v1 )
    CmpTransDereferenceTransaction(v1);
  return (unsigned int)started;
}

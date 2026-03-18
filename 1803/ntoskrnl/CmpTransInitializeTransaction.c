/*
 * XREFs of CmpTransInitializeTransaction @ 0x1405E16EC
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1405E145C (CmpTransSearchAddTrans.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     CmpTransReferenceTransaction @ 0x14054C710 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpTransSearchAddTransFromRm @ 0x1405E13E4 (CmpTransSearchAddTransFromRm.c)
 *     CmpAccountForLogReservation @ 0x1405E1854 (CmpAccountForLogReservation.c)
 *     CmTmCreateEnlistment @ 0x1405E18FC (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x1405E1974 (CmpStartRMLogs.c)
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
  char v12; // [rsp+58h] [rbp+10h] BYREF

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
      goto LABEL_16;
    started = CmTmCreateEnlistment(
                a1 + 80,
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL,
                a1);
    if ( started < 0 )
      goto LABEL_16;
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
LABEL_16:
  if ( v1 )
    CmpTransDereferenceTransaction(v1);
  return (unsigned int)started;
}

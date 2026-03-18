/*
 * XREFs of CmKtmNotification @ 0x1405697C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x14050A728 (CmpQueryNameString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpTransMgrRollback @ 0x14056964C (CmpTransMgrRollback.c)
 *     CmpIsCmRm @ 0x14056A274 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 *     CmLogTmRmAction @ 0x1405D526C (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x1405D7230 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     CmpQueueLazyCommitWorker @ 0x140694210 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x140695FE8 (CmpRecoverEnlistment.c)
 */

NTSTATUS __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v7; // r15
  char v9; // r13
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  ULONG_PTR v19; // rcx
  __int64 v20; // r9
  int v21; // eax
  PVOID v22; // rdx
  int v23; // eax
  char v24; // r12
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v28; // [rsp+40h] [rbp-61h] BYREF
  char v29; // [rsp+41h] [rbp-60h]
  char v30; // [rsp+42h] [rbp-5Fh]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v32; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-39h]
  HANDLE Handle; // [rsp+70h] [rbp-31h]
  __int64 v36[3]; // [rsp+78h] [rbp-29h] BYREF
  __int128 v37; // [rsp+90h] [rbp-11h] BYREF

  v7 = 0;
  Handle = 0LL;
  v30 = 0;
  v28 = 0;
  v32 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  memset(v36, 0, sizeof(v36));
  v29 = 1;
  if ( !(unsigned __int8)CmpIsCmRm(RMContext, RMContext, TransactionContext) )
    return -1073741811;
  if ( (RMContext[26] & 8) != 0 )
    return 0;
  if ( TransactionNotification == 256 )
    return CmpRecoverEnlistment(RMContext, v12, Argument);
  if ( (TransactionNotification & 0xE) == 0 )
    return 0;
  result = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  v14 = result;
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v16 = *((_DWORD *)Key + 12);
    if ( (v16 & 8) != 0 )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          *((_DWORD *)Key + 12) = v16 | 1;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v19 = qword_140353EA0;
    if ( CmRmSystem != RMContext )
      v19 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v19 + 2664), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp(v36, 0x20000u);
      v37 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner != KeGetCurrentThread() )
    {
      LOCK_HIVE_LOAD();
      v7 = 1;
    }
    if ( (unsigned __int8)CmpIsCmRm(RMContext, v17, v18) )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          v21 = CmpTransMgrPrepare(RMContext, Key, &v32, &v28);
          break;
        case 4u:
          v21 = CmpTransMgrCommit(RMContext, Key, &v32);
          break;
        case 8u:
          v21 = CmpTransMgrRollback((__int64)Key, &v32);
          break;
        default:
          v14 = -1073741811;
          goto LABEL_18;
      }
      v14 = v21;
LABEL_18:
      v34 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v22 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v29 = 0;
        }
        else
        {
          v23 = CmLogTmRmAction((_DWORD)RMContext);
          v22 = Key;
          v14 = v23;
          if ( TransactionNotification != 2 )
            v14 = 0;
        }
        v24 = 1;
        if ( TransactionNotification == 4 )
        {
LABEL_26:
          if ( *((_QWORD *)v22 + 9) )
            Handle = (HANDLE)*((_QWORD *)v22 + 10);
          if ( (*((_DWORD *)v22 + 12) & 0x20) != 0 )
          {
            if ( (int)CmpAccountForLogReservation(RMContext, v22, 0LL) >= 0 )
              *((_DWORD *)Key + 12) &= ~0x20u;
            v22 = Key;
          }
          if ( v14 < 0 && TransactionNotification == 4 )
          {
            CmpQueueLazyCommitWorker(v22);
            v14 = 0;
          }
          else
          {
            LOBYTE(v20) = v29;
            CmpCleanupTransactionState(RMContext, v22, TransactionNotification, v20);
          }
LABEL_34:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( v7 )
            UNLOCK_HIVE_LOAD();
          if ( v24 != 1 )
            goto LABEL_41;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v28 == 1 )
                OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
              else
                OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
              break;
            case 4u:
              TmCommitComplete(EnlistmentObject, 0LL);
              goto LABEL_41;
            case 8u:
              OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
              break;
            default:
              goto LABEL_41;
          }
          v14 = OnlyEnlistment;
LABEL_41:
          if ( Handle )
            ZwClose(Handle);
          switch ( TransactionNotification )
          {
            case 2u:
              v9 = 31;
              break;
            case 4u:
              v9 = 30;
              break;
            case 8u:
              v9 = 32;
              break;
          }
          if ( !CmpTraceTxrRoutine || !v9 )
            goto LABEL_46;
          if ( UnicodeString.Buffer )
          {
            p_UnicodeString = &UnicodeString;
            LOBYTE(p_UnicodeString) = v9;
            CmpTraceTxrRoutine(p_UnicodeString, v36, &v37, v34, v32, &UnicodeString);
LABEL_46:
            if ( UnicodeString.Buffer )
              RtlFreeUnicodeString(&UnicodeString);
            return v14;
          }
          return v14;
        }
      }
      else
      {
        v22 = Key;
        v24 = v30;
      }
      if ( v28 != 1 && TransactionNotification != 8 )
        goto LABEL_34;
      goto LABEL_26;
    }
    if ( v7 )
      UNLOCK_HIVE_LOAD();
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    return -1073741811;
  }
  return result;
}

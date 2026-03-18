/*
 * XREFs of CmKtmNotification @ 0x14054ED10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     CmpTransMgrRollback @ 0x14054BC94 (CmpTransMgrRollback.c)
 *     CmpIsCmRm @ 0x14054F0C0 (CmpIsCmRm.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmLogTmRmAction @ 0x1405DE7E4 (CmLogTmRmAction.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpAccountForLogReservation @ 0x1405E1854 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 *     CmpQueueLazyCommitWorker @ 0x1406F740C (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x1406F9A54 (CmpRecoverEnlistment.c)
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
  char v11; // r12
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  PVOID v23; // rdx
  int v24; // eax
  char v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v33; // [rsp+40h] [rbp-61h] BYREF
  char v34; // [rsp+41h] [rbp-60h]
  char v35; // [rsp+42h] [rbp-5Fh]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v37; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-39h]
  HANDLE Handle; // [rsp+70h] [rbp-31h]
  __int128 v41; // [rsp+78h] [rbp-29h] BYREF
  LARGE_INTEGER v42[4]; // [rsp+88h] [rbp-19h] BYREF

  v7 = 0;
  v34 = 1;
  Handle = 0LL;
  v35 = 0;
  v33 = 0;
  v37 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11 = 0;
  memset(v42, 0, sizeof(v42));
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
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
    v17 = qword_140396A80;
    if ( CmRmSystem != RMContext )
      v17 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v17 + 1536), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp(v42, 0x20000u);
      v41 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner != KeGetCurrentThread() )
    {
      LOCK_HIVE_LOAD();
      v7 = 1;
    }
    if ( (unsigned __int8)CmpIsCmRm(RMContext) )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          v22 = CmpTransMgrPrepare(RMContext, Key, &v37, &v33);
          break;
        case 4u:
          v22 = CmpTransMgrCommit(RMContext, Key, &v37);
          break;
        case 8u:
          v22 = CmpTransMgrRollback((__int64)Key, &v37);
          break;
        default:
          v14 = -1073741811;
          goto LABEL_18;
      }
      v14 = v22;
LABEL_18:
      v39 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v23 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v34 = 0;
        }
        else
        {
          v24 = CmLogTmRmAction((_DWORD)RMContext);
          v23 = Key;
          v14 = v24;
          if ( TransactionNotification != 2 )
            v14 = 0;
        }
        v25 = 1;
        if ( TransactionNotification == 4 )
        {
LABEL_26:
          if ( *((_QWORD *)v23 + 9) )
            Handle = (HANDLE)*((_QWORD *)v23 + 10);
          if ( (*((_DWORD *)v23 + 12) & 0x20) != 0 )
          {
            if ( (int)CmpAccountForLogReservation(RMContext, v23, 0LL) >= 0 )
              *((_DWORD *)Key + 12) &= ~0x20u;
            v23 = Key;
          }
          if ( v14 < 0 && TransactionNotification == 4 )
          {
            CmpQueueLazyCommitWorker(v23);
            v14 = 0;
          }
          else
          {
            CmpCleanupTransactionState(RMContext, v23, TransactionNotification);
          }
LABEL_34:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( v7 )
            UNLOCK_HIVE_LOAD(v27, v26, v28, v29);
          if ( v25 != 1 )
            goto LABEL_41;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v33 == 1 )
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
              v11 = 31;
              break;
            case 4u:
              v11 = 30;
              break;
            case 8u:
              v11 = 32;
              break;
          }
          if ( !CmpTraceTxrRoutine || !v11 )
            goto LABEL_46;
          if ( UnicodeString.Buffer )
          {
            p_UnicodeString = &UnicodeString;
            LOBYTE(p_UnicodeString) = v11;
            CmpTraceTxrRoutine(p_UnicodeString, v42, &v41, v39, v37, &UnicodeString);
LABEL_46:
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            return v14;
          }
          return v14;
        }
      }
      else
      {
        v23 = Key;
        v25 = v35;
      }
      if ( v33 != 1 && TransactionNotification != 8 )
        goto LABEL_34;
      goto LABEL_26;
    }
    if ( v7 )
      UNLOCK_HIVE_LOAD(v19, v18, v20, v21);
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    return -1073741811;
  }
  return result;
}

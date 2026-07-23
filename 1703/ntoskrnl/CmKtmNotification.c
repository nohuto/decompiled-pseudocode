/*
 * XREFs of CmKtmNotification @ 0x14042C540
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpIsCmRm @ 0x14042C83C (CmpIsCmRm.c)
 *     CmLogTmRmAction @ 0x14042C8DC (CmLogTmRmAction.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x14042E45C (CmpTransMgrRollback.c)
 *     CmpAccountForLogReservation @ 0x14042E67C (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     CmpQueueLazyCommitWorker @ 0x1406694A0 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x14066B97C (CmpRecoverEnlistment.c)
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
  char v20; // r15
  __int64 v21; // r9
  int v22; // eax
  PVOID v23; // rdx
  int v24; // eax
  char v25; // r12
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v29; // [rsp+40h] [rbp-61h] BYREF
  char v30; // [rsp+41h] [rbp-60h]
  char v31; // [rsp+42h] [rbp-5Fh]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v33; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-39h]
  HANDLE Handle; // [rsp+70h] [rbp-31h]
  LARGE_INTEGER v37[3]; // [rsp+78h] [rbp-29h] BYREF
  __int128 v38; // [rsp+90h] [rbp-11h] BYREF

  v7 = 0;
  Handle = 0LL;
  v31 = 0;
  v29 = 0;
  v33 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  memset(v37, 0, sizeof(v37));
  v30 = 1;
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v19 = qword_14033BE70;
    if ( CmRmSystem != RMContext )
      v19 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v19 + 2664), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp(v37, 0x20000u);
      v38 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD(v19);
    v20 = v7 ^ 1;
    if ( (unsigned __int8)CmpIsCmRm(RMContext, v17, v18) )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          v22 = CmpTransMgrPrepare(RMContext, Key, &v33, &v29);
          break;
        case 4u:
          v22 = CmpTransMgrCommit(RMContext, Key, &v33);
          break;
        case 8u:
          v22 = CmpTransMgrRollback(Key, &v33);
          break;
        default:
          v14 = -1073741811;
          goto LABEL_18;
      }
      v14 = v22;
LABEL_18:
      v35 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v23 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v30 = 0;
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
            LOBYTE(v21) = v30;
            CmpCleanupTransactionState(RMContext, v23, TransactionNotification, v21);
          }
LABEL_34:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( v20 )
            UNLOCK_HIVE_LOAD();
          if ( v25 != 1 )
            goto LABEL_41;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v29 == 1 )
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
            CmpTraceTxrRoutine(p_UnicodeString, v37, &v38, v35, v33, &UnicodeString);
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
        v23 = Key;
        v25 = v31;
      }
      if ( v29 != 1 && TransactionNotification != 8 )
        goto LABEL_34;
      goto LABEL_26;
    }
    if ( v20 )
      UNLOCK_HIVE_LOAD();
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    return -1073741811;
  }
  return result;
}

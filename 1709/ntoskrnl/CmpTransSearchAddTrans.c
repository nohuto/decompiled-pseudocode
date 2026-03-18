/*
 * XREFs of CmpTransSearchAddTrans @ 0x1405D6E48
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromRm @ 0x1405D6DD0 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpTransReferenceTransaction @ 0x140568F54 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x140568FD0 (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x1405690B8 (CmpBindHiveToTrans.c)
 *     CmpSearchForTrans @ 0x1405D7064 (CmpSearchForTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405D70D4 (CmpTransInitializeTransaction.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        char **a6)
{
  char *Trans; // rsi
  int v7; // r13d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  char *v17; // rdx
  struct _KTHREAD *v19; // rax
  BOOLEAN v20; // al
  char **v21; // rcx
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  char **v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v16 = CmpSearchForTrans(a3, a1, a2);
      if ( !v16 )
      {
        if ( !v13 )
          goto LABEL_20;
        break;
      }
      if ( a1 && (*(_DWORD *)(v16 + 48) & 7) != 0 )
      {
LABEL_20:
        v12 = -1072103422;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
        break;
      if ( !v13 )
        goto LABEL_20;
      LODWORD(v26) = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExBlockOnAddressPushLock(&CmpTransactionInitializingEvent, &CmpTransactionInitializingCount, &v26, 4uLL, 0LL);
    }
    if ( Trans )
      break;
    if ( v16 )
    {
      CmpBindHiveToTrans((__int64)a4, v16);
      goto LABEL_11;
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Trans = CmpTransAllocateTrans(a1, a2, a3, (__int64)a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( !*(_QWORD *)(a3 + 80)
    || (v19 = KeGetCurrentThread(),
        --v19->KernelApcDisable,
        v20 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 2776LL)),
        (v7 = v20) != 0) )
  {
    v21 = *(char ***)(a3 + 24);
    if ( *v21 != (char *)(a3 + 16) )
      __fastfail(3u);
    *((_QWORD *)Trans + 1) = v21;
    *(_QWORD *)Trans = a3 + 16;
    *v21 = Trans;
    *(_QWORD *)(a3 + 24) = Trans;
    ++CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = 0;
    v12 = CmpTransInitializeTransaction(Trans);
    if ( v12 < 0 )
    {
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v23 = *(_QWORD *)Trans;
      if ( *(char **)(*(_QWORD *)Trans + 8LL) != Trans || (v24 = (char **)*((_QWORD *)Trans + 1), *v24 != Trans) )
        __fastfail(3u);
      *v24 = (char *)v23;
      *(_QWORD *)(v23 + 8) = v24;
      --CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      _InterlockedOr(v25, 0);
      if ( CmpTransactionInitializingEvent )
        ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
      goto LABEL_21;
    }
    v17 = Trans;
LABEL_11:
    v12 = 0;
    *a6 = v17;
    goto LABEL_12;
  }
  v12 = -1073741431;
LABEL_21:
  if ( Trans )
    ExFreePoolWithTag(Trans, 0x72544D43u);
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection_0(a4 + 347);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}

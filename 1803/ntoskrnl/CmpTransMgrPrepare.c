/*
 * XREFs of CmpTransMgrPrepare @ 0x1405DEE1C
 * Callers:
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x1406FA4C8 (CmpRmUnDoPhase.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpIsHiveBoundToTrans @ 0x1405DF978 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1405DFE68 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bp
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  ULONG_PTR v14; // rsi
  int v15; // edi
  ULONG_PTR v16; // rsi
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct _EX_RUNDOWN_REF *v19; // rcx
  volatile signed __int64 *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v29[48]; // [rsp+28h] [rbp-70h] BYREF

  memset(v29, 0, sizeof(v29));
  *a4 = 0;
  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v29);
  CmpLockRegistry();
  v28 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v28, 0);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 24LL) + 4192LL) == a1 )
      ++*a3;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v11 )
  {
    v18 = v11 + 204;
    if ( ExAcquireRundownProtection(v11 + 204) )
    {
      CmpUnlockRegistry();
      v15 = CmpTransMgrSyncHive((ULONG_PTR)v11);
      v19 = v18;
LABEL_22:
      ExReleaseRundownProtection(v19);
      goto LABEL_18;
    }
    v15 = 0;
    goto LABEL_17;
  }
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v14 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v14 = (ULONG_PTR)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( NextActiveHive[524] == a1
      && (NextActiveHive[20] & 2) == 0
      && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) )
    {
      CmpUnlockRegistry();
      v15 = CmpTransMgrSyncHive(v14);
      if ( v15 < 0 )
      {
        v19 = (struct _EX_RUNDOWN_REF *)(v14 + 1632);
        goto LABEL_22;
      }
      CmpLockRegistry();
    }
  }
  v16 = qword_140396A80;
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140396A80 + 64) + 144LL) & 1) != 0 )
    goto LABEL_16;
  v20 = (volatile signed __int64 *)(qword_140396A80 + 72);
  ExAcquirePushLockExclusiveEx(qword_140396A80 + 72, 0LL);
  ExAcquirePushLockExclusiveEx(v16 + 80, 0LL);
  v23 = HvpMarkDirty(v16, 0, 32, 0);
  v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v24) = v24 & 6;
  if ( (_BYTE)v24 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 80), v24, v21, v22);
  KeAbPostRelease(v16 + 80);
  if ( v23 )
  {
    *(_DWORD *)(*(_QWORD *)(v16 + 64) + 144LL) |= 1u;
    if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 72), v25, v26, v27);
    KeAbPostRelease(v16 + 72);
    CmpUnlockRegistry();
    v9 = 0;
    if ( (int)CmpFlushHive(v16, 0) < 0 )
    {
      v15 = -1073741670;
      goto LABEL_18;
    }
LABEL_16:
    v15 = 0;
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 72), v25, v26, v27);
  KeAbPostRelease(v16 + 72);
  v15 = -1073741670;
LABEL_17:
  CmpUnlockRegistry();
LABEL_18:
  KiUnstackDetachProcess((__int64)v29, 0LL);
  return (unsigned int)v15;
}

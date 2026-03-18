/*
 * XREFs of CmpTransMgrPrepare @ 0x1405A5024
 * Callers:
 *     CmKtmNotification @ 0x1405697C0 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x140696A54 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     CmpIsHiveBoundToTrans @ 0x1405A6B94 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v11; // rsi
  BOOLEAN v12; // bl
  struct _EX_RUNDOWN_REF *v13; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  ULONG_PTR v17; // rbx
  ULONG_PTR v18; // rsi
  char v19; // bl
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(a2 + 16) != a2 + 16 )
  {
    CmpLockRegistry();
    v20 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD *)(a2 + 16), &v20, 0);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 24LL) + 5400LL) == a1 )
        ++*a3;
    }
    v11 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( v11 )
    {
      v12 = ExAcquireRundownProtection_0(v11 + 347);
      CmpUnlockRegistry();
      if ( v12 )
      {
        v5 = CmpTransMgrSyncHive((ULONG_PTR)v11);
        v13 = v11 + 347;
LABEL_9:
        ExReleaseRundownProtection_0(v13);
      }
      return v5;
    }
    for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v17 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v17 = (ULONG_PTR)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[675] == a1
        && (NextActiveHive[18] & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) == 1 )
      {
        CmpUnlockRegistry();
        v5 = CmpTransMgrSyncHive(v17);
        if ( (v5 & 0x80000000) != 0 )
        {
          v13 = (struct _EX_RUNDOWN_REF *)(v17 + 2776);
          goto LABEL_9;
        }
        CmpLockRegistry();
      }
    }
    v18 = qword_140353EA0;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140353EA0 + 64) + 144LL) & 1) != 0 )
    {
      CmpUnlockRegistry();
      return v5;
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(qword_140353EA0 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v18 + 2840));
    v19 = HvpMarkDirty(v18, 0, 0x20u, 0);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v18 + 2840));
    if ( v19 )
    {
      *(_DWORD *)(*(_QWORD *)(v18 + 64) + 144LL) |= 1u;
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(v18, 0) >= 0 )
        return v5;
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
      CmpUnlockRegistry();
    }
    return (unsigned int)-1073741670;
  }
  *a4 = 1;
  return 0LL;
}

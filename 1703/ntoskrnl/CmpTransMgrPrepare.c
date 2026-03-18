/*
 * XREFs of CmpTransMgrPrepare @ 0x14042E724
 * Callers:
 *     CmKtmNotification @ 0x14042C540 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpIsHiveBoundToTrans @ 0x14042E8A4 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x14042E8D4 (CmpTransMgrSyncHive.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v10; // rcx
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v12; // rsi
  ULONG_PTR i; // rcx
  __int64 NextActiveHive; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // rcx
  ULONG_PTR v17; // rsi
  BOOLEAN v19; // bl
  struct _EX_RUNDOWN_REF *v20; // rcx
  char v21; // bl
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(a2 + 16) != a2 + 16 )
  {
    CmpLockRegistry(v10);
    v22 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a2 + 16, &v22, 0LL);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 24LL) + 5400LL) == a1 )
        ++*a3;
    }
    v12 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( v12 )
    {
      v19 = ExAcquireRundownProtection(v12 + 347);
      CmpUnlockRegistry();
      if ( v19 )
      {
        v5 = CmpTransMgrSyncHive((ULONG_PTR)v12);
        v20 = v12 + 347;
LABEL_20:
        ExReleaseRundownProtection(v20);
      }
      return v5;
    }
    for ( i = 0LL; ; i = v15 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v15 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( *(_QWORD *)(NextActiveHive + 5400) == a1
        && (*(_DWORD *)(NextActiveHive + 144) & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) == 1 )
      {
        CmpUnlockRegistry();
        v5 = CmpTransMgrSyncHive(v15);
        if ( (v5 & 0x80000000) != 0 )
        {
          v20 = (struct _EX_RUNDOWN_REF *)(v15 + 2776);
          goto LABEL_20;
        }
        CmpLockRegistry(v16);
      }
    }
    v17 = qword_14033BE70;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_14033BE70 + 64) + 144LL) & 1) != 0 )
    {
      CmpUnlockRegistry();
      return v5;
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(qword_14033BE70 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v17 + 2840));
    v21 = HvpMarkDirty(v17);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v17 + 2840));
    if ( v21 )
    {
      *(_DWORD *)(*(_QWORD *)(v17 + 64) + 144LL) |= 1u;
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(v17) >= 0 )
        return v5;
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
      CmpUnlockRegistry();
    }
    return (unsigned int)-1073741670;
  }
  *a4 = 1;
  return 0LL;
}

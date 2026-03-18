/*
 * XREFs of SepCreateLogonSessionTrack @ 0x1405A784C
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x1405A7820 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x140827A2C (SepRmDbInitialization.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 a1)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rbx
  KSPIN_LOCK v4; // rax
  __int64 v5; // rcx
  KSPIN_LOCK *v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rbp
  KSPIN_LOCK v9; // rdi
  void *CurrentServerSilo; // rsi

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x734C6553u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xC0uLL);
  v4 = *(_QWORD *)a1;
  v3[6] = 0LL;
  v3[5] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  v3[15] = 0LL;
  v3[1] = v4;
  v3[3] = 1LL;
  v3[17] = (KSPIN_LOCK)(v3 + 16);
  v3[16] = (KSPIN_LOCK)(v3 + 16);
  v3[18] = 0LL;
  ExInitializePushLock(v3 + 19);
  if ( SeTokenLeakTracking )
  {
    v3[23] = (KSPIN_LOCK)(v3 + 22);
    v3[22] = (KSPIN_LOCK)(v3 + 22);
  }
  v5 = *(_DWORD *)a1 & 0xF;
  v6 = (KSPIN_LOCK *)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  v9 = *v6;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v9 )
  {
    if ( CurrentServerSilo == *(void **)(v9 + 160)
      && *(_DWORD *)a1 == *(_DWORD *)(v9 + 8)
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(v9 + 12) )
    {
      ExReleaseResourceLite(v8);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v9 = *(_QWORD *)v9;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[20] = (KSPIN_LOCK)CurrentServerSilo;
  *v3 = *v6;
  *v6 = (KSPIN_LOCK)v3;
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}

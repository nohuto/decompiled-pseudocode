/*
 * XREFs of SepCreateLogonSessionTrack @ 0x14045672C
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x140456700 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x14082189C (SepRmDbInitialization.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}

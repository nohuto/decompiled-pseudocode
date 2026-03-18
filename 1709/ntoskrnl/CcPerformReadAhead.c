/*
 * XREFs of CcPerformReadAhead @ 0x140020ED4
 * Callers:
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140020718 (MmWaitForCacheManagerPrefetch.c)
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmPrefetchForCacheManager @ 0x140492FC0 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  PVOID v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // r15
  BOOL v11; // eax
  int v12; // r8d
  signed __int64 v13; // rcx
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 result; // rax
  int v21; // [rsp+28h] [rbp-190h]
  unsigned int v22; // [rsp+40h] [rbp-178h]
  int v23; // [rsp+44h] [rbp-174h]
  int v24; // [rsp+48h] [rbp-170h]
  BOOL v25; // [rsp+4Ch] [rbp-16Ch]
  int v26; // [rsp+50h] [rbp-168h]
  int v27; // [rsp+54h] [rbp-164h]
  int v28; // [rsp+58h] [rbp-160h]
  int v30; // [rsp+68h] [rbp-150h]
  unsigned int v31; // [rsp+6Ch] [rbp-14Ch]
  _QWORD *v32; // [rsp+78h] [rbp-140h]
  _QWORD *v33; // [rsp+80h] [rbp-138h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-130h] BYREF
  __int64 Partition; // [rsp+A0h] [rbp-118h]
  BOOL v36; // [rsp+A8h] [rbp-110h]
  unsigned int v37; // [rsp+ACh] [rbp-10Ch]
  unsigned int v38; // [rsp+B0h] [rbp-108h]
  __int64 v39; // [rsp+C8h] [rbp-F0h]
  PVOID P; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-E0h]
  __int64 v42; // [rsp+E0h] [rbp-D8h]
  __int64 v43; // [rsp+E8h] [rbp-D0h]
  __int64 v44; // [rsp+F0h] [rbp-C8h]
  __int64 v45[5]; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD v46[2]; // [rsp+120h] [rbp-98h] BYREF
  _QWORD v47[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD v48[4]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v49[4]; // [rsp+160h] [rbp-58h] BYREF

  v3 = a1;
  v44 = a1;
  v43 = a2;
  v41 = 0LL;
  v39 = 0LL;
  v27 = 0;
  v28 = 0;
  v24 = 0;
  v30 = 0;
  v31 = 0;
  Partition = 0LL;
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  v4 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v33 = v4;
  v32 = v4;
  v41 = v4[26];
  v39 = v4[27];
  Partition = CcGetPartition(v4);
  LOBYTE(v5) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v41 + 16))(v39, v5);
  v26 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = 0LL;
      P = 0LL;
      v25 = v36;
      v8 = v42;
      v9 = v22;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v10 = *(_QWORD *)(a2 + 48);
        v45[2] = v10;
        if ( v10 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 80));
          v9 = *(_DWORD *)(v10 + 52);
          v11 = v9 == 0;
          v25 = v11;
          v36 = v11;
          v8 = *(_QWORD *)(v10 + 56);
          v42 = v8;
          if ( v9 > 0x800000 )
            v9 = 0x800000;
          v22 = v9;
          *(_DWORD *)(v10 + 52) = 0;
          if ( !v11 )
            *(_QWORD *)(v10 + 64) = v8 + v9;
          if ( (*(_DWORD *)v10 & 0x200000) != 0 )
          {
            v30 = 1;
            v31 = *(_DWORD *)(v10 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 80));
          v23 = (*(_DWORD *)v10 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( !v10 || v25 )
          break;
        v13 = v4[1];
        if ( v8 < v13 )
        {
          v28 = 1;
          if ( v8 + v9 >= v13 )
          {
            v9 = v13 - v8;
            v27 = 1;
          }
          v9 = (v9 + 4095) & 0xFFFFF000;
          v22 = v9;
          v14 = v9;
          v37 = v9;
          v45[1] = v8;
          v38 = v9;
          if ( v30 )
          {
            if ( !v31 )
              KeBugCheckEx(0x34u, 0xA0DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v15 = v9;
            if ( v9 > v31 )
              v15 = v31;
          }
          else
          {
            v15 = v9;
          }
          if ( (xmmword_140401150 & 0x20000) != 0 )
          {
            memset(v48, 0, sizeof(v48));
            v48[1] = v8;
            v48[2] = __PAIR64__(v23, v9);
            v48[0] = a1;
            LODWORD(v48[3]) = 0;
            v46[0] = v48;
            v46[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v46, 1, -2147352576, 5635, 4200706);
          }
          while ( v14 )
          {
            if ( v15 > v14 )
              v15 = v14;
            if ( (xmmword_140401150 & 0x20000) != 0 )
            {
              memset(v49, 0, sizeof(v49));
              v49[1] = v8;
              v49[2] = __PAIR64__(v23, v15);
              v49[0] = a1;
              v47[0] = v49;
              v47[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v47, 1, -2147352576, 5643, 4200706);
            }
            v24 |= MmPrefetchForCacheManager(a2, v8, v12, v15, v23, v21, *(_QWORD *)(a1 + 24), (__int64)&P);
            v14 -= v15;
            v37 = v14;
            v8 += v15;
            v42 = v8;
            v7 = P;
          }
          v4 = v33;
        }
      }
      if ( !v7 )
        break;
      CurrentThread = KeGetCurrentThread();
      PsGetPagePriorityThread(CurrentThread);
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread(CurrentThread);
      CcMapAndCopyFromCache(a2, 0LL, (__int64)v45, v23, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread(CurrentThread);
      v4 = v32;
      v33 = v32;
    }
    v3 = a1;
  }
  __addgsdword(0x5E64u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( v26 )
    (*(void (__fastcall **)(__int64))(v41 + 24))(v39);
  v17 = Partition;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v18 = *(_QWORD *)(a2 + 48);
  if ( v18 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 80));
    *(_DWORD *)v18 &= ~0x10000u;
    if ( v27 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v18 + 64) = 0LL;
    if ( !v24 && v28 )
      *(_DWORD *)v18 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v18 + 80));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  v19 = *(_QWORD *)(v3 + 24);
  if ( v19 )
    IoDiskIoAttributionDereference(v19);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 128), &LockHandle);
  CcDecrementOpenCount(v32);
  *((_DWORD *)v32 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

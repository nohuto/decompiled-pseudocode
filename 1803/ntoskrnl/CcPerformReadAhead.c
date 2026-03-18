/*
 * XREFs of CcPerformReadAhead @ 0x140045EB4
 * Callers:
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     PsSetPagePriorityThread @ 0x140043C14 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140046654 (MmWaitForCacheManagerPrefetch.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmPrefetchForCacheManager @ 0x1404BBCB8 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x1405B6B00 (CcMapAndCopyFromCache.c)
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
  int PagePriorityThread; // [rsp+4Ch] [rbp-16Ch]
  int v27; // [rsp+50h] [rbp-168h]
  int v28; // [rsp+54h] [rbp-164h]
  int v29; // [rsp+58h] [rbp-160h]
  int v31; // [rsp+68h] [rbp-150h]
  unsigned int v32; // [rsp+6Ch] [rbp-14Ch]
  _QWORD *v33; // [rsp+78h] [rbp-140h]
  _QWORD *v34; // [rsp+80h] [rbp-138h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-130h] BYREF
  __int64 Partition; // [rsp+A0h] [rbp-118h]
  BOOL v37; // [rsp+A8h] [rbp-110h]
  unsigned int v38; // [rsp+ACh] [rbp-10Ch]
  unsigned int v39; // [rsp+B0h] [rbp-108h]
  __int64 v40; // [rsp+C8h] [rbp-F0h]
  PVOID P; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-E0h]
  __int64 v43; // [rsp+E0h] [rbp-D8h]
  __int64 v44; // [rsp+E8h] [rbp-D0h]
  __int64 v45; // [rsp+F0h] [rbp-C8h]
  __int64 v46[5]; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD v47[2]; // [rsp+120h] [rbp-98h] BYREF
  _QWORD v48[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD v49[4]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v50[4]; // [rsp+160h] [rbp-58h] BYREF

  v3 = a1;
  v45 = a1;
  v44 = a2;
  v42 = 0LL;
  v40 = 0LL;
  v28 = 0;
  v29 = 0;
  v24 = 0;
  v31 = 0;
  v32 = 0;
  Partition = 0LL;
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  v4 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v34 = v4;
  v33 = v4;
  v42 = v4[26];
  v40 = v4[27];
  Partition = CcGetPartition(v4);
  LOBYTE(v5) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v42 + 16))(v40, v5);
  v27 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = 0LL;
      P = 0LL;
      v25 = v37;
      v8 = v43;
      v9 = v22;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v10 = *(_QWORD *)(a2 + 48);
        v46[2] = v10;
        if ( v10 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 80));
          v9 = *(_DWORD *)(v10 + 52);
          v11 = v9 == 0;
          v25 = v11;
          v37 = v11;
          v8 = *(_QWORD *)(v10 + 56);
          v43 = v8;
          if ( v9 > 0x800000 )
            v9 = 0x800000;
          v22 = v9;
          *(_DWORD *)(v10 + 52) = 0;
          if ( !v11 )
            *(_QWORD *)(v10 + 64) = v8 + v9;
          if ( (*(_DWORD *)v10 & 0x200000) != 0 )
          {
            v31 = 1;
            v32 = *(_DWORD *)(v10 + 88);
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
          v29 = 1;
          if ( v8 + v9 >= v13 )
          {
            v9 = v13 - v8;
            v28 = 1;
          }
          v9 = (v9 + 4095) & 0xFFFFF000;
          v22 = v9;
          v14 = v9;
          v38 = v9;
          v46[1] = v8;
          v39 = v9;
          if ( v31 )
          {
            if ( !v32 )
              KeBugCheckEx(0x34u, 0xA0EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v15 = v9;
            if ( v9 > v32 )
              v15 = v32;
          }
          else
          {
            v15 = v9;
          }
          if ( (xmmword_14044C2D0 & 0x20000) != 0 )
          {
            memset(v49, 0, sizeof(v49));
            v49[1] = v8;
            v49[2] = __PAIR64__(v23, v9);
            v49[0] = a1;
            LODWORD(v49[3]) = 0;
            v47[0] = v49;
            v47[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v47, 1, -2147352576, 5635, 4200706);
          }
          while ( v14 )
          {
            if ( v15 > v14 )
              v15 = v14;
            if ( (xmmword_14044C2D0 & 0x20000) != 0 )
            {
              memset(v50, 0, sizeof(v50));
              v50[1] = v8;
              v50[2] = __PAIR64__(v23, v15);
              v50[0] = a1;
              v48[0] = v50;
              v48[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v48, 1, -2147352576, 5643, 4200706);
            }
            v24 |= MmPrefetchForCacheManager(a2, v8, v12, v15, v23, v21, *(_QWORD *)(a1 + 24), (__int64)&P);
            v14 -= v15;
            v38 = v14;
            v8 += v15;
            v43 = v8;
            v7 = P;
          }
          v4 = v34;
        }
      }
      if ( !v7 )
        break;
      CurrentThread = KeGetCurrentThread();
      PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)CurrentThread, v23);
      CcMapAndCopyFromCache(a2, 0LL, (__int64)v46, v23, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
      v4 = v33;
      v34 = v33;
    }
    v3 = a1;
  }
  __addgsdword(0x5E64u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( v27 )
    (*(void (__fastcall **)(__int64))(v42 + 24))(v40);
  v17 = Partition;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v18 = *(_QWORD *)(a2 + 48);
  if ( v18 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 80));
    *(_DWORD *)v18 &= ~0x10000u;
    if ( v28 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v18 + 64) = 0LL;
    if ( !v24 && v29 )
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
  CcDecrementOpenCount(v33);
  *((_DWORD *)v33 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

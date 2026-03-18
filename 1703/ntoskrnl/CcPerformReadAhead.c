/*
 * XREFs of CcPerformReadAhead @ 0x1400215AC
 * Callers:
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14010AFD0 (MmWaitForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CcMapAndCopyFromCache @ 0x1405141C0 (CcMapAndCopyFromCache.c)
 *     MmPrefetchForCacheManager @ 0x14053D5DC (MmPrefetchForCacheManager.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // rax
  PVOID v8; // rdi
  signed __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // r15
  BOOL v12; // eax
  int v13; // r8d
  signed __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int PagePriorityThread; // edi
  int v20; // r9d
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 result; // rax
  int v25; // [rsp+28h] [rbp-190h]
  unsigned int v26; // [rsp+40h] [rbp-178h]
  unsigned int v27; // [rsp+44h] [rbp-174h]
  int v28; // [rsp+48h] [rbp-170h]
  BOOL v29; // [rsp+4Ch] [rbp-16Ch]
  int v30; // [rsp+54h] [rbp-164h]
  int v31; // [rsp+58h] [rbp-160h]
  int v32; // [rsp+5Ch] [rbp-15Ch]
  int v34; // [rsp+68h] [rbp-150h]
  unsigned int v35; // [rsp+6Ch] [rbp-14Ch]
  _QWORD *v36; // [rsp+70h] [rbp-148h]
  _QWORD *v37; // [rsp+78h] [rbp-140h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-138h] BYREF
  __int64 v39; // [rsp+98h] [rbp-120h]
  BOOL v40; // [rsp+A0h] [rbp-118h]
  unsigned int v41; // [rsp+A4h] [rbp-114h]
  int v42; // [rsp+A8h] [rbp-110h]
  __int64 v43; // [rsp+C0h] [rbp-F8h]
  __int64 v44; // [rsp+C8h] [rbp-F0h]
  PVOID P; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-E0h]
  signed __int64 v47; // [rsp+E0h] [rbp-D8h]
  __int64 v48; // [rsp+E8h] [rbp-D0h]
  __int64 v49; // [rsp+F0h] [rbp-C8h]
  __int64 v50; // [rsp+F8h] [rbp-C0h] BYREF
  int v51[2]; // [rsp+100h] [rbp-B8h]
  __int64 v52; // [rsp+108h] [rbp-B0h]
  _QWORD v53[2]; // [rsp+120h] [rbp-98h] BYREF
  _QWORD v54[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD v55[4]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v56[4]; // [rsp+160h] [rbp-58h] BYREF

  v3 = a1;
  v49 = a1;
  v48 = a2;
  v43 = 0LL;
  v44 = 0LL;
  v31 = 0;
  v32 = 0;
  v28 = 0;
  v34 = 0;
  v35 = 0;
  v39 = 0LL;
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  v4 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v37 = v4;
  v36 = v4;
  v43 = v4[26];
  v44 = v4[27];
  v5 = v4[66];
  v46 = v5;
  v39 = v5;
  LOBYTE(v5) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v43 + 16))(v44, v5);
  v30 = v6;
  if ( v6 )
  {
    v7 = v46;
    while ( 1 )
    {
      v8 = 0LL;
      P = 0LL;
      v29 = v40;
      v9 = v47;
      v10 = v26;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 64), &LockHandle);
        v11 = *(_QWORD *)(a2 + 48);
        v52 = v11;
        if ( v11 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 80));
          v10 = *(_DWORD *)(v11 + 52);
          v12 = v10 == 0;
          v29 = v12;
          v40 = v12;
          v9 = *(_QWORD *)(v11 + 56);
          v47 = v9;
          if ( v10 > 0x800000 )
            v10 = 0x800000;
          v26 = v10;
          *(_DWORD *)(v11 + 52) = 0;
          if ( !v12 )
            *(_QWORD *)(v11 + 64) = v9 + v10;
          if ( (*(_DWORD *)v11 & 0x200000) != 0 )
          {
            v34 = 1;
            v35 = *(_DWORD *)(v11 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 80));
          v27 = (*(_DWORD *)v11 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( !v11 || v29 )
          break;
        v14 = v4[1];
        if ( v9 < v14 )
        {
          v32 = 1;
          if ( v9 + v10 >= v14 )
          {
            v10 = v14 - v9;
            v31 = 1;
          }
          v15 = (v10 + 4095) & 0xFFFFF000;
          v10 = v15;
          v26 = v15;
          v16 = v15;
          v41 = v15;
          *(_QWORD *)v51 = v9;
          v42 = v15;
          if ( v34 )
          {
            if ( !v35 )
              KeBugCheckEx(0x34u, 0xA09uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v17 = v15;
            if ( v15 > v35 )
              v17 = v35;
          }
          else
          {
            v17 = v15;
          }
          if ( (xmmword_1403E4010 & 0x20000) != 0 )
          {
            memset(v55, 0, sizeof(v55));
            v55[1] = v9;
            v55[2] = __PAIR64__(v27, v10);
            v55[0] = a1;
            LODWORD(v55[3]) = 0;
            v53[0] = v55;
            v53[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v53, 1, -2147352576, 5635, 4200706);
          }
          while ( v16 )
          {
            if ( v17 > v16 )
              v17 = v16;
            if ( (xmmword_1403E4010 & 0x20000) != 0 )
            {
              memset(v56, 0, sizeof(v56));
              v56[1] = v9;
              v56[2] = __PAIR64__(v27, v17);
              v56[0] = a1;
              v54[0] = v56;
              v54[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v54, 1, -2147352576, 5643, 4200706);
            }
            v28 |= MmPrefetchForCacheManager(a2, v9, v13, v17, v27, v25, *(_QWORD *)(a1 + 24), (__int64)&P);
            v16 -= v17;
            v41 = v16;
            v9 += v17;
            v47 = v9;
            v8 = P;
          }
          v4 = v37;
        }
        v7 = v46;
      }
      if ( !v8 )
        break;
      CurrentThread = KeGetCurrentThread();
      PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread(CurrentThread, v27);
      LOBYTE(v20) = 1;
      CcMapAndCopyFromCache(a2, v51[0], v42, v20, 0LL, (__int64)&v50, v27, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread(CurrentThread, PagePriorityThread);
      v4 = v36;
      v37 = v36;
      v7 = v39;
      v46 = v39;
    }
    v3 = a1;
  }
  __addgsdword(0x5EE4u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( v30 )
    (*(void (__fastcall **)(__int64))(v43 + 24))(v44);
  v21 = v39;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v39 + 64), &LockHandle);
  v22 = *(_QWORD *)(a2 + 48);
  if ( v22 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v22 + 80));
    *(_DWORD *)v22 &= ~0x10000u;
    if ( v31 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v22 + 64) = 0LL;
    if ( !v28 && v32 )
      *(_DWORD *)v22 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v22 + 80));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  v23 = *(_QWORD *)(v3 + 24);
  if ( v23 )
    IoDiskIoAttributionDereference(v23);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 64), &LockHandle);
  CcDecrementOpenCount(v36);
  *((_DWORD *)v36 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

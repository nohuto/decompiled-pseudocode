/*
 * XREFs of CcGetDirtyPagesHelper @ 0x1400E1FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  void *v3; // r12
  __int64 v4; // rdi
  __int64 i; // rsi
  int v6; // eax
  unsigned __int64 v7; // r14
  __int64 j; // rdi
  unsigned int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v14; // [rsp+50h] [rbp-88h]
  __int64 v15; // [rsp+58h] [rbp-80h] BYREF
  __int64 v16; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-70h]
  void (__fastcall *v18)(unsigned __int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64); // [rsp+70h] [rbp-68h]
  __int64 v19; // [rsp+78h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-58h] BYREF
  __int64 v23; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+20h]

  v2 = a1;
  v3 = 0LL;
  v14 = a2[2];
  v24 = a2[3];
  v4 = *a2;
  v19 = *a2;
  v18 = (void (__fastcall *)(unsigned __int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64))a2[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = *(_QWORD *)(v2 + 96) - 120LL; i != v2 - 24; i = *(_QWORD *)(i + 120) - 120LL )
  {
    v6 = *(_DWORD *)(i + 152);
    if ( (v6 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x408uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v6 & 0x2000000) != 0 && *(_QWORD *)(i + 240) == v4 || (v6 & 0x1000000) != 0 && **(_QWORD **)(i + 240) == v4 )
    {
      ++*(_DWORD *)(i + 4);
      ++*(_DWORD *)(i + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v7 = CcReferenceSharedCacheMapFileObject(i);
      v17 = v7;
      ExAcquireFastMutex((PFAST_MUTEX)(i + 280));
      for ( j = *(_QWORD *)(i + 16) - 16LL; j + 16 != i + 16; j = *(_QWORD *)(j + 16) - 16LL )
      {
        if ( *(_WORD *)j == 765 && *(_BYTE *)(j + 2) )
        {
          v16 = *(_QWORD *)(j + 8);
          v9 = *(_DWORD *)(j + 4);
          v23 = *(_QWORD *)(j + 40);
          v15 = *(_QWORD *)(j + 48);
          ++*(_DWORD *)(j + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(i + 280));
          if ( v3 )
          {
            CcUnpinFileDataEx(v3);
            v3 = 0LL;
          }
          v10 = v9;
          v7 = v17;
          v18(v17, &v16, v10, &v23, &v15, v14, v24);
          if ( v23 )
          {
            v11 = a2[4];
            if ( !v11 || v23 < v11 )
              a2[4] = v23;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(i + 280));
          v12 = *(_DWORD *)(j + 64);
          if ( v12 > 1 )
            *(_DWORD *)(j + 64) = v12 - 1;
          else
            v3 = (void *)j;
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(i + 280));
      CcDereferenceSharedCacheMapFileObject(i, v7);
      if ( v3 )
      {
        CcUnpinFileDataEx(v3);
        v3 = 0LL;
      }
      v2 = a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      --*(_DWORD *)(i + 4);
      --*(_DWORD *)(i + 112);
      v4 = v19;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return 1;
}

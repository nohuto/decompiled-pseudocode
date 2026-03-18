/*
 * XREFs of CcGetDirtyPagesHelper @ 0x140067C40
 * Callers:
 *     <none>
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // r14
  __int64 i; // rsi
  int v7; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 j; // rbx
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v16; // [rsp+50h] [rbp-78h] BYREF
  __int64 v17; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-68h]
  void (__fastcall *v19)(unsigned __int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64); // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+70h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-50h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+18h]
  __int64 v25; // [rsp+E8h] [rbp+20h]

  v3 = a1;
  v4 = 0LL;
  v25 = a2[2];
  v24 = a2[3];
  v5 = *a2;
  v20 = *a2;
  v19 = (void (__fastcall *)(unsigned __int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64))a2[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = *(_QWORD *)(v3 + 96) - 120LL; i != v3 - 24; i = *(_QWORD *)(i + 120) - 120LL )
  {
    v7 = *(_DWORD *)(i + 152);
    if ( (v7 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x3FDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v7 & 0x2000000) != 0 && *(_QWORD *)(i + 240) == v5 || (v7 & 0x1000000) != 0 && **(_QWORD **)(i + 240) == v5 )
    {
      ++*(_DWORD *)(i + 4);
      ++*(_DWORD *)(i + 536);
      ++*(_DWORD *)(i + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v8 = CcReferenceSharedCacheMapFileObject(i);
      v18 = v8;
      ExAcquireFastMutex((PFAST_MUTEX)(i + 280));
      v9 = i + 16;
      for ( j = *(_QWORD *)(i + 16) - 16LL; j + 16 != v9; j = *(_QWORD *)(j + 16) - 16LL )
      {
        if ( *(_WORD *)j == 765 && *(_BYTE *)(j + 2) )
        {
          v17 = *(_QWORD *)(j + 8);
          v11 = *(_DWORD *)(j + 4);
          v23 = *(_QWORD *)(j + 40);
          v16 = *(_QWORD *)(j + 48);
          ++*(_DWORD *)(j + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(i + 280));
          if ( v4 )
          {
            CcUnpinFileDataEx(v4);
            v4 = 0LL;
          }
          v12 = v11;
          v8 = v18;
          v19(v18, &v17, v12, &v23, &v16, v25, v24);
          if ( v23 )
          {
            v13 = a2[4];
            if ( !v13 || v23 < v13 )
              a2[4] = v23;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(i + 280));
          v14 = *(_DWORD *)(j + 64);
          if ( v14 <= 1 )
            v4 = (void *)j;
          else
            *(_DWORD *)(j + 64) = v14 - 1;
          v9 = i + 16;
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(i + 280));
      CcDereferenceSharedCacheMapFileObject(i, v8);
      if ( v4 )
      {
        CcUnpinFileDataEx(v4);
        v4 = 0LL;
      }
      v3 = a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      --*(_DWORD *)(i + 4);
      --*(_DWORD *)(i + 536);
      --*(_DWORD *)(i + 112);
      v5 = v20;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return 1;
}

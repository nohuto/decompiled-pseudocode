/*
 * XREFs of CcGetDirtyPages @ 0x14011A310
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  PVOID v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r14
  LARGE_INTEGER v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 i; // rsi
  unsigned int v12; // r13d
  __int64 v13; // r8
  unsigned int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+40h] [rbp-98h]
  LARGE_INTEGER v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+68h] [rbp-70h] BYREF
  __int64 v21; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+78h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-58h] BYREF

  v4 = LogHandle;
  v5 = 0LL;
  v17 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  v6 = qword_14036F7F0 - 120;
  v7.QuadPart = 0LL;
  while ( (__int64 *)(v6 + 120) != &qword_14036F7F0 )
  {
    v15 = *(_DWORD *)(v6 + 152);
    if ( (v15 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x3DAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v15 & 0x2000000) != 0 && *(PVOID *)(v6 + 240) == v4 || (v15 & 0x1000000) != 0 && **(PVOID **)(v6 + 240) == v4 )
    {
      ++*(_DWORD *)(v6 + 4);
      ++*(_DWORD *)(v6 + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v10 = CcReferenceSharedCacheMapFileObject(v6, v8, v9);
      v22 = v10;
      ExAcquireFastMutex((PFAST_MUTEX)(v6 + 280));
      for ( i = *(_QWORD *)(v6 + 16) - 16LL; i + 16 != v6 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v21 = *(_QWORD *)(i + 8);
          v12 = *(_DWORD *)(i + 4);
          v18 = *(LARGE_INTEGER *)(i + 40);
          v20 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 280));
          if ( v17 )
          {
            CcUnpinFileDataEx(v17, 1LL, 1LL);
            v17 = 0LL;
            v19 = 0LL;
          }
          v13 = v12;
          v10 = v22;
          ((void (__fastcall *)(__int64, __int64 *, __int64, LARGE_INTEGER *, __int64 *, PVOID, PVOID))DirtyPageRoutine)(
            v22,
            &v21,
            v13,
            &v18,
            &v20,
            Context1,
            Context2);
          if ( v18.QuadPart && (!v7.QuadPart || v18.QuadPart < v7.QuadPart) )
            v7 = v18;
          ExAcquireFastMutex((PFAST_MUTEX)(v6 + 280));
          v14 = *(_DWORD *)(i + 64);
          if ( v14 > 1 )
          {
            *(_DWORD *)(i + 64) = v14 - 1;
            v5 = v17;
          }
          else
          {
            v5 = i;
            v17 = i;
            v19 = i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 280));
      CcDereferenceSharedCacheMapFileObject(v6, v10);
      if ( v5 )
      {
        CcUnpinFileDataEx(v5, 1LL, 1LL);
        v5 = 0LL;
        v17 = 0LL;
        v19 = 0LL;
      }
      KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      --*(_DWORD *)(v6 + 4);
      --*(_DWORD *)(v6 + 112);
      v4 = LogHandle;
    }
    v6 = *(_QWORD *)(v6 + 120) - 120LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v7;
}

/*
 * XREFs of CcUninitializeVolumeCacheMap @ 0x14011AF14
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CcUninitializeVolumeCacheMap(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  void *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 )
    KeBugCheckEx(0x34u, 0x56CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v4 - 1;
  *(_DWORD *)(a2 + 4) = v5;
  if ( !v5 )
  {
    v3 = 1;
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(_QWORD **)(a2 + 24);
    if ( *(_QWORD *)(v6 + 8) != a2 + 16 || *v7 != a2 + 16 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(void **)(a2 + 160);
    if ( v8 )
    {
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      *(_QWORD *)(a2 + 160) = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
    ExFreePoolWithTag((PVOID)a2, 0x6D566343u);
}

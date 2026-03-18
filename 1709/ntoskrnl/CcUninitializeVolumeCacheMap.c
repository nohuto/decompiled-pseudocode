/*
 * XREFs of CcUninitializeVolumeCacheMap @ 0x140020048
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcUninitializeVolumeCacheMap(_DWORD *P)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  _DWORD **v5; // rcx
  PVOID *v6; // rdx
  void *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v3 = P[1];
  if ( !v3 )
    KeBugCheckEx(0x34u, 0x590uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = v3 - 1;
  P[1] = v4;
  if ( !v4 )
  {
    v2 = 1;
    v5 = (_DWORD **)*((_QWORD *)P + 2);
    if ( v5[1] != P + 4 || (v6 = (PVOID *)*((_QWORD *)P + 3), *v6 != P + 4) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    v7 = (void *)*((_QWORD *)P + 20);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)P + 20) = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6D566343u);
}

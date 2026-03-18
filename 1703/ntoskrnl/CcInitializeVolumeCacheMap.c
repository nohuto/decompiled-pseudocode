/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x1400AF740
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v3; // rsi
  __int64 v5; // rsi
  KSPIN_LOCK *v6; // rdi
  __int64 *i; // rax
  __int64 *v8; // rbx
  __int64 *PoolWithTag; // rax
  __int64 *j; // rax
  __int64 *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 8);
  else
    v5 = *(_QWORD *)(a2 + 8);
  v6 = (KSPIN_LOCK *)(a1 + 64);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v8 = i - 2;
    if ( *(i - 1) == v5 )
    {
      ++*((_DWORD *)v8 + 1);
      goto LABEL_8;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6D566343u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  ++*((_DWORD *)v8 + 1);
  *(_DWORD *)v8 = 13632248;
  v8[1] = v5;
  KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; j != &CcVolumeCacheMapList; j = (__int64 *)*j )
  {
    v12 = j - 2;
    if ( *(j - 1) == v5 )
    {
      ++*((_DWORD *)v12 + 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExFreePoolWithTag(v8, 0x6D566343u);
      *a3 = v12;
      return 0LL;
    }
  }
  v13 = (_QWORD *)qword_14036B4D8;
  v14 = v8 + 2;
  if ( *(__int64 **)qword_14036B4D8 != &CcVolumeCacheMapList )
    __fastfail(3u);
  *v14 = &CcVolumeCacheMapList;
  v8[3] = (__int64)v13;
  *v13 = v14;
  qword_14036B4D8 = (__int64)(v8 + 2);
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  *a3 = v8;
  return 0LL;
}

/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x14011B48C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, __int64 **a2)
{
  __int64 v2; // rsi
  __int64 v4; // rsi
  __int64 *i; // rax
  __int64 *v6; // rbx
  __int64 *PoolWithTag; // rax
  __int64 *j; // rax
  __int64 *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 8);
  else
    v4 = *(_QWORD *)(a1 + 8);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v6 = i - 2;
    if ( *(i - 1) == v4 )
    {
      ++*((_DWORD *)v6 + 1);
      goto LABEL_8;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6D566343u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  ++*((_DWORD *)v6 + 1);
  *(_DWORD *)v6 = 13632248;
  v6[1] = v4;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; j != &CcVolumeCacheMapList; j = (__int64 *)*j )
  {
    v10 = j - 2;
    if ( *(j - 1) == v4 )
    {
      ++*((_DWORD *)v10 + 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExFreePoolWithTag(v6, 0x6D566343u);
      *a2 = v10;
      return 0LL;
    }
  }
  v11 = (_QWORD *)qword_140387468;
  v12 = v6 + 2;
  if ( *(__int64 **)qword_140387468 != &CcVolumeCacheMapList )
    __fastfail(3u);
  *v12 = &CcVolumeCacheMapList;
  v6[3] = (__int64)v11;
  *v11 = v12;
  qword_140387468 = (__int64)(v6 + 2);
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  *a2 = v6;
  return 0LL;
}

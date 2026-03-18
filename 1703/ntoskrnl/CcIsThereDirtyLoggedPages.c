/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x1400226B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __int64 *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v6 = v5 - 2;
      if ( *(v5 - 1) == a1 )
        break;
      v5 = (__int64 *)*v5;
      v6 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v6 && (v6[8] || *((_DWORD *)v6 + 50)) )
    {
      if ( a2 )
        *a2 = *((_DWORD *)v6 + 16) + *((_DWORD *)v6 + 50);
      v4 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}

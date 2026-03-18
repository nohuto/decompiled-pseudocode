/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x1400389B8
 * Callers:
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 * Callees:
 *     CcPerfLogVolumeLogHandleInfo @ 0x140038A68 (CcPerfLogVolumeLogHandleInfo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcPerfLogLoggedStreamsStats(int a1, int a2)
{
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    if ( i[3] )
    {
      v5 = i[19];
      if ( v5 )
      {
        CcPerfLogVolumeLogHandleInfo(v5, a1, a2, i[17], i[6], i[9]);
        i[19] = 0LL;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

/*
 * XREFs of VidSchDestroyDeviceSyncObject @ 0x1C0002F90
 * Callers:
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00562D8 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C0003030 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 */

void __fastcall VidSchDestroyDeviceSyncObject(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 **v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1904LL), &LockHandle);
  if ( a3 )
    VidSchiRundownMonitoredFenceCpuWaiters(a1, a2);
  if ( a4 )
  {
    v8 = *a4;
    if ( *a4 )
    {
      if ( *(__int64 **)(v8 + 8) != a4 || (v9 = (__int64 **)a4[1], *v9 != a4) )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      a4[1] = 0LL;
      *a4 = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

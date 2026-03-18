/*
 * XREFs of VidSchiClearPeriodicFrameNotifications @ 0x1C0015974
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0 (VidSchDestroyPeriodicFrameNotification.c)
 */

void __fastcall VidSchiClearPeriodicFrameNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 3032);
  if ( *(_QWORD *)(v3 + 61296) )
  {
    v4 = 0LL;
    v5 = 8LL;
    do
    {
      v6 = *(void **)(v4 + *(_QWORD *)(v3 + 61296));
      if ( v6 )
        VidSchDestroyPeriodicFrameNotification(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    ExFreePoolWithTag(*(PVOID *)(v3 + 61296), 0x68536956u);
    *(_QWORD *)(v3 + 61296) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

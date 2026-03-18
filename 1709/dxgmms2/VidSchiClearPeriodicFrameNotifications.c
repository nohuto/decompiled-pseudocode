/*
 * XREFs of VidSchiClearPeriodicFrameNotifications @ 0x1C0015EEC
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0004150 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00B5480 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002B580 (VidSchDestroyPeriodicFrameNotification.c)
 */

void __fastcall VidSchiClearPeriodicFrameNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 3008);
  if ( *(_QWORD *)(v3 + 56816) )
  {
    v4 = 0LL;
    v5 = 8LL;
    do
    {
      v6 = *(void **)(v4 + *(_QWORD *)(v3 + 56816));
      if ( v6 )
        VidSchDestroyPeriodicFrameNotification(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
    ExFreePoolWithTag(*(PVOID *)(v3 + 56816), 0x68536956u);
    *(_QWORD *)(v3 + 56816) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

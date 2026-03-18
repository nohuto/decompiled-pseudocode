/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x1C0012BA4
 * Callers:
 *     VidSchFlushContext @ 0x1C0079050 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  _QWORD **v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)(a1 + 688);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1904LL), &LockHandle);
  v3 = *v1;
  while ( v3 != v1 )
  {
    v4 = (__int64)(v3 - 4);
    LOBYTE(v2) = 1;
    v5 = *((_DWORD *)v3 + 60);
    v3 = (_QWORD *)*v3;
    if ( (v5 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v4, v2);
    else
      VidSchiUnwaitWaitQueuePacket(v4, 1u);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x1C000EA84
 * Callers:
 *     VidSchFlushContext @ 0x1C0070900 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  _QWORD **v1; // rdi
  __int64 v2; // r8
  _QWORD *v3; // rbx
  struct _VIDSCH_QUEUE_PACKET *v4; // rcx
  int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)(a1 + 680);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1888LL), &LockHandle);
  v3 = *v1;
  while ( v3 != v1 )
  {
    v4 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 4);
    v5 = *((_DWORD *)v3 + 64);
    v3 = (_QWORD *)*v3;
    if ( (v5 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v4, 1u);
    else
      VidSchiUnwaitWaitQueuePacket((__int64)v4, 1u, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

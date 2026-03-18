/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x1C0002254
 * Callers:
 *     VidSchFlushContext @ 0x1C004FDC0 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00119D0 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  _QWORD **v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  struct _VIDSCH_QUEUE_PACKET *v4; // rcx
  int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)(a1 + 704);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1880LL), &LockHandle);
  v3 = *v1;
  while ( v3 != v1 )
  {
    v4 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 4);
    LOBYTE(v2) = 1;
    v5 = *((_DWORD *)v3 + 58);
    v3 = (_QWORD *)*v3;
    if ( (v5 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v4, 1u);
    else
      VidSchiUnwaitWaitQueuePacket(v4, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

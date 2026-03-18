/*
 * XREFs of ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888
 * Callers:
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0001054 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D814 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C000EA84 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000F674 (-VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0017DD4 (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C (VidSchiUnwaitWaitQueuePacket.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

void __fastcall VidSchiUnblockUnorderedWaitQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1, unsigned __int8 a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rax
  __int64 v4; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *((_QWORD *)a1 + 37);
  v3 = (_QWORD *)((char *)a1 + 304);
  v4 = *((_QWORD *)a1 + 38);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v4 + 8) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 304)
    || (v6 = (_QWORD *)*((_QWORD *)a1 + 39), (_QWORD *)*v6 != v3) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *(_QWORD **)(v2 + 96);
  if ( *v7 != v2 + 88 )
    __fastfail(3u);
  v3[1] = v7;
  *v3 = v2 + 88;
  *v7 = v3;
  *(_QWORD *)(v2 + 96) = v3;
  *((_DWORD *)a1 + 72) &= ~4u;
  --*(_DWORD *)(v2 + 36);
  --*(_DWORD *)(*((_QWORD *)a1 + 11) + 780LL);
  --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 1204LL);
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
  --*(_DWORD *)(v8 + 976);
  if ( a2 )
  {
    VidSchiUnwaitWaitQueuePacket((__int64)a1, a2, (__int64)a1);
    if ( bTracingEnabled )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventPerformanceWarning);
    }
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
}

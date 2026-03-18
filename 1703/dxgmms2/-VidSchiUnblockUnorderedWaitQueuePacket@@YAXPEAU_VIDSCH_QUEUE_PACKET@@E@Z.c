/*
 * XREFs of ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00119D0
 * Callers:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0002254 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000AA20 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000DB74 (VidSchiSubmitWaitCommand.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0011940 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0015900 (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
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

  v2 = *((_QWORD *)a1 + 34);
  v3 = (_QWORD *)((char *)a1 + 280);
  v4 = *((_QWORD *)a1 + 35);
  v6 = (_QWORD *)*((_QWORD *)a1 + 36);
  if ( *(_QWORD **)(v4 + 8) != v3 || (_QWORD *)*v6 != v3 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *(_QWORD **)(v2 + 96);
  if ( *v7 != v2 + 88 )
    __fastfail(3u);
  v3[1] = v7;
  *v3 = v2 + 88;
  *v7 = v3;
  *(_QWORD *)(v2 + 96) = v3;
  *((_DWORD *)a1 + 66) &= ~4u;
  --*(_DWORD *)(v2 + 36);
  --*(_DWORD *)(*((_QWORD *)a1 + 11) + 804LL);
  --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 1204LL);
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
  --*(_DWORD *)(v8 + 980);
  if ( a2 )
  {
    VidSchiUnwaitWaitQueuePacket((__int64)a1, a2, (__int64)a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v9, &EventPerformanceWarning);
    }
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
}

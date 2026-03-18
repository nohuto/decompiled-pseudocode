/*
 * XREFs of VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00111BC (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0012BA4 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013038 (-VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0017784 (VidSchiRundownUnorderedWaiterContext.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C002D380 (VidSchiUnblockUnorderedWaiter.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108 (-VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 */

void __fastcall VidSchiUnblockUnorderedWaitQueuePacket(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  _QWORD *v9; // r11
  _QWORD *v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 104);
  else
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 8LL);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (_QWORD *)(a1 + 288);
  v7 = *(_QWORD *)(a1 + 288);
  v8 = *(_QWORD *)(a1 + 280);
  if ( *(_QWORD *)(v7 + 8) != a1 + 288 || (v9 = *(_QWORD **)(a1 + 296), (_QWORD *)*v9 != v6) )
    __fastfail(3u);
  *v9 = v7;
  *(_QWORD *)(v7 + 8) = v9;
  v10 = *(_QWORD **)(v8 + 96);
  if ( *v10 != v8 + 88 )
    __fastfail(3u);
  *v6 = v8 + 88;
  *(_QWORD *)(a1 + 296) = v10;
  *v10 = v6;
  *(_QWORD *)(v8 + 96) = v6;
  *(_DWORD *)(a1 + 272) &= ~4u;
  --*(_DWORD *)(v8 + 36);
  v11 = *(_QWORD *)(a1 + 88);
  if ( v11 )
    --*(_DWORD *)(v11 + 788);
  --*(_DWORD *)(v4 + 1228);
  --*(_DWORD *)(v5 + 992);
  if ( a2 )
  {
    VidSchiUnwaitWaitQueuePacket(a1, a2);
    if ( bTracingEnabled )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventPerformanceWarning);
    }
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
}

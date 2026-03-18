/*
 * XREFs of ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04
 * Callers:
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030D38 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031FC4 (-VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     ?SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F5A0 (-SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F760 (-SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030440 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0031368 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiReleasePacketToGpu(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v5; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v2 = *((_QWORD *)a1 + 12);
  v3 = (_QWORD *)((char *)a1 + 32);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v2 + 112) == (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v5[3] = v2;
    v5[4] = *(_QWORD *)(v2 + 112);
    v5[5] = *v3;
    WdLogEvent5_WdEvent(v5);
    *(_QWORD *)(v2 + 112) = *v3;
  }
  v6 = *((_DWORD *)a1 + 12);
  if ( !v6 )
  {
    SubmitRenderToHwQueue(a1);
    return;
  }
  v7 = v6 - 3;
  if ( !v7 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1);
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    VidSchiCompleteHwQueueWaitPacket(a1, a2);
    return;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((_QWORD *)a1 + 5) == *((_QWORD *)a1 + 12) + 96LL )
    {
      VidSchiCompleteHwQueueSignalPacket(a1, a2);
      return;
    }
LABEL_13:
    *((_DWORD *)a1 + 20) |= 1u;
    return;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( *((_QWORD *)a1 + 5) == *((_QWORD *)a1 + 12) + 96LL )
    {
      VidSchiCompleteHwQueuePacket(a1);
      return;
    }
    goto LABEL_13;
  }
  if ( v10 == 1 )
    SubmitPagingToHwQueue(a1);
}

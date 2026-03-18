/*
 * XREFs of ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030D38
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0031278 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiInsertCommandToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 24);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 24) + 964LL));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2820));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 1220));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 1224));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 152));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 88));
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 6;
  v6 = WdLogNewEntry5_WdEvent(v5, v4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v1;
  WdLogEvent5_WdEvent(v6);
  v9 = (_QWORD *)(v1 + 96);
  v10 = *(_QWORD **)(v1 + 104);
  v11 = (_QWORD *)((char *)a1 + 32);
  if ( *v10 != v1 + 96 )
    __fastfail(3u);
  *v11 = v9;
  *((_QWORD *)a1 + 5) = v10;
  *v10 = v11;
  *(_QWORD *)(v1 + 104) = v11;
  if ( *(_QWORD **)(v1 + 112) == v9 )
  {
    if ( *((_DWORD *)a1 + 12) != 4 || (*((_DWORD *)a1 + 68) & 1) != 0 )
    {
      v14 = WdLogNewEntry5_WdEvent(v8, v7);
      *(_QWORD *)(v14 + 24) = v1;
      *(_QWORD *)(v14 + 32) = a1;
      WdLogEvent5_WdEvent(v14);
      VidSchiSetHwQueueState(v1, 1LL);
      VidSchiReleasePacketToGpu(a1);
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
      v13[3] = v1;
      v13[4] = *(_QWORD *)(v1 + 112);
      v13[5] = v11;
      WdLogEvent5_WdEvent(v13);
      *(_QWORD *)(v1 + 112) = v11;
      if ( (_QWORD *)*v9 == v11 )
        VidSchiSetHwQueueState(v1, 2LL);
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
    v12[3] = v1;
    v12[4] = *(_QWORD *)(v1 + 112);
    v12[5] = a1;
    v12[6] = *((int *)a1 + 12);
    WdLogEvent5_WdEvent(v12);
  }
}

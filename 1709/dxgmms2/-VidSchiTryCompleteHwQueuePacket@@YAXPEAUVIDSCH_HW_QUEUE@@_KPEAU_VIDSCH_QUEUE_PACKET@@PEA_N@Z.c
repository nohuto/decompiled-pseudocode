/*
 * XREFs of ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C002D6D8
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002D7D0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C002D418 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 */

void __fastcall VidSchiTryCompleteHwQueuePacket(
        struct VIDSCH_HW_QUEUE *a1,
        unsigned __int64 a2,
        struct _VIDSCH_QUEUE_PACKET *a3,
        bool *a4)
{
  int v6; // r8d
  __int64 v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  bool v13; // dl

  v6 = *((_DWORD *)a3 + 12);
  *a4 = 0;
  if ( v6 )
  {
    v8 = (unsigned int)(v6 - 4);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, v8);
        v9[3] = 281LL;
        v9[4] = 2048LL;
        v9[5] = a1;
        v9[6] = a3;
        v9[7] = *((int *)a3 + 12);
        WdLogEvent5_WdCriticalError(v9);
        __debugbreak();
      }
      VidSchiCompleteHwQueueSignalPacket(a3, a2);
      goto LABEL_14;
    }
    if ( (*((_DWORD *)a3 + 72) & 1) != 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, v8);
      v10[3] = 281LL;
      v10[4] = 2048LL;
      v10[5] = a1;
      v10[6] = a3;
      v10[7] = *((int *)a3 + 12);
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
  }
  else
  {
    v11 = *((_QWORD *)a1 + 5);
    v12 = *((_QWORD *)a3 + 17);
    if ( *(_BYTE *)(v11 + 28) || (!*(_BYTE *)(v11 + 29) ? (v13 = (int)a2 - (int)v12 >= 0) : (v13 = a2 >= v12), v13) )
    {
      VidSchiCompleteHwQueueRenderPacket(a3);
LABEL_14:
      *a4 = 1;
    }
  }
}

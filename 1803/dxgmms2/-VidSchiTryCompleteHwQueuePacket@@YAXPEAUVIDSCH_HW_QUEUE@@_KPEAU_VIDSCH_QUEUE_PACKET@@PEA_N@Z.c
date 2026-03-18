/*
 * XREFs of ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0031EE4
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003202C (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 */

void __fastcall VidSchiTryCompleteHwQueuePacket(
        struct VIDSCH_HW_QUEUE *a1,
        unsigned __int64 a2,
        struct _VIDSCH_QUEUE_PACKET *a3,
        bool *a4)
{
  int v6; // r8d
  int v8; // r8d
  __int64 v9; // r8
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // dl

  v6 = *((_DWORD *)a3 + 12);
  *a4 = 0;
  if ( v6 )
  {
    v8 = v6 - 5;
    if ( !v8 )
    {
      if ( *((struct VIDSCH_HW_QUEUE **)a3 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a1 + 96) )
        return;
      VidSchiCompleteHwQueueSignalPacket(a3, a2);
      goto LABEL_18;
    }
    v9 = (unsigned int)(v8 - 2);
    if ( !(_DWORD)v9 )
    {
      if ( *((struct VIDSCH_HW_QUEUE **)a3 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a1 + 96) )
        return;
      goto LABEL_17;
    }
    if ( (_DWORD)v9 != 1 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, v9);
      v10[3] = 281LL;
      v10[4] = 2048LL;
      v10[5] = a1;
      v10[6] = a3;
      v10[7] = *((int *)a3 + 12);
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    v11 = *((_QWORD *)a3 + 36);
  }
  else
  {
    v11 = *((_QWORD *)a3 + 93);
  }
  v12 = *((_QWORD *)a1 + 5);
  if ( *(_BYTE *)(v12 + 28) || (!*(_BYTE *)(v12 + 29) ? (v13 = (int)a2 - (int)v11 >= 0) : (v13 = a2 >= v11), v13) )
  {
LABEL_17:
    VidSchiCompleteHwQueuePacket(a3);
LABEL_18:
    *a4 = 1;
  }
}

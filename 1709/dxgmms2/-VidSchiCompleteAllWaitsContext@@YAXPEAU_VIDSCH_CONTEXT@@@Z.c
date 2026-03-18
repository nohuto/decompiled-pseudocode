/*
 * XREFs of ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000F674
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C000F57C (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiCompleteAllWaitsContext(struct _VIDSCH_CONTEXT *a1, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  char *v4; // rdi
  struct _VIDSCH_QUEUE_PACKET *v5; // rbx
  bool v6; // zf
  int v7; // eax

  v3 = (char *)a1 + 648;
  v4 = (char *)*((_QWORD *)a1 + 81);
  while ( v4 != v3 )
  {
    v5 = (struct _VIDSCH_QUEUE_PACKET *)(v4 - 32);
    v6 = *((_DWORD *)v4 + 4) == 4;
    v4 = *(char **)v4;
    if ( v6 )
    {
      v7 = *((_DWORD *)v5 + 72);
      if ( (v7 & 1) == 0 )
      {
        if ( (v7 & 4) != 0 )
          VidSchiUnblockUnorderedWaitQueuePacket(v5, 0);
        VidSchiUnwaitWaitQueuePacket((__int64)v5, 0, a3);
      }
    }
  }
}

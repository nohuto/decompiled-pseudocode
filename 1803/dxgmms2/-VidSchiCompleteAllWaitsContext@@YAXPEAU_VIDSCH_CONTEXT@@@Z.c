/*
 * XREFs of ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013038
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0012F40 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteAllWaitsContext(struct _VIDSCH_CONTEXT *a1)
{
  char *v1; // rsi
  char *v2; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v1 = (char *)a1 + 656;
  v2 = (char *)*((_QWORD *)a1 + 82);
  while ( v2 != v1 )
  {
    v3 = (__int64)(v2 - 32);
    v2 = *(char **)v2;
    if ( *(_DWORD *)(v3 + 48) == 4 )
    {
      v4 = *(_DWORD *)(v3 + 272);
      if ( (v4 & 1) == 0 )
      {
        if ( (v4 & 4) != 0 )
          VidSchiUnblockUnorderedWaitQueuePacket(v3, 0LL);
        VidSchiUnwaitWaitQueuePacket(v3, 0);
      }
    }
  }
}

/*
 * XREFs of VidSchiIsFlipQueuePacket @ 0x1C00160D4
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00155DC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsFlipQueuePacket(_DWORD *a1, int a2)
{
  return ((a1[18] & 0x80004) != 0 || a1[12] == 3) && (a1[101] == a2 || a2 == -1);
}

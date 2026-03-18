/*
 * XREFs of VidSchiFlushQueuePacket @ 0x1C002830C
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00155DC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 */

void __fastcall VidSchiFlushQueuePacket(__int64 a1, union _ULARGE_INTEGER *a2, int a3)
{
  if ( !a3 && (a2[9].LowPart & 0x40080) != 0 )
  {
    if ( a2[21].QuadPart )
    {
      VidSchiSubmitPresentHistoryToken(a2, 0LL, 0LL, 0LL);
      a2[21].QuadPart = 0LL;
    }
  }
}

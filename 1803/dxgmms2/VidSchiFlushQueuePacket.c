/*
 * XREFs of VidSchiFlushQueuePacket @ 0x1C002B154
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0015A0C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 */

void __fastcall VidSchiFlushQueuePacket(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 && (*(_DWORD *)(a2 + 72) & 0x40080) != 0 )
  {
    if ( *(_QWORD *)(a2 + 152) )
    {
      VidSchiSubmitPresentHistoryToken((_QWORD *)a2, 0LL, 0LL, 0LL);
      *(_QWORD *)(a2 + 152) = 0LL;
    }
  }
}

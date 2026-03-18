/*
 * XREFs of VidSchiFlushQueuePacket @ 0x1C00262BC
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0013350 (VidSchFlushQueuePackets.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00280C4 (VidSchiSubmitPresentHistoryToken.c)
 */

__int64 __fastcall VidSchiFlushQueuePacket(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( !a3 && (*(_DWORD *)(a2 + 72) & 0x40080) != 0 )
  {
    if ( *(_QWORD *)(a2 + 144) )
    {
      result = VidSchiSubmitPresentHistoryToken(a2);
      *(_QWORD *)(a2 + 144) = 0LL;
    }
  }
  return result;
}

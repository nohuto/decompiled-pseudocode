/*
 * XREFs of ??$IsBufferAligned@U_NET_PACKET@@@@YA_NPEAX@Z @ 0x1C007C5B4
 * Callers:
 *     NetPacketInitializeMany @ 0x1C00FC280 (NetPacketInitializeMany.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsBufferAligned<_NET_PACKET>(char a1)
{
  return (a1 & 0x3F) == 0;
}

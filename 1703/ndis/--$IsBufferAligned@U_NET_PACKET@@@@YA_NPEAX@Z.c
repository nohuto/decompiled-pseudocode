/*
 * XREFs of ??$IsBufferAligned@U_NET_PACKET@@@@YA_NPEAX@Z @ 0x1C00783EC
 * Callers:
 *     NetPacketInitializeMany @ 0x1C00F2D90 (NetPacketInitializeMany.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsBufferAligned<_NET_PACKET>(char a1)
{
  return (a1 & 0x3F) == 0;
}

/*
 * XREFs of ??$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z @ 0x1C007C5C4
 * Callers:
 *     NetPacketDestroyMany @ 0x1C00FBF50 (NetPacketDestroyMany.c)
 *     NetPacketInitializeMany @ 0x1C00FC280 (NetPacketInitializeMany.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OffsetPointerBy<_NET_PACKET>(__int64 a1, unsigned int a2)
{
  return a1 + a2;
}

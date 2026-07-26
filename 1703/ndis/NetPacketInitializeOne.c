/*
 * XREFs of NetPacketInitializeOne @ 0x1C00F2F20
 * Callers:
 *     <none>
 * Callees:
 *     NetPacketGetSize @ 0x1C00F2D60 (NetPacketGetSize.c)
 *     NetPacketInitializeMany @ 0x1C00F2D90 (NetPacketInitializeMany.c)
 */

char __fastcall NetPacketInitializeOne(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int Size; // eax

  Size = NetPacketGetSize(a4);
  return NetPacketInitializeMany(a1, a2, a3, Size, a4, 1u);
}

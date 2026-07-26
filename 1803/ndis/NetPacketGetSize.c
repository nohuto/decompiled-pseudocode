/*
 * XREFs of NetPacketGetSize @ 0x1C00FE860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NetPacketGetSize()
{
  return ~(dword_1C00996F4 - 1) & (unsigned int)(dword_1C00996F4 + Size - 1);
}

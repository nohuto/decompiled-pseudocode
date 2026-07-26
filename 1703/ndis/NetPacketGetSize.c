/*
 * XREFs of NetPacketGetSize @ 0x1C00F2D60
 * Callers:
 *     NetPacketInitializeOne @ 0x1C00F2F20 (NetPacketInitializeOne.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetPacketGetSize(int a1)
{
  __int64 result; // rax

  result = (unsigned int)Size;
  if ( a1 != 1 )
    return 32 * (a1 - 1) + (~(dword_1C00926FC - 1) & (unsigned int)(dword_1C00926FC + Size - 1));
  return result;
}

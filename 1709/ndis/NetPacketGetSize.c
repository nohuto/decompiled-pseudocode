/*
 * XREFs of NetPacketGetSize @ 0x1C00FC250
 * Callers:
 *     NetPacketInitializeOne @ 0x1C00FC410 (NetPacketInitializeOne.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetPacketGetSize(int a1)
{
  __int64 result; // rax

  result = (unsigned int)Size;
  if ( a1 != 1 )
    return 32 * (a1 - 1) + (~(dword_1C0098814 - 1) & (unsigned int)(dword_1C0098814 + Size - 1));
  return result;
}

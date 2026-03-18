/*
 * XREFs of MY_WRITE_PORT_USHORT @ 0x140132FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MY_WRITE_PORT_USHORT(unsigned __int16 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  result = a2;
  __outword(a1, a2);
  return result;
}

/*
 * XREFs of MY_WRITE_PORT_ULONG @ 0x140132FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MY_WRITE_PORT_ULONG(unsigned __int16 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  result = a2;
  __outdword(a1, a2);
  return result;
}

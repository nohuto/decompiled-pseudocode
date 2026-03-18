/*
 * XREFs of MY_WRITE_PORT_UCHAR @ 0x140132FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MY_WRITE_PORT_UCHAR(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  result = a2;
  __outbyte(a1, a2);
  return result;
}

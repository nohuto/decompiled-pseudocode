/*
 * XREFs of RIMPbuttonToCursor @ 0x1C00089AC
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C000917C (RIMGetDeviceButtons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMPbuttonToCursor(__int16 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 66 )
    return 1LL;
  if ( a1 == 69 || a1 == 60 )
    return 2LL;
  return result;
}

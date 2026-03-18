/*
 * XREFs of xxxUpdateSystemCursorsFromRegistry @ 0x1C00515BC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00515F0 (xxxUpdateSystemCursorFromRegistry.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 19; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, (unsigned int)i);
  return result;
}

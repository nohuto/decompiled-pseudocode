/*
 * XREFs of xxxUpdateSystemCursorsFromRegistry @ 0x1C00C128C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 17; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, (unsigned int)i);
  return result;
}

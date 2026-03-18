/*
 * XREFs of FreeScancodeMap @ 0x1C0092960
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 FreeScancodeMap()
{
  __int64 result; // rax

  if ( gpScancodeMap )
  {
    result = Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  if ( gpFlexMap )
  {
    result = Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  return result;
}

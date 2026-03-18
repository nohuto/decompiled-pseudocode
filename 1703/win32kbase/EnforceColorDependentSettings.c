/*
 * XREFs of EnforceColorDependentSettings @ 0x1C00743A0
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 */

__int64 EnforceColorDependentSettings()
{
  __int64 result; // rax

  result = *((unsigned int *)gpDispInfo + 37);
  if ( (result & 2) != 0 )
  {
    gbDisableAlpha = 1;
  }
  else
  {
    result = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 24);
    gbDisableAlpha = result != -1;
  }
  return result;
}

/*
 * XREFs of EnforceColorDependentSettings @ 0x1C0061FC0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 */

__int64 EnforceColorDependentSettings()
{
  __int64 result; // rax

  result = *(unsigned int *)(gpDispInfo + 124);
  if ( (result & 2) != 0 )
  {
    gbDisableAlpha = 1;
  }
  else
  {
    result = GreGetDeviceCaps(*(struct HOBJ__ **)(gpDispInfo + 48), 24);
    gbDisableAlpha = result != -1;
  }
  return result;
}

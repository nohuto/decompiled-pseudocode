/*
 * XREFs of _wcslwr_s @ 0x14016A190
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     wcsnlen @ 0x14016BD00 (wcsnlen.c)
 */

errno_t __cdecl wcslwr_s(wchar_t *Str, size_t SizeInWords)
{
  wchar_t *v2; // rbx

  v2 = Str;
  if ( !Str )
    goto LABEL_2;
  if ( wcsnlen(Str, SizeInWords) >= SizeInWords )
  {
    *v2 = 0;
LABEL_2:
    xHalTimerWatchdogStop();
    return 22;
  }
  while ( *v2 )
  {
    if ( (unsigned __int16)(*v2 - 65) <= 0x19u )
      *v2 += 32;
    ++v2;
  }
  return 0;
}

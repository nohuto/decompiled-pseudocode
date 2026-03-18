/*
 * XREFs of KiIsFlushEntire @ 0x14024519C
 * Callers:
 *     KiPreprocessFlushTb @ 0x140034B20 (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsFlushEntire(int a1)
{
  if ( KiFlushPcid )
    return 0;
  if ( KiKvaShadow )
  {
    if ( !a1 || a1 == 2 )
      return 0;
  }
  else if ( a1 && a1 <= 2 )
  {
    return 0;
  }
  return 1;
}

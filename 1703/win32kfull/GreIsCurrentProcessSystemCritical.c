/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C0022760
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0022778 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
}

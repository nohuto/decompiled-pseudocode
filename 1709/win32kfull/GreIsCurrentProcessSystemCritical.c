/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C00B0F60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B0D48 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
}

/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x1406339D0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

__int64 ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}

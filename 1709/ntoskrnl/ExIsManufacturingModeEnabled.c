/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140519CB0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

__int64 ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}

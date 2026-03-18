/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x1405ADA50
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

__int64 ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}

/*
 * XREFs of RIMIsDeviceArbitrationEnabled @ 0x1C0105130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RIMIsDeviceArbitrationEnabled()
{
  return gDeviceArbitrationType != 0;
}

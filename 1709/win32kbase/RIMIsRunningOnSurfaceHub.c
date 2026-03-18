/*
 * XREFs of RIMIsRunningOnSurfaceHub @ 0x1C0107E94
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C009B3BC (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C0115068 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C000E974 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnSurfaceHub()
{
  return (unsigned int)RIMGetOneCoreEdition() == 6;
}

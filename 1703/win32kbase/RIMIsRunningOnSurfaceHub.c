/*
 * XREFs of RIMIsRunningOnSurfaceHub @ 0x1C010C8C0
 * Callers:
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C0007B64 (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01164F8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C000A0B0 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnSurfaceHub()
{
  return (unsigned int)RIMGetOneCoreEdition() == 6;
}

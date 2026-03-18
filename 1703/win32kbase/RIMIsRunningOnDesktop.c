/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C0008234
 * Callers:
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C0007B64 (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C0104D88 (RIMAbConfigureDeviceArbitration.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C000A0B0 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}

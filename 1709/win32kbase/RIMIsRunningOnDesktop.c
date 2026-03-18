/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C009B3E0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C009B3BC (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C0104BC0 (RIMAbConfigureDeviceArbitration.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C000E974 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}

/*
 * XREFs of RIMIsRunningOnMobile @ 0x1C000E954
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     RIMUpdateMonitorQuirk @ 0x1C000B05C (RIMUpdateMonitorQuirk.c)
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C0113D8C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x1C0114168 (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C000E974 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnMobile()
{
  return (unsigned int)RIMGetOneCoreEdition() == 4;
}

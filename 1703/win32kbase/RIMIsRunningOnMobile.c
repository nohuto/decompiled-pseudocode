/*
 * XREFs of RIMIsRunningOnMobile @ 0x1C000A090
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01152C4 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x1C0115698 (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C000A0B0 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnMobile()
{
  return (unsigned int)RIMGetOneCoreEdition() == 4;
}

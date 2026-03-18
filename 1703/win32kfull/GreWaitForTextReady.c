/*
 * XREFs of GreWaitForTextReady @ 0x1C011C7C0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 GreWaitForTextReady(void)
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
}

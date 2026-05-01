/*
 * XREFs of _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock__ @ 0x180001780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock__()
{
  InitializeCriticalSectionEx(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock__);
}

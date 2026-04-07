/*
 * XREFs of _dynamic_atexit_destructor_for__CDesktopManager::s_csDwmInstance__ @ 0x180046E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CDesktopManager::s_csDwmInstance__()
{
  DeleteCriticalSection(&CDesktopManager::s_csDwmInstance);
}

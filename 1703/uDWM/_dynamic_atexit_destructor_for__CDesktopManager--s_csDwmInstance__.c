/*
 * XREFs of _dynamic_atexit_destructor_for__CDesktopManager::s_csDwmInstance__ @ 0x18004E730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CDesktopManager::s_csDwmInstance__()
{
  DeleteCriticalSection(&CDesktopManager::s_csDwmInstance);
}

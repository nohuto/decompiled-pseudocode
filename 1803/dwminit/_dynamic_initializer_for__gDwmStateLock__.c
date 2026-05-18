/*
 * XREFs of _dynamic_initializer_for__gDwmStateLock__ @ 0x180001120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__gDwmStateLock__()
{
  InitializeSRWLock(&gDwmStateLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__gDwmStateLock__);
}

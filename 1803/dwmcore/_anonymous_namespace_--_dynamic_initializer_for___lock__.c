/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for___lock__ @ 0x1800011C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int anonymous_namespace_::_dynamic_initializer_for___lock__()
{
  InitializeSRWLock(&SRWLock);
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for___lock__);
}

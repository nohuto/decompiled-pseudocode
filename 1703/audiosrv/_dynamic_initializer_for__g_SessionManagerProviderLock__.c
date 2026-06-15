/*
 * XREFs of _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001100
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_SessionManagerProviderLock__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_SessionManagerProviderLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SessionManagerProviderLock__);
}

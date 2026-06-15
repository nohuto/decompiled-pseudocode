/*
 * XREFs of _dynamic_initializer_for__g_CritSecSadMap__ @ 0x1400010F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140002760 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_CritSecSadMap__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_CritSecSadMap);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritSecSadMap__);
}

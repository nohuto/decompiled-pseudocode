/*
 * XREFs of _dynamic_initializer_for__g_csVadList__ @ 0x1800011E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_csVadList__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_csVadList);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csVadList__);
}

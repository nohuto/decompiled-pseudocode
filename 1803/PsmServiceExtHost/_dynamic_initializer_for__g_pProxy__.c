/*
 * XREFs of _dynamic_initializer_for__g_pProxy__ @ 0x180001000
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x180034408 (--0-$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_pProxy__()
{
  ATL::CComPtr<ResourceManagerServerProxy>::CComPtr<ResourceManagerServerProxy>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_pProxy__);
}

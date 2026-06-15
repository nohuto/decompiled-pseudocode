/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800293E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003754 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  if ( lpMem )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(lpMem);
}

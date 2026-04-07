/*
 * XREFs of ??1?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180048E58
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x18004BA40 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18006E440 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

__int64 wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::~ProcessLocalStorage<wil::details_abi::ProcessLocalData>()
{
  __int64 result; // rax

  if ( lpMem )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(lpMem);
  return result;
}

/*
 * XREFs of ??1?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800DA98C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800DEA70 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180142840 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

__int64 wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::~ProcessLocalStorage<wil::details_abi::ProcessLocalData>()
{
  __int64 result; // rax

  if ( qword_1802D40A8 )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(qword_1802D40A8);
  return result;
}

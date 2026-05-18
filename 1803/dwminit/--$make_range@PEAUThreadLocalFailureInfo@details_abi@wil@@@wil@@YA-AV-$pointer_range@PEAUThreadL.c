/*
 * XREFs of ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x180006FC8
 * Callers:
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x1800062D0 (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180006364 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = a2;
  a1[1] = a2 + 88 * a3;
  return a1;
}

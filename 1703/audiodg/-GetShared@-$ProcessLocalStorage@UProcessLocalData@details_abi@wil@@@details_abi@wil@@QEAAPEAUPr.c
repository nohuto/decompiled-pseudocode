/*
 * XREFs of ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x140033168
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1400332B8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140032574 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::GetShared(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = 0LL;
  if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
  {
    v3 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
    v6 = 0LL;
    if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v3, &v6) >= 0
      && !*(_QWORD *)(v1 + 8) )
    {
      *(_QWORD *)(v1 + 8) = v6;
    }
  }
  v4 = *(_QWORD *)(v1 + 8);
  if ( v4 )
    return v4 + 32;
  return v2;
}

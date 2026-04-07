/*
 * XREFs of ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180018BF4
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18001788C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180018D48 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !a1[1] )
  {
    v3 = *a1;
    v6 = 0LL;
    if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(v3, &v6) >= 0
      && !a1[1] )
    {
      a1[1] = v6;
    }
  }
  v4 = a1[1];
  if ( v4 )
    return v4 + 32;
  return v1;
}

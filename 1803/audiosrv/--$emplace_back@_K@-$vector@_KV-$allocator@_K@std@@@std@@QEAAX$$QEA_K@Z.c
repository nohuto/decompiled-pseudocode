/*
 * XREFs of ??$emplace_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAX$$QEA_K@Z @ 0x1800D617C
 * Callers:
 *     asm_GetApplicationSubmixes @ 0x1800D7D20 (asm_GetApplicationSubmixes.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800D71DC (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 */

__int64 __fastcall std::vector<unsigned __int64>::emplace_back<unsigned __int64>(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // [rsp+70h] [rbp+18h]

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v13 = v11;
    try
    {
      v11[v7] = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v10, 8uLL);
      throw;
    }
    return std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
             a1,
             v12,
             v7 + 1,
             v10,
             -2LL);
  }
  else
  {
    result = *a2;
    *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}

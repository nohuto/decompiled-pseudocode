/*
 * XREFs of ??$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAX$$QEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@Z @ 0x1800C1AF4
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z @ 0x1800C38F0 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@PEAU123@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@YAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800C1A8C (--$_Uninitialized_move_al_unchecked1@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManage.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800C4BF8 (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::emplace_back<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 *v12; // rax
  _QWORD *v13; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = (__int64 *)a1[1];
  if ( (__int64 *)result == v5 )
  {
    v6 = (__int64)((__int64)v5 - *a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = (__int64)(result - *a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = std::_Allocate(v9, 8uLL);
    v11 = v10;
    v13 = v10;
    try
    {
      v12 = &v10[v6];
      if ( v12 )
        *v12 = *a2;
      std::_Uninitialized_move_al_unchecked1<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *,Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *,std::allocator<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v9, 8uLL);
      throw;
    }
    return std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
             a1,
             v11,
             v6 + 1,
             v9);
  }
  else
  {
    if ( v5 )
    {
      result = *a2;
      *v5 = *a2;
    }
    a1[1] += 8LL;
  }
  return result;
}

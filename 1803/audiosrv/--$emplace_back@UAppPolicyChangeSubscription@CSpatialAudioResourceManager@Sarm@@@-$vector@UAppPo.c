/*
 * XREFs of ??$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAX$$QEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@Z @ 0x1800F1B1C
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z @ 0x1800F3D50 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800D71DC (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@PEAU123@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@YAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@PEAU123@00AEAV?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800F1ABC (--$_Uninitialized_move_al_unchecked@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::emplace_back<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // [rsp+80h] [rbp+18h]

  v4 = (__int64 *)a1[2];
  v5 = (__int64 *)a1[1];
  if ( v4 == v5 )
  {
    v7 = (__int64)((__int64)v5 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = (__int64)((__int64)v4 - *a1) >> 3;
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
    v12 = (__int64)v11;
    v13 = v11;
    try
    {
      v11[v7] = *a2;
      std::_Uninitialized_move_al_unchecked<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *,Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *,std::allocator<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v10, 8uLL);
      throw;
    }
    return std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
             (__int64)a1,
             v12,
             v7 + 1,
             v10);
  }
  else
  {
    result = *a2;
    *v5 = *a2;
    a1[1] += 8LL;
  }
  return result;
}

/*
 * XREFs of ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800D71DC
 * Callers:
 *     ??$emplace_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAX$$QEA_K@Z @ 0x1800D617C (--$emplace_back@_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAX$$QEA_K@Z.c)
 *     ??$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAX$$QEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@Z @ 0x1800F1B1C (--$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector@UAppPo.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
    std::_Deallocate(v6, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3, 8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

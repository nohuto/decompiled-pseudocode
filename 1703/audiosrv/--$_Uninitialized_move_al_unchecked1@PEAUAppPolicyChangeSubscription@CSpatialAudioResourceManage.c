/*
 * XREFs of ??$_Uninitialized_move_al_unchecked1@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@PEAU123@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@YAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800C1A8C
 * Callers:
 *     ??$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAX$$QEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@Z @ 0x1800C1AF4 (--$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector@UAppPo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_al_unchecked1<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *,Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *,std::allocator<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx

  try
  {
    v3 = 0LL;
    v4 = (a2 - a1 + 7) >> 3;
    if ( a1 > a2 )
      v4 = 0LL;
    if ( v4 )
    {
      v5 = a1 - (_QWORD)a3;
      do
      {
        if ( a3 )
          *a3 = *(_QWORD *)((char *)a3 + v5);
        ++a3;
        ++v3;
      }
      while ( v3 != v4 );
    }
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}

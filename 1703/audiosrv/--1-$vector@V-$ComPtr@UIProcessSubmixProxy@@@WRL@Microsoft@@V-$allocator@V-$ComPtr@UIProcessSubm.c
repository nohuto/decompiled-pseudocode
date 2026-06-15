/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009FDAC
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x180059963 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$5 @ 0x180059993 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$5.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     __lambda_5aefdb8023b69da3f6b9ebb996369b7f_::operator()_::_1_::dtor$0 @ 0x1800A4E8E (__lambda_5aefdb8023b69da3f6b9ebb996369b7f_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::dtor$1 @ 0x1800A9502 (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--dtor$1.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::dtor$2 @ 0x1800A950E (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--dtor$2.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::dtor$3 @ 0x1800A951A (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--dtor$3.c)
 *     __lambda_cbe9e4feebe37314cade45d366e33fc3_::operator()_::_1_::dtor$0 @ 0x1800AA26F (__lambda_cbe9e4feebe37314cade45d366e33fc3_--operator()_--_1_--dtor$0.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x1800AC62C (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x1800AC65C (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$3 @ 0x1800ACB11 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$3.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x1800AD2AE (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1++);
    std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}

/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180098C68
 * Callers:
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x180067236 (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$3 @ 0x1800677AC (_UseSupportedConnectorMode_--_1_--dtor$3.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x180069571 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x180069589 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$4.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$8 @ 0x1800695B9 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$8.c)
 *     __lambda_4b3be4062b453557032a0102af949bc6_::operator()_::_1_::dtor$0 @ 0x1800C7F7D (__lambda_4b3be4062b453557032a0102af949bc6_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$1 @ 0x1800CD8EA (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$1.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$2 @ 0x1800CD8F6 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$2.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$3 @ 0x1800CD902 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$3.c)
 *     __lambda_f3d78743e27405bb129d35bae2d06b95_::operator()_::_1_::dtor$0 @ 0x1800CFBA2 (__lambda_f3d78743e27405bb129d35bae2d06b95_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$1 @ 0x1800D17EF (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$1.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$2 @ 0x1800D17FB (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x1800D2483 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x1800D24B3 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x1800D31D1 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1++);
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate(v1, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

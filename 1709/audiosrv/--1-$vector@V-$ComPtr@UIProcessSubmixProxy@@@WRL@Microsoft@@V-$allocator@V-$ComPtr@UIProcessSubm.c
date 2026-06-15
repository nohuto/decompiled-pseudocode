/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18008A3E0
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x18003850C (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$5 @ 0x18003853C (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$5.c)
 *     __lambda_6cdb4851c5be46749a3dacf1283a4179_::operator()_::_1_::dtor$0 @ 0x180092672 (__lambda_6cdb4851c5be46749a3dacf1283a4179_--operator()_--_1_--dtor$0.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800970C8 (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$1 @ 0x1800976EE (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$1.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$2 @ 0x1800976FA (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$2.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$3 @ 0x180097706 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$3.c)
 *     __lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator()_::_1_::dtor$0 @ 0x180098A43 (__lambda_750b57c9ef9b9d871fb25902b17e3c86_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x18009B459 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x18009B489 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$3 @ 0x18009BB4D (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$3.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x18009C39A (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
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
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v1++);
    std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}

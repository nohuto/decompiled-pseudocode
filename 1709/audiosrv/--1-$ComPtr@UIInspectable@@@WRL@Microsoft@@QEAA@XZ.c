/*
 * XREFs of ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x18005ACA4
 * Callers:
 *     __lambda_6d8abb589d22b5930a9c9ecc0b82ece6_::operator()_::_1_::dtor$0 @ 0x180037FB2 (__lambda_6d8abb589d22b5930a9c9ecc0b82ece6_--operator()_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$3 @ 0x180037FEE (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$3 @ 0x18003824D (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$3.c)
 *     _std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30____::_1_::dtor$0 @ 0x18009200D (_std--_For_each_unchecked_Microsoft--WRL--WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162d.c)
 *     __lambda_530575f8b419a08780554bb070101504_::operator()_::_1_::dtor$1 @ 0x18009258E (__lambda_530575f8b419a08780554bb070101504_--operator()_--_1_--dtor$1.c)
 *     __lambda_66f05aa6b27db1192e1217df58c6c38a_::operator()_::_1_::dtor$0 @ 0x180096474 (__lambda_66f05aa6b27db1192e1217df58c6c38a_--operator()_--_1_--dtor$0.c)
 *     __lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()_::_1_::dtor$0 @ 0x18009659E (__lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$2 @ 0x180096925 (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$2.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$2 @ 0x180096D28 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$2.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$0 @ 0x18009C6D7 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>(CProcessSubmixProxy **a1)
{
  return Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(a1);
}

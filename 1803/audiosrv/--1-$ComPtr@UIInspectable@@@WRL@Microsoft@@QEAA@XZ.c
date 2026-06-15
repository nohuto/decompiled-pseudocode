/*
 * XREFs of ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x180097420
 * Callers:
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$4 @ 0x18006725A (_CAudioSessionManager--Disconnect_--_1_--dtor$4.c)
 *     _std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call_::_1_::dtor$3 @ 0x180068DD0 (_std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Do_call_--_1_--dtor$.c)
 *     __lambda_530575f8b419a08780554bb070101504_::operator()_::_1_::dtor$1 @ 0x18006918C (__lambda_530575f8b419a08780554bb070101504_--operator()_--_1_--dtor$1.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$3 @ 0x1800692F4 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$3 @ 0x180096BC1 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$3.c)
 *     _std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3ea8e7556f72cf8b3f162dbd37187d30____::_1_::dtor$0 @ 0x1800C7BBF (_std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--W.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3____::_1_::dtor$0 @ 0x1800CC2BC (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 *     __lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()_::_1_::dtor$0 @ 0x1800CC826 (__lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$2 @ 0x1800CCB55 (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$2.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$2 @ 0x1800CCF2D (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$2.c)
 *     __lambda_99a80b67184a801990f45f5b271d3c4a_::operator()_::_1_::dtor$0 @ 0x1800CFA06 (__lambda_99a80b67184a801990f45f5b271d3c4a_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$0 @ 0x1800D34EF (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(a1);
}

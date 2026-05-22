/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002D608
 * Callers:
 *     _GetUInt64KeyFromUInt64Value_::_1_::dtor$6 @ 0x1800E76D5 (_GetUInt64KeyFromUInt64Value_--_1_--dtor$6.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices_::_1_::dtor$2 @ 0x1800E8E38 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8E38.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$0 @ 0x1800E8F42 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--OnDisplayChan.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$1 @ 0x1800E8F4E (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8F4E.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$2 @ 0x1800E8FF6 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8FF6.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$4 @ 0x1800E90E7 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E90E7.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$2 @ 0x1800E9BB4 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800E9BB4.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$10 @ 0x1800E9F82 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_1800E9F82.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SpatialInteractionSourceDevice_::_1_::dtor$2 @ 0x1800EA55C (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDevice--SpatialInt_ea_1800EA55C.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo_::_1_::dtor$0 @ 0x1800EA6FD (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--FillDeviceInfo_--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}

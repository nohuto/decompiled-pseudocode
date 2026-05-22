/*
 * XREFs of ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A9D9C
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices_::_1_::dtor$0 @ 0x1800E8E20 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--EnumerateDevi.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$8 @ 0x1800E8FA2 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8FA2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::~vector<Microsoft::WRL::Wrappers::HString>(
        __int64 a1)
{
  return std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(a1);
}

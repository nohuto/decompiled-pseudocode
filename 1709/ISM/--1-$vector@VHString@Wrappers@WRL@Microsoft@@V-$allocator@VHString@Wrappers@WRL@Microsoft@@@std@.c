/*
 * XREFs of ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800964E0
 * Callers:
 *     _EnumerateDevices_::_1_::dtor$0 @ 0x1800D0B90 (_EnumerateDevices_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$8 @ 0x1800D0F8F (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::~vector<Microsoft::WRL::Wrappers::HString>(
        __int64 a1)
{
  return std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(a1);
}

/*
 * XREFs of ??1?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEAA@XZ @ 0x18009CF10
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$1 @ 0x1800E97D7 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_ea_1800E97D7.c)
 *     __lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator()_::_1_::dtor$0 @ 0x1800E9CE4 (__lambda_ee46ae3407b0869cacd23b14ef71fd42_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<SPATIAL_NODE_ID const,std::wstring>::~pair<SPATIAL_NODE_ID const,std::wstring>(__int64 a1)
{
  return std::wstring::_Tidy_deallocate((unsigned __int64 *)(a1 + 16));
}

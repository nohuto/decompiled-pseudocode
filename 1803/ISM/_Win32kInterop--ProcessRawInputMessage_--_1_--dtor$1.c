/*
 * XREFs of _Win32kInterop::ProcessRawInputMessage_::_1_::dtor$1 @ 0x1800E3E83
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::ProcessRawInputMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((__int64 *)(a2 + 56));
}

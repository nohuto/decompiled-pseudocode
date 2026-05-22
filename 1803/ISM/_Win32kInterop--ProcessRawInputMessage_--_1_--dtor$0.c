/*
 * XREFs of _Win32kInterop::ProcessRawInputMessage_::_1_::dtor$0 @ 0x1800E3E77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::ProcessRawInputMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((__int64 *)(a2 + 64));
}

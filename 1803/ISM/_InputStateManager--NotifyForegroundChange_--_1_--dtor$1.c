/*
 * XREFs of _InputStateManager::NotifyForegroundChange_::_1_::dtor$1 @ 0x1800E354F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::NotifyForegroundChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((__int64 *)(a2 + 40));
}

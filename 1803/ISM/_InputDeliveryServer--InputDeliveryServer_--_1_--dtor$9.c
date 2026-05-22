/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$9 @ 0x1800E4355
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
    *(_QWORD *)(a2 + 208),
    a2);
}

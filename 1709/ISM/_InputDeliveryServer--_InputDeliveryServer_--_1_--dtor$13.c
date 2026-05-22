/*
 * XREFs of _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$13 @ 0x1800D0240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::_InputDeliveryServer_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::~unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>(*(_QWORD *)(a2 + 64) + 464LL);
}

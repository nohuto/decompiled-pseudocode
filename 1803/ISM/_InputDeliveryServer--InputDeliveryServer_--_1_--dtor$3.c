/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x1800E4381
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
           (__int64 *)(*(_QWORD *)(a2 + 192) + 104LL),
           a2);
}

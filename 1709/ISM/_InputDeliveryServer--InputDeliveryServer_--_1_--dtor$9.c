/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$9 @ 0x1800D03DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
           (__int64 *)(*(_QWORD *)(a2 + 112) + 128LL),
           a2);
}

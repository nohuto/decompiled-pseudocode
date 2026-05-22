/*
 * XREFs of _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$10 @ 0x1800D0207
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::_InputDeliveryServer_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
           (__int64 *)(*(_QWORD *)(a2 + 64) + 256LL),
           a2);
}

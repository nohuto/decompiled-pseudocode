/*
 * XREFs of _EdgeGestureTarget::UpdateInputTarget_::_1_::dtor$2 @ 0x1800CDED4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EdgeGestureTarget::UpdateInputTarget_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 120));
}

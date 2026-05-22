/*
 * XREFs of _MPCInputRouter::Create_::_1_::dtor$1 @ 0x1800E7EF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputRouter::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 72));
}

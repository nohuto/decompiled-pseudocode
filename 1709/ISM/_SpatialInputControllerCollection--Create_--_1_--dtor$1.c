/*
 * XREFs of _SpatialInputControllerCollection::Create_::_1_::dtor$1 @ 0x1800D0C47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialInputControllerCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 80));
}

/*
 * XREFs of _MPCSharedWorldInputTarget::Create_::_1_::dtor$0 @ 0x1800CD83B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCSharedWorldInputTarget::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 128));
}

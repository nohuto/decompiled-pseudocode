/*
 * XREFs of _MPCInputRouter::CreateMPCTarget_::_1_::dtor$2 @ 0x1800D193E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputRouter::CreateMPCTarget_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 96));
}

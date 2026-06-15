/*
 * XREFs of _CAudioSession::AddStream_::_1_::dtor$0 @ 0x18006A820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::AddStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  PolicyManagerLock::~PolicyManagerLock((PolicyManagerLock *)(a2 + 128));
}

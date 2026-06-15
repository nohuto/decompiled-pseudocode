/*
 * XREFs of _CAudioSession::SetVolumeAllStreams_::_1_::dtor$0 @ 0x180039086
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::SetVolumeAllStreams_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  PolicyManagerLock::~PolicyManagerLock((PolicyManagerLock *)(a2 + 88));
}

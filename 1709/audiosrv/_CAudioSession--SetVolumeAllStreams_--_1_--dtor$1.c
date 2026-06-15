/*
 * XREFs of _CAudioSession::SetVolumeAllStreams_::_1_::dtor$1 @ 0x180039092
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::SetVolumeAllStreams_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 72));
}

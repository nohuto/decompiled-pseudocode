/*
 * XREFs of _CAudioSrv::VAD_AudiosrvServiceStop_::_1_::dtor$1 @ 0x18009EC6E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::VAD_AudiosrvServiceStop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}

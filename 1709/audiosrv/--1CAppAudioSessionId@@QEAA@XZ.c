/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x1800140EC
 * Callers:
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$5 @ 0x180038CF4 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$5.c)
 *     _CAudioSessionInstanceId::CAudioSessionInstanceId_::_1_::dtor$1 @ 0x180038FD8 (_CAudioSessionInstanceId--CAudioSessionInstanceId_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 4) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}

/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800170A4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800013E0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180017218 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&stru_18018AAC8, 0, sizeof(stru_18018AAC8));
  qword_18018AAF8 = 0LL;
  dword_18018AB00 = 0;
  dword_18018AB04 = 0;
  qword_18018AAF0 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18018AAC8) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}

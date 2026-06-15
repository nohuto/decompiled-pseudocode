/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x14001B1A8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&CriticalSection, 0, sizeof(CriticalSection));
  qword_140088148 = 0LL;
  dword_140088150 = 0;
  dword_140088154 = 0;
  qword_140088140 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}

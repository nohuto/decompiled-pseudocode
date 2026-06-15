/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140001A38
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1400011F0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset(&CriticalSection, 0, sizeof(CriticalSection));
  qword_140086138 = 0LL;
  dword_140086140 = 0;
  dword_140086144 = 0;
  qword_140086130 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}

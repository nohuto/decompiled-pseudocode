/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x14001C0E8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset(&CriticalSection, 0, sizeof(CriticalSection));
  qword_14008A138 = 0LL;
  dword_14008A140 = 0;
  dword_14008A144 = 0;
  qword_14008A130 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}

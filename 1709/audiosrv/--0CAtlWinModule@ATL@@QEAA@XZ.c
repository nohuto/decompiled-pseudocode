/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800322A0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800013B0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002B200 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180033A5A (memset.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset(&stru_18014C618, 0, sizeof(stru_18014C618));
  qword_18014C648 = 0LL;
  dword_18014C650 = 0;
  dword_18014C654 = 0;
  qword_18014C640 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&stru_18014C618) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}

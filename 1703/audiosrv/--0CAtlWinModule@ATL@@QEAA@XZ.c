/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180038704
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800013A0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800238D0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180049B8A (memset.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset(&stru_18012C2D8, 0, sizeof(stru_18012C2D8));
  qword_18012C308 = 0LL;
  dword_18012C310 = 0;
  dword_18012C314 = 0;
  qword_18012C300 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&stru_18012C2D8) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}

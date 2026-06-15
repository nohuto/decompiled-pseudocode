/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x14001BDE8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001160 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset(&stru_14008A030, 0, sizeof(stru_14008A030));
  ATL::_AtlComModule = 0;
  qword_14008A018 = (__int64)&_ImageBase;
  qword_14008A020 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_14008A028 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_14008A030) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}

/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x140001A98
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001150 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset(&stru_140086030, 0, sizeof(stru_140086030));
  ATL::_AtlComModule = 0;
  qword_140086018 = (__int64)&_ImageBase;
  qword_140086020 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_140086028 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_140086030) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}

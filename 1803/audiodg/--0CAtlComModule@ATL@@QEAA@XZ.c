/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x14001AEF4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001160 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_140088040, 0, sizeof(stru_140088040));
  ATL::_AtlComModule = 0;
  qword_140088028 = (__int64)&_ImageBase;
  qword_140088030 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_140088038 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140088040) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}

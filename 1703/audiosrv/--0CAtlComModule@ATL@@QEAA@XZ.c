/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x18003669C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001300 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800238D0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180049B8A (memset.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset(&stru_18012C230, 0, sizeof(stru_18012C230));
  ATL::_AtlComModule = 0;
  qword_18012C218 = (__int64)&_ImageBase;
  qword_18012C220 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_18012C228 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_18012C230) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}

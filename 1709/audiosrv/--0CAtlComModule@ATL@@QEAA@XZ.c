/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180032144
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001310 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002B200 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180033A5A (memset.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset(&stru_18014C540, 0, sizeof(stru_18014C540));
  ATL::_AtlComModule = 0;
  qword_18014C528 = (__int64)&_ImageBase;
  qword_18014C530 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_18014C538 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_18014C540) >= 0 )
    ATL::_AtlComModule = 72;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlComModule;
}

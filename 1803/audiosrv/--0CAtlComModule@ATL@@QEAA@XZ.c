/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180017104
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001340 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180017218 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_18018A9F0, 0, sizeof(stru_18018A9F0));
  ATL::_AtlComModule = 0;
  qword_18018A9D8 = (__int64)&_ImageBase;
  qword_18018A9E0 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_18018A9E8 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18018A9F0) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}

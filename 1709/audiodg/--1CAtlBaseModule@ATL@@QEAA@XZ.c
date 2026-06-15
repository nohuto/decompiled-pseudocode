/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001C790
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x140021F60 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001D9A0 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_14008A0C8);
  if ( qword_14008A0F0 )
  {
    free(qword_14008A0F0);
    qword_14008A0F0 = 0LL;
  }
  qword_14008A0F8 = 0LL;
}

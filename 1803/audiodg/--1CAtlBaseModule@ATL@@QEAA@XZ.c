/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001B854
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x140020D10 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001CA60 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1400880D8);
  if ( qword_140088100 )
  {
    free(qword_140088100);
    qword_140088100 = 0LL;
  }
  dword_140088108 = 0;
  dword_14008810C = 0;
}

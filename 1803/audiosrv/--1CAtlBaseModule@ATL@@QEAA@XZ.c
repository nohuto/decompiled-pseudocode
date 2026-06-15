/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x18005FF34
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18006B780 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x180061878 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_18018AA88);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_18018AAB8 = 0;
  dword_18018AABC = 0;
}

/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800485FC
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18005C9F0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x180049B78 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_18012C298);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_18012C2C8 = 0LL;
}

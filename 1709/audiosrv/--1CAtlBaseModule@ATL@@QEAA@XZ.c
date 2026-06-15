/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180032260
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18003A6F0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x180033A48 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&CriticalSection);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_18014C608 = 0LL;
}

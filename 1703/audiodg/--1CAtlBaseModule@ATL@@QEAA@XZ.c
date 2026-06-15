/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001C898
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x140022280 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001DC20 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1400860C8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_1400860F8 = 0LL;
}

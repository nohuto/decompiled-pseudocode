/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14001C948
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011B0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  dword_140086090 = 2;
  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_140086078 = (__int64)&ATL::g_strheap;
  qword_140086088 = 0LL;
  dword_140086098 = 0;
  result = &ATL::g_strmgr;
  qword_140086080 = (__int64)&ATL::g_strmgr;
  return result;
}

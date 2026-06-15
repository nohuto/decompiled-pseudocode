/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14001C6D0
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  dword_14008A090 = 2;
  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_14008A078 = (__int64)&ATL::g_strheap;
  qword_14008A088 = 0LL;
  dword_14008A098 = 0;
  result = &ATL::g_strmgr;
  qword_14008A080 = (__int64)&ATL::g_strmgr;
  return result;
}

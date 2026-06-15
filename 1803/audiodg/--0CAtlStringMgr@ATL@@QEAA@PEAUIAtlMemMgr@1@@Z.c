/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14001B6D0
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  dword_1400880A0 = 2;
  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_140088088 = (__int64)&ATL::g_strheap;
  qword_140088098 = 0LL;
  dword_1400880A8 = 0;
  result = &ATL::g_strmgr;
  qword_140088090 = (__int64)&ATL::g_strmgr;
  return result;
}

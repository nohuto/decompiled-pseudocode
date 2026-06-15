/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x18005FDC8
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1800013A0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_18018AA50 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_18018AA38 = (__int64)&ATL::g_strheap;
  qword_18018AA48 = 0LL;
  dword_18018AA58 = 0;
  result = &ATL::g_strmgr;
  qword_18018AA40 = (__int64)&ATL::g_strmgr;
  return result;
}

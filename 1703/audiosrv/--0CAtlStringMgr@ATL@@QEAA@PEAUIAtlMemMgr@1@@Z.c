/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x180048490
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001360 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_18012BAA0 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_18012BA88 = (__int64)&ATL::g_strheap;
  qword_18012BA98 = 0LL;
  dword_18012BAA8 = 0;
  result = &ATL::g_strmgr;
  qword_18012BA90 = (__int64)&ATL::g_strmgr;
  return result;
}

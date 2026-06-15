/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x1800320CC
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001370 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_18014C5A0 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_18014C588 = (__int64)&ATL::g_strheap;
  qword_18014C598 = 0LL;
  dword_18014C5A8 = 0;
  result = &ATL::g_strmgr;
  qword_18014C590 = (__int64)&ATL::g_strmgr;
  return result;
}

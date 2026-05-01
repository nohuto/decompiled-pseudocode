/*
 * XREFs of _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x18014B297
 * Callers:
 *     <none>
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x180145B5C (--1_bstr_t@@QEAA@XZ.c)
 */

void __fastcall TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~2u;
    _bstr_t::~_bstr_t((_bstr_t *)(a2 + 48));
  }
}

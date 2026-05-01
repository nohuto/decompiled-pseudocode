/*
 * XREFs of _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18014B26B
 * Callers:
 *     <none>
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x180145B5C (--1_bstr_t@@QEAA@XZ.c)
 */

void __fastcall TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    _bstr_t::~_bstr_t((_bstr_t *)(a2 + 56));
  }
}

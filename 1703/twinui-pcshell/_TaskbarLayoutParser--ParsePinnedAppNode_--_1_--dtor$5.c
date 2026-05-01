/*
 * XREFs of _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18019BD83
 * Callers:
 *     <none>
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008A634 (--1_bstr_t@@QEAA@XZ.c)
 */

void __fastcall TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~1u;
    _bstr_t::~_bstr_t((_bstr_t *)(a2 + 80));
  }
}

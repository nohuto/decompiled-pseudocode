/*
 * XREFs of unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0131F28
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C0131E2C (xxxGetComboBoxInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(__int64 a1)
{
  if ( !a1
    || (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2A3 && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 866LL) )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 252) )
    return *(_QWORD *)(a1 + 392);
  return *(_QWORD *)(a1 + 384);
}

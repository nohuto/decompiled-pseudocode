/*
 * XREFs of CmpPopulateKcbStack @ 0x1404FC4C8
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x14066DD6C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r10
  __int16 v6; // r11

  result = *(unsigned __int16 *)(a2 + 58);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(_WORD *)(a2 + 58);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 184);
    while ( v4 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v3, *(_QWORD *)(v4 + 16));
      v4 = *(_QWORD *)(v5 + 24);
      v3 = v6 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return result;
}

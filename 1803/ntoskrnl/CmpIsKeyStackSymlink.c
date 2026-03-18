/*
 * XREFs of CmpIsKeyStackSymlink @ 0x1404A5108
 * Callers:
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 */

bool __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int16 v1; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v3; // r9

  v1 = *(_WORD *)(a1 + 2);
  if ( v1 < 0 )
    return 0;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, (unsigned __int16)v1);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      break;
    v1 = v3 - 1;
    if ( v1 < 0 )
      return 0;
  }
  return (*(_DWORD *)(KcbAtLayerHeight + 176) & 0x100000) != 0;
}

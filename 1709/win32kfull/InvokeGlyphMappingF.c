/*
 * XREFs of InvokeGlyphMappingF @ 0x1C02C2CD8
 * Callers:
 *     sfac_GetGlyphIndex @ 0x1C02C37FC (sfac_GetGlyphIndex.c)
 *     sfac_GetLongGlyphIDs @ 0x1C02C39E0 (sfac_GetLongGlyphIDs.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02C3B0C (sfac_GetMultiGlyphIDs.c)
 * Callees:
 *     sfac_ComputeIndex2 @ 0x1C02C2FA8 (sfac_ComputeIndex2.c)
 *     sfac_ComputeIndex4 @ 0x1C02C304C (sfac_ComputeIndex4.c)
 */

__int64 __fastcall InvokeGlyphMappingF(int a1, _WORD *a2, unsigned __int16 a3, __int64 a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax

  v4 = a1 - 1;
  if ( !v4 )
    return 0;
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( a3 < 0x100u )
      return *((unsigned __int8 *)a2 + a3);
    return 0;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return sfac_ComputeIndex2(a2, a3);
  v7 = v6 - 1;
  if ( !v7 )
    return sfac_ComputeIndex4(a2, a3, a4);
  if ( v7 == 1 )
  {
    v9 = __ROR2__(*a2, 8);
    if ( a3 >= v9 && (unsigned __int16)(a3 - v9) < __ROR2__(a2[1], 8) )
      return (unsigned __int16)__ROR2__(a2[(unsigned __int16)(a3 - v9) + 2], 8);
    return 0;
  }
  v8 = 0;
  EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  return v8;
}

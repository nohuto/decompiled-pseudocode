/*
 * XREFs of sfac_ReadGlyphBbox @ 0x1C02CAA10
 * Callers:
 *     sfac_ReadGlyphVertMetrics @ 0x1C02CADA4 (sfac_ReadGlyphVertMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 *     sfac_GetGlyphLocation @ 0x1C02C9A58 (sfac_GetGlyphLocation.c)
 */

__int64 __fastcall sfac_ReadGlyphBbox(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  _WORD *v6; // rcx
  __int16 v7; // ax
  int v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int32 v9[5]; // [rsp+34h] [rbp-14h] BYREF
  _WORD *v10; // [rsp+68h] [rbp+20h] BYREF

  result = sfac_GetGlyphLocation(a1, a2, v9, &v10, &v8);
  if ( !(_DWORD)result )
  {
    if ( !(_DWORD)v10 )
    {
      *(_QWORD *)a3 = 0LL;
      return 0LL;
    }
    result = sfac_GetDataPtr(a1, v9[0], (int)v10, v8, 1, (__int64 *)&v10);
    if ( (_DWORD)result )
      return result;
    v6 = v10;
    *(_WORD *)a3 = __ROR2__(v10[1], 8);
    *(_WORD *)(a3 + 2) = __ROR2__(v6[2], 8);
    *(_WORD *)(a3 + 4) = __ROR2__(v6[3], 8);
    v7 = v6[4];
    LODWORD(v6) = *(_DWORD *)(a1 + 12);
    *(_WORD *)(a3 + 6) = __ROR2__(v7, 8);
    InvokeReleaseSfntFrag((int)v6);
    if ( *(_WORD *)a3 <= *(_WORD *)(a3 + 4) && *(_WORD *)(a3 + 2) <= *(_WORD *)(a3 + 6) )
      return 0LL;
    return 5120LL;
  }
  return result;
}

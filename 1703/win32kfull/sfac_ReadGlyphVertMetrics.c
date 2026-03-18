/*
 * XREFs of sfac_ReadGlyphVertMetrics @ 0x1C02CADA4
 * Callers:
 *     SubstituteVertMetrics @ 0x1C02C2C84 (SubstituteVertMetrics.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02CAD54 (sfac_ReadGlyphMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 *     sfac_ReadGlyphBbox @ 0x1C02CAA10 (sfac_ReadGlyphBbox.c)
 */

__int64 __fastcall sfac_ReadGlyphVertMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // bp
  __int64 v5; // r10
  int v7; // edi
  int v11; // r8d
  __int64 result; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 202);
  v5 = 0LL;
  v15 = 0LL;
  v7 = a2;
  if ( a2 >= v4 )
    v11 = 2 * (a2 + v4) + 2;
  else
    v11 = 4 * a2 + 4;
  if ( *(_DWORD *)(a1 + 204) )
  {
    result = sfac_GetDataPtr(a1, 0, v11, 20, 0, &v15);
    if ( (_DWORD)result )
      return result;
    v5 = v15;
  }
  if ( *(_DWORD *)(a1 + 204) && v5 )
  {
    if ( a2 >= v4 )
    {
      *a3 = __ROR2__(*(_WORD *)(4 * v4 - 4 + v5), 8);
      v14 = *(_WORD *)(v5 + 4 * (unsigned int)v4 + 2LL * (v7 - v4));
    }
    else
    {
      v13 = (unsigned int)(4 * v7);
      *a3 = __ROR2__(*(_WORD *)(v13 + v5), 8);
      v14 = *(_WORD *)((unsigned int)(v13 + 2) + v5);
    }
    *a4 = __ROR2__(v14, 8);
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  }
  else
  {
    result = sfac_ReadGlyphBbox(a1, *(_WORD *)(a1 + 216), (__int64)&v15);
    if ( (_DWORD)result )
      return result;
    *a3 = *(_WORD *)(a1 + 224) - *(_WORD *)(a1 + 226);
    *a4 = *(_WORD *)(a1 + 224) - HIWORD(v15);
  }
  return 0LL;
}

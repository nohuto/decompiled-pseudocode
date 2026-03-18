/*
 * XREFs of sfac_ReadGlyphHorMetrics @ 0x1C02CAC54
 * Callers:
 *     SubstituteHorMetrics @ 0x1C02C2BF0 (SubstituteHorMetrics.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02CAD54 (sfac_ReadGlyphMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ReadGlyphHorMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // si
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 200);
  result = sfac_GetDataPtr(a1, 0, -1, 7, 1, &v14);
  if ( !(_DWORD)result )
  {
    if ( a2 >= v4 )
    {
      v12 = a2 - v4;
      v13 = v14 + 4 * (unsigned int)v4;
      if ( v13 + 2LL * (v12 + 1) > v14 + (unsigned __int64)*(unsigned int *)(a1 + 84) )
        return 5135LL;
      *a3 = __ROR2__(*(_WORD *)(4 * v4 - 4 + v14), 8);
      *a4 = __ROR2__(*(_WORD *)(v13 + 2LL * v12), 8);
    }
    else
    {
      v10 = v14;
      v11 = 4 * (unsigned int)a2;
      *a3 = __ROR2__(*(_WORD *)(v11 + v14), 8);
      *a4 = __ROR2__(*(_WORD *)((unsigned int)(v11 + 2) + v10), 8);
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}

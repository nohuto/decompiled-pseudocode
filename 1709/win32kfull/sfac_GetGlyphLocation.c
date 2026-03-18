/*
 * XREFs of sfac_GetGlyphLocation @ 0x1C02C3870
 * Callers:
 *     sfac_ReadGlyphBbox @ 0x1C02C4838 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHeader @ 0x1C02C4908 (sfac_ReadGlyphHeader.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C2D94 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C378C (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetGlyphLocation(__int64 a1, unsigned __int16 a2, unsigned __int32 *a3, _DWORD *a4, _DWORD *a5)
{
  int v9; // r14d
  unsigned int v10; // r15d
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int32 v13; // eax
  int v14; // r8d
  unsigned __int16 v15; // ax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a2;
  v10 = 6 * a2;
  result = sfac_GetDataPtr(a1, 0, v10 + 6, 15, 0, v18);
  if ( !(_DWORD)result )
  {
    if ( v18[0] )
    {
      v12 = v18[0] + v10;
      v13 = _byteswap_ulong(*(_DWORD *)v12);
      *a3 = v13;
      if ( v13 )
        *a4 = (unsigned __int16)__ROR2__(*(_WORD *)(v12 + 4), 8);
      else
        *a4 = 0;
      *a5 = 21;
LABEL_16:
      InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
      return 0LL;
    }
    v14 = 2 * v9 + 4;
    if ( *(_WORD *)(a1 + 16) )
      v14 = 4 * v9 + 8;
    result = sfac_GetDataPtr(a1, 0, v14, 2, 1, v18);
    if ( !(_DWORD)result )
    {
      if ( *(_WORD *)(a1 + 16) )
      {
        v17 = *(_DWORD *)(v18[0] + 4LL * a2 + 4);
        *a3 = _byteswap_ulong(*(_DWORD *)(v18[0] + 4LL * a2));
        v16 = _byteswap_ulong(v17);
      }
      else
      {
        v15 = __ROR2__(*(_WORD *)(v18[0] + 2LL * a2 + 2), 8);
        *a3 = 2 * (unsigned __int16)__ROR2__(*(_WORD *)(v18[0] + 2LL * a2), 8);
        v16 = 2 * v15;
      }
      if ( *a3 > v16 )
        return 5137LL;
      *a4 = v16 - *a3;
      *a5 = 6;
      goto LABEL_16;
    }
  }
  return result;
}

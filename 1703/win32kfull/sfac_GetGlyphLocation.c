/*
 * XREFs of sfac_GetGlyphLocation @ 0x1C02C9A58
 * Callers:
 *     sfac_ReadGlyphBbox @ 0x1C02CAA10 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHeader @ 0x1C02CAAE0 (sfac_ReadGlyphHeader.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetGlyphLocation(__int64 a1, unsigned __int16 a2, unsigned __int32 *a3, _DWORD *a4, _DWORD *a5)
{
  int v9; // r14d
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int32 v12; // eax
  int v13; // r8d
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a2;
  result = sfac_GetDataPtr(a1, 0, 6 * ((unsigned int)a2 + 1), 15, 0, v17);
  if ( !(_DWORD)result )
  {
    v11 = v17[0];
    if ( v17[0] )
    {
      v12 = _byteswap_ulong(*(_DWORD *)(v17[0] + 6LL * a2));
      *a3 = v12;
      if ( v12 )
        *a4 = (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 6LL * a2 + 4), 8);
      else
        *a4 = 0;
      *a5 = 21;
LABEL_16:
      InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
      return 0LL;
    }
    v13 = 2 * v9 + 4;
    if ( *(_WORD *)(a1 + 16) )
      v13 = 4 * v9 + 8;
    result = sfac_GetDataPtr(a1, 0, v13, 2, 1, v17);
    if ( !(_DWORD)result )
    {
      if ( *(_WORD *)(a1 + 16) )
      {
        v16 = *(_DWORD *)(v17[0] + 4LL * a2 + 4);
        *a3 = _byteswap_ulong(*(_DWORD *)(v17[0] + 4LL * a2));
        v15 = _byteswap_ulong(v16);
      }
      else
      {
        v14 = __ROR2__(*(_WORD *)(v17[0] + 2LL * a2 + 2), 8);
        *a3 = 2 * (unsigned __int16)__ROR2__(*(_WORD *)(v17[0] + 2LL * a2), 8);
        v15 = 2 * v14;
      }
      if ( *a3 > v15 )
        return 5137LL;
      *a4 = v15 - *a3;
      *a5 = 6;
      goto LABEL_16;
    }
  }
  return result;
}

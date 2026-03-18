/*
 * XREFs of sfac_ReadGlyphHeader @ 0x1C02CAAE0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 * Callees:
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 *     sfac_GetGlyphLocation @ 0x1C02C9A58 (sfac_GetGlyphLocation.c)
 */

__int64 __fastcall sfac_ReadGlyphHeader(
        __int64 a1,
        unsigned __int16 a2,
        __int64 *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int16 *a6,
        _QWORD *a7)
{
  __int64 result; // rax
  _WORD *v11; // r8
  __int16 *v12; // rcx
  __int16 v13; // ax
  bool v14; // zf
  _DWORD *v15; // rax
  _WORD *v16; // rcx
  __int16 v17; // dx
  __int16 v18; // r9
  __int16 v19; // ax
  __int16 v20; // r10
  int v21; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int32 v22[9]; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v23; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  a3[1] = 0LL;
  result = sfac_GetGlyphLocation(a1, a2, v22, &v23, &v21);
  if ( !(_DWORD)result )
  {
    if ( !v23 )
    {
      *a4 = 0;
      *a6 = 1;
      *a7 = 0LL;
      *a5 = 0;
      return 0LL;
    }
    if ( v23 < 0xA )
      return 5133LL;
    result = sfac_GetDataPtr(a1, v22[0], v23, v21, 1, a3);
    if ( !(_DWORD)result )
    {
      v11 = (_WORD *)*a3;
      v12 = a6;
      a3[2] = *a3 + v23;
      v13 = __ROR2__(*v11, 8);
      *v12 = v13;
      v14 = v13 == -1;
      if ( v13 < -1 )
        return 5127LL;
      v15 = a5;
      if ( v14 )
      {
        *a4 = 1;
        *v12 = 0;
        *v15 = 0;
      }
      else
      {
        *a4 = 0;
        *v15 = 1;
      }
      v16 = a7;
      v17 = __ROR2__(v11[1], 8);
      *(_WORD *)a7 = v17;
      v18 = __ROR2__(v11[2], 8);
      v16[1] = v18;
      v19 = __ROR2__(v11[3], 8);
      v16[2] = v19;
      v20 = __ROR2__(v11[4], 8);
      v16[3] = v20;
      if ( v17 <= v19 && v18 <= v20 )
      {
        a3[1] = (__int64)(v11 + 5);
        return 0LL;
      }
      return 5120LL;
    }
  }
  return result;
}

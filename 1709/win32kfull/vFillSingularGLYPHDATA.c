/*
 * XREFs of vFillSingularGLYPHDATA @ 0x1C0231188
 * Callers:
 *     lQuerySingularTrueTypeOutline @ 0x1C022D214 (lQuerySingularTrueTypeOutline.c)
 *     lGetSingularGlyphBitmap @ 0x1C022F0CC (lGetSingularGlyphBitmap.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0231434 (vGetNotionalGlyphMetrics.c)
 *     vLTimesVtfl @ 0x1C023A4B4 (vLTimesVtfl.c)
 */

__int64 __fastcall vFillSingularGLYPHDATA(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  _BYTE v16[2]; // [rsp+20h] [rbp-10h] BYREF
  __int16 v17; // [rsp+22h] [rbp-Eh]
  __int16 v18; // [rsp+24h] [rbp-Ch]
  __int16 v19; // [rsp+26h] [rbp-Ah]
  __int16 v20; // [rsp+28h] [rbp-8h]
  __int16 v21; // [rsp+2Ah] [rbp-6h]
  int v22; // [rsp+40h] [rbp+10h] BYREF

  *(_QWORD *)a4 = 0LL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_DWORD *)(a4 + 36) = 0;
  *(_DWORD *)(a4 + 40) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  *(_DWORD *)(a4 + 8) = a1;
  vGetNotionalGlyphMetrics(a3, a2, v16);
  v6 = v21;
  v22 = 0;
  bFToL((float)v21 * *(float *)(a3 + 224), &v22, 0);
  v7 = v22;
  v8 = v20;
  v22 = 0;
  *(_DWORD *)(a4 + 12) = v7;
  bFToL((float)v8 * *(float *)(a3 + 224), &v22, 0);
  v9 = v22;
  v10 = v17;
  v22 = 0;
  *(_DWORD *)(a4 + 16) = v9;
  bFToL((float)v10 * *(float *)(a3 + 224), &v22, 0);
  v11 = v22;
  v12 = v18;
  v22 = 0;
  *(_DWORD *)(a4 + 20) = v11;
  bFToL((float)v12 * *(float *)(a3 + 264), &v22, 0);
  v13 = v19;
  v14 = -v22;
  v22 = 0;
  *(_DWORD *)(a4 + 24) = v14;
  bFToL((float)v13 * *(float *)(a3 + 264), &v22, 0);
  *(_DWORD *)(a4 + 28) = -v22;
  return vLTimesVtfl(v6, a3 + 208, a4 + 48);
}

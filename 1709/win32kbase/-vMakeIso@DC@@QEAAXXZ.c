/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1C00F2914
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00529A0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C0059AB0 (EngMulDiv.c)
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00F289C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00F28D8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

void __fastcall DC::vMakeIso(DC *this)
{
  _DWORD *v2; // rcx
  INT v3; // r8d
  INT v4; // edx
  unsigned int v5; // edi
  __m128i v6; // xmm0
  float v7; // xmm6_4
  float v8; // xmm6_4
  int *v9; // rbx
  int v10; // edi
  float v11; // xmm1_4
  float v12; // xmm2_4
  char v13; // r8
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 10);
  v3 = v2[89];
  if ( v3 )
  {
    v4 = v2[93];
    if ( !v4 || (v5 = v2[94]) == 0 )
    {
      v8 = (float)((float)(v2[90] * v2[91]) / (float)v3) / (float)(int)v2[92];
      goto LABEL_8;
    }
    v6 = _mm_cvtsi32_si128(v5);
    v7 = (float)EngMulDiv(v2[90], v4, v3);
  }
  else
  {
    v17 = *((_QWORD *)this + 6);
    v7 = (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
    v6 = _mm_cvtsi32_si128(PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17));
  }
  v8 = v7 / _mm_cvtepi32_ps(v6).m128_f32[0];
LABEL_8:
  v9 = (int *)*((_QWORD *)this + 10);
  v10 = v9[86];
  v11 = (float)v9[83];
  v12 = (float)v9[82];
  bFToL((float)((float)((float)v10 * v11) / v12) * v8, (int *)&v17, 6);
  v14 = abs32(v17);
  v15 = v9[87];
  LODWORD(v17) = v14;
  if ( v15 <= 0 )
  {
    if ( -v15 >= v14 )
    {
      v14 = -v14;
      goto LABEL_10;
    }
  }
  else if ( v15 >= v14 )
  {
LABEL_10:
    v9[87] = v14;
    return;
  }
  bFToL((float)((float)((float)v15 * v12) / v11) / v8, (int *)&v17, v13);
  v16 = abs32(v17);
  if ( v10 <= 0 )
    v16 = -v16;
  v9[86] = v16;
}

/*
 * XREFs of ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02AA828
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C011F858 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

struct _POINTFIX __fastcall ptfxFraction(
        struct _POINTFIX a1,
        struct LINEDATA *a2,
        struct EFLOAT *a3,
        struct EFLOAT *a4)
{
  __int64 v5; // rdx
  float *v6; // r8
  float *v7; // r9
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  char v12; // r8
  int v13; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+24h] [rbp-Ch] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h]

  if ( EFLOAT::bIsZero(a4) )
    return a1;
  if ( (*(_DWORD *)v5 & 0x10) == 0 )
  {
    v9 = (float)*(int *)(v5 + 44);
    *(float *)(v5 + 80) = (float)*(int *)(v5 + 40);
    *(float *)(v5 + 84) = v9;
    v10 = FP_1_0 / *v7;
    *(float *)(v5 + 80) = v10 * *(float *)(v5 + 80);
    *(float *)(v5 + 84) = v10 * *(float *)(v5 + 84);
    *(_DWORD *)v5 |= 0x10u;
  }
  v15 = *(_QWORD *)(v5 + 80);
  v11 = *((float *)&v15 + 1) * *v6;
  bFToL(*(float *)&v15 * *v6, &v13, 6);
  bFToL(v11, &v14, v12);
  HIDWORD(v15) = v14 + a1.y;
  LODWORD(v15) = a1.x + v13;
  return (struct _POINTFIX)v15;
}

/*
 * XREFs of bXformUnitVector @ 0x1C023A380
 * Callers:
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 *     bInitXform @ 0x1C0239D80 (bInitXform.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C00B34AC (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C023A224 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall bXformUnitVector(_DWORD *a1, float *a2, float *a3, float *a4, __int64 a5, float *a6)
{
  float v8; // xmm3_4
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm6_4
  float v12; // xmm2_4
  float *v13; // r8
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int64 v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v23; // [rsp+40h] [rbp+8h] BYREF
  float v24; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2[2];
  v9 = a2[3];
  v10 = 16 * *a1;
  v11 = *a2;
  v23 = a2[1];
  v12 = (float)v10;
  v24 = v8;
  if ( EFLOAT::bIsZero((EFLOAT *)&v23) && EFLOAT::bIsZero((EFLOAT *)&v24) )
  {
    v16 = v12 * v11;
    v17 = v9 * v15;
  }
  else
  {
    v16 = (float)(v8 * v15) + (float)(v12 * v11);
    v17 = (float)(v14 * v12) + (float)(v9 * v15);
  }
  v13[1] = v17;
  *v13 = v16;
  v23 = (float)(v17 * v17) + (float)(v16 * v16);
  EFLOAT::vSqrt((EFLOAT *)&v23);
  v18 = v23;
  v19 = a5;
  *a6 = v23;
  v20 = *a3 / v18;
  v21 = a3[1] / v18;
  *a4 = v20;
  a4[1] = v21;
  if ( v19 )
  {
    *(float *)&a6 = v20 * 16.0;
    *((float *)&a6 + 1) = v21 * 16.0;
    EPOINTQF::operator=(v19, (__int64)&a6);
  }
  return 1LL;
}

/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C028FA30
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C002D514 (cjIFIMetricsToOTMW.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C002FB3C (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     GreAngleArc @ 0x1C027E284 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C028FEB0 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     eFraction @ 0x1C0238F28 (eFraction.c)
 */

__int64 __fastcall vArctan(unsigned int a1, unsigned int a2, float *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // xmm1_8
  double v8; // xmm3_8
  double v9; // xmm0_8
  _DWORD *v10; // r8
  _DWORD *v11; // r9
  __int64 result; // rax
  __int64 v13; // r8
  float v14; // xmm2_4
  double v15; // xmm0_8
  int v16; // xmm4_4
  __int64 v17; // r8
  __int64 v18; // r10
  float v19; // xmm2_4
  float *v20; // rax
  int v21[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  *(_QWORD *)&v8 = _mm_cvtsi32_si128(a2).m128i_u64[0];
  v21[0] = v5;
  if ( *(float *)&v5 < 0.0 )
  {
    v4 = 1;
    v5 ^= (unsigned int)_xmm;
    v21[0] = v5;
  }
  if ( *(float *)&v8 < 0.0 )
  {
    v4 |= 2u;
    *(_QWORD *)&v8 ^= (unsigned int)_xmm;
  }
  if ( *(float *)&v8 > *(float *)&v5 )
  {
    v9 = *(double *)&v5;
    v21[0] = LODWORD(v8);
    LODWORD(v5) = LODWORD(v8);
    v4 |= 4u;
    v8 = v9;
  }
  if ( EFLOAT::bIsZero((EFLOAT *)v21) )
  {
    result = FP_0_0;
    *v11 = 0;
    *v10 = FP_0_0;
    return result;
  }
  *(float *)&v8 = (float)(*(float *)&v8 * FP_ARCTAN_TABLE_SIZE) / *(float *)&v5;
  bFToL(*(float *)&v8, v21, 5);
  v13 = v21[0];
  *a3 = gaefArctan[v21[0] + 1];
  v14 = *a3 - gaefArctan[v13];
  v15 = eFraction(v8);
  v19 = (float)(v14 * *(float *)&v15) + *(float *)(v18 + 4 * v17);
  *a3 = v19;
  switch ( v4 )
  {
    case 1u:
      v20 = (float *)FP_180_0;
      goto LABEL_23;
    case 2u:
      v20 = (float *)FP_360_0;
      goto LABEL_23;
    case 3u:
      v20 = (float *)FP_180_0;
      goto LABEL_24;
    case 4u:
      v20 = (float *)FP_90_0;
      goto LABEL_23;
    case 5u:
      v20 = (float *)FP_90_0;
      goto LABEL_24;
    case 6u:
      v20 = (float *)FP_270_0;
LABEL_24:
      *a3 = v19 + *v20;
      break;
    case 7u:
      v20 = (float *)FP_270_0;
LABEL_23:
      LODWORD(v19) ^= v16;
      goto LABEL_24;
  }
  result = byte_1C02F3850[v4];
  *a4 = result;
  return result;
}

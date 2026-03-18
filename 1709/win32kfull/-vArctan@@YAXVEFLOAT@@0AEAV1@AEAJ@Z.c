/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C028C104
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0039574 (cjIFIMetricsToOTMW.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C003BBBC (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     GreAngleArc @ 0x1C027AD98 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     eFraction @ 0x1C023A4F0 (eFraction.c)
 */

__int64 __fastcall vArctan(int a1, int a2, float *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  float v5; // xmm1_4
  float v8; // xmm4_4
  _DWORD *v9; // r8
  _DWORD *v10; // r9
  double v11; // xmm4_8
  __int64 result; // rax
  double v13; // xmm0_8
  float v14; // xmm2_4
  float v15; // xmm3_4
  double v16; // xmm0_8
  int v17; // xmm5_4
  float v18; // xmm3_4
  float *v19; // rax
  int v20[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = *(float *)&a1;
  v8 = *(float *)&a2;
  v20[0] = a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v4 = 1;
    LODWORD(v5) = a1 ^ _xmm;
    v20[0] = a1 ^ _xmm;
  }
  if ( *(float *)&a2 < 0.0 )
  {
    v4 |= 2u;
    LODWORD(v8) = a2 ^ _xmm;
  }
  if ( v8 > v5 )
  {
    *(float *)v20 = v8;
    v5 = v8;
    v4 |= 4u;
  }
  if ( EFLOAT::bIsZero((EFLOAT *)v20) )
  {
    result = FP_0_0;
    *v10 = 0;
    *v9 = FP_0_0;
    return result;
  }
  *(float *)&v11 = (float)(*(float *)&v11 * FP_ARCTAN_TABLE_SIZE) / v5;
  v13 = v11;
  bFToL(*(float *)&v11, v20, 5);
  v14 = gaefArctan[v20[0]];
  *a3 = gaefArctan[v20[0] + 1];
  v15 = *a3 - v14;
  v16 = eFraction(v13);
  v18 = (float)(v15 * *(float *)&v16) + v14;
  *a3 = v18;
  switch ( v4 )
  {
    case 1u:
      v19 = (float *)FP_180_0;
      goto LABEL_23;
    case 2u:
      v19 = (float *)FP_360_0;
      goto LABEL_23;
    case 3u:
      v19 = (float *)FP_180_0;
      goto LABEL_24;
    case 4u:
      v19 = (float *)FP_90_0;
      goto LABEL_23;
    case 5u:
      v19 = (float *)FP_90_0;
      goto LABEL_24;
    case 6u:
      v19 = (float *)FP_270_0;
LABEL_24:
      *a3 = v18 + *v19;
      break;
    case 7u:
      v19 = (float *)FP_270_0;
LABEL_23:
      LODWORD(v18) ^= v17;
      goto LABEL_24;
  }
  result = byte_1C02F0440[v4];
  *a4 = result;
  return result;
}

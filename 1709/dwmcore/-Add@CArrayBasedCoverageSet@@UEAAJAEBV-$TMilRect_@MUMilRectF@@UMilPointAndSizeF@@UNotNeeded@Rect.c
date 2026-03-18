/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180036560
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(__int64 a1, float *a2, int a3, __int64 a4)
{
  float v4; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm8_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  unsigned int v13; // r8d
  __int64 *v14; // r10
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // eax
  unsigned int v22; // [rsp+38h] [rbp-29h]
  __int128 v23; // [rsp+40h] [rbp-21h] BYREF
  __int128 v24; // [rsp+50h] [rbp-11h] BYREF
  float v25; // [rsp+60h] [rbp-1h]

  v4 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  *((float *)&v24 + 1) = *a2;
  *((_QWORD *)&v24 + 1) = __PAIR64__(LODWORD(v7), LODWORD(v6));
  v25 = v8;
  LODWORD(v24) = a3;
  if ( a4 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a4, (char *)&v24 + 4, &v23);
    v4 = *(float *)&v23;
    v8 = *((float *)&v23 + 3);
    v7 = *((float *)&v23 + 2);
    v6 = *((float *)&v23 + 1);
  }
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( v9 < 8388608.0 )
    v4 = (float)(int)ceilf_0(v4);
  *(float *)&v23 = v4;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v10 < 8388608.0 )
    v6 = (float)(int)ceilf_0(v6);
  *((float *)&v23 + 1) = v6;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v11 < 8388608.0 )
    v7 = (float)(int)floorf_0(v7);
  *((float *)&v23 + 2) = v7;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v12 < 8388608.0 )
    v8 = (float)(int)floorf_0(v8);
  v13 = v22;
  v14 = (__int64 *)(a1 + 24);
  v15 = *(unsigned int *)(a1 + 48);
  *((float *)&v23 + 3) = v8;
  v16 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v13 = v15 + 1;
  v17 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( v16 < (unsigned int)v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xB5u);
  }
  else if ( v13 > *((_DWORD *)v14 + 5) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet(v14, 36LL, 1LL, &v23);
    v17 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
  }
  else
  {
    v18 = 9 * v15;
    v19 = *v14;
    *(_OWORD *)(v19 + 4 * v18) = v23;
    *(_OWORD *)(v19 + 4 * v18 + 16) = v24;
    *(float *)(v19 + 4 * v18 + 32) = v25;
    *((_DWORD *)v14 + 6) = v13;
  }
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x3Eu);
  return (unsigned int)v17;
}

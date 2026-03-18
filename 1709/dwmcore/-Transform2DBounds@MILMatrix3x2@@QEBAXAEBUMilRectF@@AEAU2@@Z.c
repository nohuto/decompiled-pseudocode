/*
 * XREFs of ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18006AE68
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800BEDE0 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 * Callees:
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18006B1E4 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall MILMatrix3x2::Transform2DBounds(MILMatrix3x2 *this, const struct MilRectF *a2, struct MilRectF *a3)
{
  int v3; // xmm2_4
  int v4; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm2_4
  float *v7; // rcx
  int v8; // xmm4_4
  unsigned int v9; // edx
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // [rsp+20h] [rbp-30h] BYREF
  float v13; // [rsp+24h] [rbp-2Ch]
  int v14; // [rsp+28h] [rbp-28h]
  _DWORD v15[2]; // [rsp+2Ch] [rbp-24h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch]
  int v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+3Ch] [rbp-14h]

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 2);
  v13 = *((float *)a2 + 1);
  *(float *)v15 = v13;
  v16 = *((_DWORD *)a2 + 3);
  v18 = v16;
  v12 = v3;
  v14 = v4;
  v15[1] = v3;
  v17 = v4;
  MILMatrix3x2::TransformPoints(this, (const struct MilPoint2F *)&v12, (struct MilPoint2F *)&v12, 4u);
  v6 = v13;
  v7 = (float *)v15;
  v8 = v12;
  v9 = 1;
  *(float *)(v5 + 4) = v13;
  *(float *)(v5 + 12) = v6;
  *(_DWORD *)v5 = v8;
  *(_DWORD *)(v5 + 8) = v8;
  do
  {
    v10 = *(v7 - 1);
    if ( *(float *)v5 > v10 )
    {
      *(float *)v5 = v10;
    }
    else if ( v10 > *(float *)(v5 + 8) )
    {
      *(float *)(v5 + 8) = v10;
    }
    v11 = *v7;
    if ( v6 > *v7 )
    {
      v6 = *v7;
    }
    else if ( v11 > *(float *)(v5 + 12) )
    {
      *(float *)(v5 + 12) = v11;
    }
    ++v9;
    v7 += 2;
  }
  while ( v9 < 4 );
  *(float *)(v5 + 4) = v6;
}

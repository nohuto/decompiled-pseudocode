/*
 * XREFs of _lambda_dba53bb25514b03878b3988ad487924e_::operator() @ 0x1800BF480
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_dba53bb25514b03878b3988ad487924e_::operator()(__int64 a1, int *a2)
{
  float v3; // xmm0_4
  bool v4; // zf
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float *v8; // rax
  float v9; // xmm4_4
  float v10; // xmm4_4
  float v11; // xmm4_4
  float v12; // xmm4_4
  int v13; // r9d
  float v15; // [rsp+30h] [rbp-30h] BYREF
  float v16; // [rsp+34h] [rbp-2Ch]
  float v17; // [rsp+38h] [rbp-28h]
  float v18; // [rsp+3Ch] [rbp-24h]
  float v19; // [rsp+40h] [rbp-20h] BYREF
  float v20; // [rsp+44h] [rbp-1Ch]
  float v21; // [rsp+48h] [rbp-18h]
  float v22; // [rsp+4Ch] [rbp-14h]

  v3 = (float)*a2;
  v4 = **(_BYTE **)a1 == 0;
  v5 = (float)a2[1];
  v6 = (float)a2[2];
  v7 = (float)a2[3];
  v15 = v3;
  v16 = v5;
  v17 = v6;
  v18 = v7;
  if ( !v4 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(*(CMILMatrix **)(a1 + 8), (__int64)&v15, &v19);
    v3 = v19;
    v5 = v20;
    v6 = v21;
    v7 = v22;
    v15 = v19;
    v16 = v20;
    v17 = v21;
    v18 = v22;
  }
  if ( !**(_BYTE **)(a1 + 16) )
    goto LABEL_14;
  v8 = *(float **)(a1 + 24);
  v9 = *v8;
  if ( *v8 > v3 )
  {
    v15 = *v8;
    v3 = v9;
  }
  v10 = v8[1];
  if ( v10 > v5 )
  {
    v16 = v8[1];
    v5 = v10;
  }
  v11 = v8[2];
  if ( v6 > v11 )
  {
    v17 = v8[2];
    v6 = v11;
  }
  v12 = v8[3];
  if ( v7 > v12 )
  {
    v18 = v8[3];
    v7 = v12;
  }
  if ( v6 > v3 && v7 > v5 )
  {
LABEL_14:
    **(_DWORD **)(a1 + 32) = CVisual::AddAdditionalDirtyRects(*(CVisual **)(a1 + 40), (const struct MilRectF *)&v15);
    v13 = **(_DWORD **)(a1 + 32);
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x205u);
  }
  return **(unsigned int **)(a1 + 32);
}

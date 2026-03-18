/*
 * XREFs of _lambda_bb28168dec429e930d29fad703717257_::operator() @ 0x1800C5714
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_bb28168dec429e930d29fad703717257_::operator()(__int64 a1, int *a2)
{
  float v3; // xmm0_4
  bool v4; // zf
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float *v8; // rax
  signed int v9; // r9d
  float v11; // [rsp+30h] [rbp-30h] BYREF
  float v12; // [rsp+34h] [rbp-2Ch]
  float v13; // [rsp+38h] [rbp-28h]
  float v14; // [rsp+3Ch] [rbp-24h]
  float v15; // [rsp+40h] [rbp-20h] BYREF
  float v16; // [rsp+44h] [rbp-1Ch]
  float v17; // [rsp+48h] [rbp-18h]
  float v18; // [rsp+4Ch] [rbp-14h]

  v3 = (float)*a2;
  v4 = **(_BYTE **)a1 == 0;
  v5 = (float)a2[1];
  v6 = (float)a2[2];
  v7 = (float)a2[3];
  v11 = v3;
  v12 = v5;
  v13 = v6;
  v14 = v7;
  if ( !v4 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(*(_QWORD *)(a1 + 8), (__int64)&v11, &v15);
    v3 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    v11 = v15;
    v12 = v16;
    v13 = v17;
    v14 = v18;
  }
  if ( !**(_BYTE **)(a1 + 16) )
    goto LABEL_13;
  v8 = *(float **)(a1 + 24);
  if ( *v8 > v3 )
    v11 = *v8;
  if ( v8[1] > v5 )
    v12 = v8[1];
  if ( v6 > v8[2] )
    v13 = v8[2];
  if ( v7 > v8[3] )
    v14 = v8[3];
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v11) )
  {
LABEL_13:
    **(_DWORD **)(a1 + 32) = CVisual::AddAdditionalDirtyRects(*(CVisual **)(a1 + 40), (const struct MilRectF *)&v11);
    v9 = **(_DWORD **)(a1 + 32);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1F4u);
  }
  return **(unsigned int **)(a1 + 32);
}

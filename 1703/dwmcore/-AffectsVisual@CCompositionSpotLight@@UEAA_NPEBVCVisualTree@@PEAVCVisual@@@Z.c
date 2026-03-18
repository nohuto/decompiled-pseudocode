/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180173C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800D53CC (tanf_0.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18012B740 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x180172AE4 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  float v3; // xmm0_4
  bool DoesIntersectUnsafe; // di
  float v7; // xmm7_4
  CVisual *v8; // rcx
  int WorldTransform; // eax
  char v10; // dl
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  CVisual *v15; // rcx
  float v16; // xmm3_4
  int v17; // eax
  char v18; // al
  __int64 v19; // r11
  bool v20; // si
  __int64 v21; // rcx
  float v22; // edx
  unsigned int v23; // eax
  int v24; // ebx
  int v25; // eax
  struct CVisual *v26; // [rsp+38h] [rbp-89h] BYREF
  float v27; // [rsp+40h] [rbp-81h] BYREF
  float v28; // [rsp+44h] [rbp-7Dh] BYREF
  float v29[4]; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v30[64]; // [rsp+58h] [rbp-69h] BYREF
  int v31; // [rsp+98h] [rbp-29h]
  float v32; // [rsp+A8h] [rbp-19h] BYREF
  float v33; // [rsp+ACh] [rbp-15h]
  float v34; // [rsp+B0h] [rbp-11h]
  float v35; // [rsp+B4h] [rbp-Dh]
  float v36[4]; // [rsp+B8h] [rbp-9h] BYREF
  float v37[4]; // [rsp+C8h] [rbp+7h] BYREF

  v3 = *((float *)this + 37);
  v26 = a3;
  DoesIntersectUnsafe = 1;
  if ( v3 == 0.0
    && *((float *)this + 38) == 0.0
    && *((float *)this + 39) == -1.0
    && *((float *)this + 40) <= *((float *)this + 41) )
  {
    CVisual::GetEffectiveOffset(a3, &v28, v29, &v27);
    v7 = *((float *)this + 36) - v27;
    v31 = 0;
    WorldTransform = CVisual::GetWorldTransform(v8, (__int64)a2, 1, (__int64)v30, 0LL, 0LL);
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0x2FBu);
    }
    else
    {
      if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>((__int64)v30, 1) )
        return v10;
      if ( v7 <= 0.0 || *((float *)this + 41) <= 0.0 )
      {
        DoesIntersectUnsafe = 0;
LABEL_14:
        v18 = DynArray<CVisual *,0>::Contains((__int64)this + 200, &v26);
        if ( DoesIntersectUnsafe )
        {
          if ( v18 )
            DynArray<CVisual *,0>::Remove((__int64 *)v19, (__int64 *)&v26);
        }
        else
        {
          v20 = v18 == 0;
          DoesIntersectUnsafe = v18 == 0;
          if ( !v18 )
          {
            v21 = *(unsigned int *)(v19 + 24);
            v22 = v28;
            v23 = v21 + 1;
            if ( (int)v21 + 1 >= (unsigned int)v21 )
              LODWORD(v22) = v21 + 1;
            v24 = v23 < (unsigned int)v21 ? 0x80070216 : 0;
            if ( v23 < (unsigned int)v21 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xB5u);
            }
            else if ( LODWORD(v22) > *(_DWORD *)(v19 + 20) )
            {
              v25 = DynArrayImpl<0>::AddMultipleAndSet(v19, 8u, 1, &v26);
              v24 = v25;
              if ( v25 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)v19 + 8 * v21) = v26;
              *(float *)(v19 + 24) = v22;
            }
            DoesIntersectUnsafe = v20;
            if ( v24 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x33Bu);
          }
        }
        return DoesIntersectUnsafe;
      }
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)v30, (__int64)v26 + 136, v36);
      v12 = tanf_0(*((float *)this + 41));
      v13 = *((float *)this + 35);
      v14 = *((float *)this + 34);
      v15 = (CVisual *)*((_QWORD *)this + 16);
      v31 = 0;
      v16 = (float)(v12 * v7) + (float)(v12 * v7);
      v32 = v14 - (float)(v12 * v7);
      v33 = v13 - (float)(v12 * v7);
      v35 = v16 + v33;
      v34 = v16 + v32;
      v17 = CVisual::GetWorldTransform(v15, (__int64)a2, 1, (__int64)v30, 0LL, 0LL);
      if ( v17 >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v30, (__int64)&v32, v37);
        DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v37, v36);
        goto LABEL_14;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x31Bu);
    }
    return DoesIntersectUnsafe;
  }
  return 1;
}

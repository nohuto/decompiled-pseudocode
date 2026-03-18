/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180186480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C0678 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800DD3E9 (tanf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x18013F080 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  bool v3; // zf
  char DoesIntersectUnsafe; // di
  float v8; // xmm1_4
  float v9; // xmm7_4
  CVisual *v10; // rcx
  int WorldTransform; // eax
  char v12; // dl
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  CVisual *v17; // rcx
  float v18; // xmm3_4
  int v19; // eax
  char v20; // al
  __int64 v21; // r11
  char v22; // si
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ebx
  int v26; // eax
  struct CVisual *v27; // [rsp+38h] [rbp-D0h] BYREF
  float v28; // [rsp+40h] [rbp-C8h] BYREF
  float v29; // [rsp+44h] [rbp-C4h] BYREF
  float v30[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v31[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+98h] [rbp-70h]
  float v33; // [rsp+A8h] [rbp-60h] BYREF
  float v34; // [rsp+ACh] [rbp-5Ch]
  float v35; // [rsp+B0h] [rbp-58h]
  float v36; // [rsp+B4h] [rbp-54h]
  float v37[4]; // [rsp+B8h] [rbp-50h] BYREF
  float v38[4]; // [rsp+C8h] [rbp-40h] BYREF
  float v39[4]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = *((_BYTE *)this + 154) == 0;
  v27 = a3;
  DoesIntersectUnsafe = 1;
  if ( v3 )
    return 0;
  if ( *((float *)this + 68) == 0.0 && *((float *)this + 69) == 0.0 && *((float *)this + 70) == -1.0 )
  {
    v8 = *((float *)this + 72);
    if ( *((float *)this + 71) <= v8 && v8 <= 1.5707952 )
    {
      CVisual::GetEffectiveOffset(a3, v30, &v29, &v28);
      v9 = *((float *)this + 67) - v28;
      v32 = 0;
      WorldTransform = CVisual::GetWorldTransform(v10, a2, 1, (__int64)v31, 0LL, 0LL);
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x267u);
      }
      else
      {
        if ( !CMILMatrix::Is2DAffine<1>((__int64)v31, 1) )
          return v12;
        if ( v9 <= 0.0 || *((float *)this + 72) <= 0.0 )
        {
          DoesIntersectUnsafe = 0;
LABEL_19:
          v20 = DynArray<CVisual *,0>::Contains((__int64)this + 168, &v27);
          if ( DoesIntersectUnsafe )
          {
            if ( v20 )
              DynArray<CVisual *,0>::Remove((__int64 *)v21, &v27);
          }
          else
          {
            v22 = v20 ^ 1;
            DoesIntersectUnsafe = v20 ^ 1;
            if ( !v20 )
            {
              v23 = *(_DWORD *)(v21 + 24);
              v24 = v23 + 1;
              v25 = v23 + 1 < v23 ? 0x80070216 : 0;
              if ( v23 + 1 < v23 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xB5u);
              }
              else if ( v24 > *(_DWORD *)(v21 + 20) )
              {
                v26 = DynArrayImpl<0>::AddMultipleAndSet(v21, 8u, 1, &v27);
                v25 = v26;
                if ( v26 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
              }
              else
              {
                *(_QWORD *)(*(_QWORD *)v21 + 8LL * v23) = v27;
                *(_DWORD *)(v21 + 24) = v24;
              }
              DoesIntersectUnsafe = v22;
              if ( v25 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2A9u);
            }
          }
          return DoesIntersectUnsafe;
        }
        v13 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, float *))(*(_QWORD *)v27 + 192LL))(v27, 0LL, v37);
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x277u);
        }
        else
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)v31, v37, v38);
          v14 = tanf_0(*((float *)this + 72));
          v15 = *((float *)this + 66);
          v16 = *((float *)this + 65);
          v17 = (CVisual *)*((_QWORD *)this + 20);
          v32 = 0;
          v18 = (float)(v14 * v9) + (float)(v14 * v9);
          v33 = v16 - (float)(v14 * v9);
          v34 = v15 - (float)(v14 * v9);
          v36 = v18 + v34;
          v35 = v18 + v33;
          v19 = CVisual::GetWorldTransform(v17, a2, 1, (__int64)v31, 0LL, 0LL);
          if ( v19 >= 0 )
          {
            CMILMatrix::Transform2DBoundsHelper<1>((__int64)v31, &v33, v39);
            DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v39, v38);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x289u);
        }
      }
      return DoesIntersectUnsafe;
    }
  }
  return 1;
}

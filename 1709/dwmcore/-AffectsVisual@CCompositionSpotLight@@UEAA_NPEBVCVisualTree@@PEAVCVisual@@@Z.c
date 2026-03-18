/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18015D440
 * Callers:
 *     <none>
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B16E0 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x1800B1738 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800C5DB6 (tanf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18011A4C4 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        struct _LIST_ENTRY *a2,
        struct CVisual *a3)
{
  float v3; // xmm0_4
  char DoesIntersectUnsafe; // di
  float v7; // xmm1_4
  float v8; // xmm7_4
  CVisual *v9; // rcx
  signed int WorldTransform; // eax
  char v11; // dl
  signed int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  CVisual *v17; // rcx
  float v18; // xmm3_4
  signed int v19; // eax
  char v20; // al
  __int64 v21; // r11
  char v22; // si
  __int64 v23; // rcx
  float v24; // edx
  unsigned int v25; // eax
  signed int v26; // ebx
  signed int v27; // eax
  struct CVisual *v28; // [rsp+38h] [rbp-D0h] BYREF
  float v29; // [rsp+40h] [rbp-C8h] BYREF
  float v30; // [rsp+44h] [rbp-C4h] BYREF
  float v31[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v32[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+98h] [rbp-70h]
  float v34; // [rsp+A8h] [rbp-60h] BYREF
  float v35; // [rsp+ACh] [rbp-5Ch]
  float v36; // [rsp+B0h] [rbp-58h]
  float v37; // [rsp+B4h] [rbp-54h]
  _BYTE v38[16]; // [rsp+B8h] [rbp-50h] BYREF
  float v39[4]; // [rsp+C8h] [rbp-40h] BYREF
  float v40[4]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = *((float *)this + 49);
  v28 = a3;
  DoesIntersectUnsafe = 1;
  if ( v3 == 0.0 && *((float *)this + 50) == 0.0 && *((float *)this + 51) == -1.0 )
  {
    v7 = *((float *)this + 53);
    if ( *((float *)this + 52) <= v7 && v7 <= 1.5707952 )
    {
      CVisual::GetEffectiveOffset(a3, &v30, v31, &v29);
      v8 = *((float *)this + 48) - v29;
      v33 = 0;
      WorldTransform = CVisual::GetWorldTransform(v9, a2, 1, (__int64)v32, 0LL, 0LL);
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WorldTransform, 0x36Cu);
      }
      else
      {
        if ( !CMILMatrix::Is2DAffine<1>((__int64)v32, 1) )
          return v11;
        if ( v8 <= 0.0 || *((float *)this + 53) <= 0.0 )
        {
          DoesIntersectUnsafe = 0;
LABEL_17:
          v20 = DynArray<CVisual *,0>::Contains((__int64)this + 248, &v28);
          if ( DoesIntersectUnsafe )
          {
            if ( v20 )
              DynArray<CVisual *,0>::Remove((__int64 *)v21, (__int64 *)&v28);
          }
          else
          {
            v22 = v20 ^ 1;
            DoesIntersectUnsafe = v20 ^ 1;
            if ( !v20 )
            {
              v23 = *(unsigned int *)(v21 + 24);
              v24 = v30;
              v25 = v23 + 1;
              if ( (int)v23 + 1 >= (unsigned int)v23 )
                LODWORD(v24) = v23 + 1;
              v26 = v25 < (unsigned int)v23 ? 0x80070216 : 0;
              if ( v25 < (unsigned int)v23 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0xB5u);
              }
              else if ( LODWORD(v24) > *(_DWORD *)(v21 + 20) )
              {
                v27 = DynArrayImpl<0>::AddMultipleAndSet(v21, 8u, 1, &v28);
                v26 = v27;
                if ( v27 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0xC0u);
              }
              else
              {
                *(_QWORD *)(*(_QWORD *)v21 + 8 * v23) = v28;
                *(float *)(v21 + 24) = v24;
              }
              DoesIntersectUnsafe = v22;
              if ( v26 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x3AEu);
            }
          }
          return DoesIntersectUnsafe;
        }
        v13 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, _BYTE *))(*(_QWORD *)v28 + 192LL))(v28, 0LL, v38);
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x37Cu);
        }
        else
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)v32, (__int64)v38, v39);
          v14 = tanf_0(*((float *)this + 53));
          v15 = *((float *)this + 47);
          v16 = *((float *)this + 46);
          v17 = (CVisual *)*((_QWORD *)this + 22);
          v33 = 0;
          v18 = (float)(v14 * v8) + (float)(v14 * v8);
          v34 = v16 - (float)(v14 * v8);
          v35 = v15 - (float)(v14 * v8);
          v37 = v18 + v35;
          v36 = v18 + v34;
          v19 = CVisual::GetWorldTransform(v17, a2, 1, (__int64)v32, 0LL, 0LL);
          if ( v19 >= 0 )
          {
            CMILMatrix::Transform2DBoundsHelper<1>((__int64)v32, (__int64)&v34, v40);
            DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v40, v39);
            goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x38Eu);
        }
      }
      return DoesIntersectUnsafe;
    }
  }
  return 1;
}

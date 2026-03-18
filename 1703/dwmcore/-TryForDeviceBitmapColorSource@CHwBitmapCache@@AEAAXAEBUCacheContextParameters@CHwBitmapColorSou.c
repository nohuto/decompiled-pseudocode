/*
 * XREFs of ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1800437F8
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043D40 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800440AC (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x1800452DC (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180056030 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x180130A80 (-SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18019B25C (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 */

void __fastcall CHwBitmapCache::TryForDeviceBitmapColorSource(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r13
  __int64 v7; // rbx
  unsigned int *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  char v12; // bl
  CBitmap *v13; // rcx
  __int64 (__fastcall *v14)(CBitmap *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  char v18; // r14
  unsigned int v19; // r15d
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // ecx
  unsigned int v24; // edx
  HRGN v25; // rcx
  int v26; // eax
  float *v27; // rax
  __int64 v28; // [rsp+40h] [rbp-31h] BYREF
  __int64 v29; // [rsp+48h] [rbp-29h]
  unsigned int *v30; // [rsp+50h] [rbp-21h]
  _QWORD *v31; // [rsp+58h] [rbp-19h]
  RECT rect; // [rsp+60h] [rbp-11h] BYREF
  unsigned int v33[6]; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)(a4 + 192);
  v7 = *(_QWORD *)(a1 + 496);
  v8 = a2;
  v9 = a5;
  v10 = 0LL;
  v29 = a1;
  v11 = *(_QWORD *)v5;
  v30 = a2;
  v31 = a5;
  if ( (*(unsigned int (__fastcall **)(__int64))(v11 + 72))(v5) != 3 )
  {
    while ( 1 )
    {
LABEL_26:
      if ( !v7 )
        return;
      v26 = *(_DWORD *)(v7 + 152);
      if ( v26 == DisplayId::None || v8[7] == v26 )
      {
        if ( v10 )
        {
          if ( v7 == v10 )
            goto LABEL_30;
        }
        else if ( (unsigned __int8)CHwBitmapColorSource::CheckRequiredRealizationBounds(v7, a3, v8[2], v8[10], 1) )
        {
LABEL_30:
          *v9 = v7;
          (**(void (__fastcall ***)(__int64))v7)(v7);
          return;
        }
      }
      v7 = *(_QWORD *)(v7 + 336);
    }
  }
  v12 = 0;
  v13 = (CBitmap *)(v5 & -(__int64)(v5 != 16));
  v14 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v13 + 48LL);
  if ( v14 == CBitmap::GetSize )
    Size = CBitmap::GetSize(v13, &v33[1], &v33[2]);
  else
    Size = v14(v13, &v33[1], &v33[2]);
  if ( Size < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x21Du);
  }
  else
  {
    v16 = v8[2];
    rect.left = 0;
    rect.top = 0;
    v33[0] = v16;
    v33[3] = v8[10];
    rect.right = v33[1];
    rect.bottom = v33[2];
    v12 = CHwBitmapColorSource::ComputeMinimumRealizationBounds((struct MilRectF *)a3);
  }
  if ( !v12 )
    return;
  if ( *(_BYTE *)(a3 + 24) )
    goto LABEL_8;
  v27 = *(float **)(a3 + 16);
  if ( MILMatrix3x2::SetInverse((MILMatrix3x2 *)v33, *v27, v27[1], v27[4], v27[5], v27[12], v27[13]) )
  {
    MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v33, (const struct MilRectF *)a3, (struct MilRectF *)(a3 + 28));
    *(_BYTE *)(a3 + 24) = 1;
  }
  if ( *(_BYTE *)(a3 + 24) )
LABEL_8:
    *(_OWORD *)v33 = *(_OWORD *)(a3 + 28);
  v17 = *(_DWORD *)(v5 + 272);
  v18 = 0;
  v19 = 0;
  LODWORD(v28) = v17;
  if ( !v17 )
    goto LABEL_43;
  v20 = 0LL;
  v21 = v17;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v5 + 248);
    v23 = *(_DWORD *)(v20 + v22 + 32);
    if ( v23 <= *(_DWORD *)(v20 + v22 + 24) )
      goto LABEL_23;
    v24 = *(_DWORD *)(v20 + v22 + 28);
    if ( *(_DWORD *)(v20 + v22 + 36) <= v24 )
      goto LABEL_23;
    if ( rect.right > (unsigned int)rect.left
      && rect.bottom > (unsigned int)rect.top
      && v23 > rect.left
      && rect.right > *(_DWORD *)(v20 + v22 + 24)
      && *(_DWORD *)(v20 + v22 + 36) > rect.top
      && rect.bottom > v24 )
    {
      v25 = *(HRGN *)(v20 + v22 + 40);
      if ( !v25 || RectInRegion(v25, &rect) )
        break;
    }
LABEL_22:
    v21 = v28;
LABEL_23:
    ++v19;
    v20 += 96LL;
    if ( v19 >= v21 )
      goto LABEL_24;
  }
  if ( !v18 )
  {
    v10 = *(_QWORD *)(v20 + v22 + 16);
    v18 = 1;
    goto LABEL_22;
  }
  v18 = 0;
LABEL_24:
  if ( v18 )
  {
LABEL_25:
    v8 = v30;
    v9 = v31;
    v7 = *(_QWORD *)(v29 + 496);
    goto LABEL_26;
  }
LABEL_43:
  v28 = 0LL;
  if ( (unsigned __int8)CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v5 - 16, v33, &v28) )
  {
    v10 = v28;
    goto LABEL_25;
  }
}

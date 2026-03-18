/*
 * XREFs of ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801B6348
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801B50E0 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1800850BC (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180085100 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1800851A0 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1800855F4 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18009D000 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEC10 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x1801AC718 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::SetBitmapAndContext(
        CHwBitmapColorSource *this,
        __int64 a2,
        struct MilRectF *a3,
        int a4,
        float *a5,
        _QWORD *a6,
        struct MILMatrix3x2 *a7,
        struct BitmapToXSpaceTransform *a8,
        __int64 a9,
        struct CHwBitmapColorSource *a10)
{
  __int64 v10; // rdi
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  CBitmapOfDeviceBitmaps *v14; // rcx
  float *v15; // rdx
  _QWORD *v16; // r8
  signed int v17; // eax
  unsigned int v18; // ebx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = a4;
  v10 = a9;
  v20 = 0LL;
  CHwBitmapColorSource::SetBitmapAndContextCacheParameters(this, a2, &v21, a9);
  *(_OWORD *)((char *)this + 196) = *((_OWORD *)this + 8);
  if ( !*(_BYTE *)(v10 + 88) )
  {
    v13 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 27);
    if ( v13 )
    {
      if ( (**v13)(v13, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v20) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20) == 3 )
      {
        v14 = v20 ? (CBitmapOfDeviceBitmaps *)(v20 - 16) : 0LL;
        if ( !a10
          || CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
               v14,
               *(struct _LUID *)(*((_QWORD *)this + 2) + 728LL)) )
        {
          CHwBitmapColorSource::ComputeMinimumRealizationBounds(a3, (_DWORD *)(v10 + 72), (int *)this + 49);
        }
      }
    }
  }
  CHwBitmapColorSource::CheckAndSetReusableSources((CMILRefCountBase **)this, a10);
  v15 = a5;
  if ( (a5 != 0LL) != *((_BYTE *)this + 288) )
    goto LABEL_14;
  if ( !a5 )
    goto LABEL_17;
  if ( !CColorKey::operator==((float *)this + 73, a5) )
  {
LABEL_14:
    *((_DWORD *)this + 48) = 0;
    *((_DWORD *)this + 47) = 0;
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
  }
  if ( v15 )
  {
    *(_OWORD *)((char *)this + 292) = *(_OWORD *)v15;
    *(_OWORD *)((char *)this + 308) = *((_OWORD *)v15 + 1);
    *((float *)this + 81) = v15[8];
    *((_BYTE *)this + 288) = 1;
    goto LABEL_18;
  }
LABEL_17:
  *((_BYTE *)this + 288) = 0;
LABEL_18:
  v16 = a6;
  *((_DWORD *)this + 36) = *(_DWORD *)(v10 + 76);
  *((_DWORD *)this + 37) = *(_DWORD *)(v10 + 80);
  CHwTexturedColorSource::SetFilterMode((__int64)this, *(_DWORD *)(v10 + 72), v16);
  v17 = CHwBitmapColorSource::CalcTextureTransform(this, a7, a8);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x968u);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v20);
  return v18;
}

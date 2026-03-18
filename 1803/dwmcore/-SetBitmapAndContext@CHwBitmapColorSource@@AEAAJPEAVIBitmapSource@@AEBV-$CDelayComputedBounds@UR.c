/*
 * XREFs of ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801F08E8
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x1800937A0 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x1800CDDAC (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1801E7104 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x1801E94B0 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1801EE334 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE6A8 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE804 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
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
  char v16; // al
  _QWORD *v17; // r8
  CHwBitmapColorSource *v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+20h] BYREF

  v23 = a4;
  v10 = a9;
  v22 = 0LL;
  CHwBitmapColorSource::SetBitmapAndContextCacheParameters(this, a2, &v23, a9);
  *(_OWORD *)((char *)this + 196) = *((_OWORD *)this + 8);
  if ( !*(_BYTE *)(v10 + 88) )
  {
    v13 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 27);
    if ( v13 )
    {
      if ( (**v13)(v13, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v22) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22) == 3 )
      {
        v14 = v22 ? (CBitmapOfDeviceBitmaps *)(v22 - 16) : 0LL;
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
    v16 = 1;
    goto LABEL_18;
  }
LABEL_17:
  v16 = 0;
LABEL_18:
  v17 = a6;
  *((_BYTE *)this + 288) = v16;
  *((_DWORD *)this + 36) = *(_DWORD *)(v10 + 76);
  *((_DWORD *)this + 37) = *(_DWORD *)(v10 + 80);
  CHwTexturedColorSource::SetFilterMode((__int64)this, *(_DWORD *)(v10 + 72), v17);
  v19 = CHwBitmapColorSource::CalcTextureTransform(v18, a7, a8);
  v20 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x968u);
  ReleaseInterfaceNoNULL<IBitmapSource>(v22);
  return v20;
}

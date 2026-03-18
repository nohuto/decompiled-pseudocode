/*
 * XREFs of ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043D40 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x180044B24 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180044D38 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180044DD8 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x18004D6D8 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180059F6C (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x18019B3FC (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::SetBitmapAndContext(
        CHwBitmapColorSource *this,
        __int64 a2,
        struct MilRectF *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        struct MILMatrix3x2 *a7,
        struct BitmapToXSpaceTransform *a8,
        __int64 a9,
        struct CHwBitmapColorSource *a10)
{
  __int64 v10; // rdi
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // ebx
  CBitmapOfDeviceBitmaps *v19; // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  v10 = a9;
  v20 = 0LL;
  CHwBitmapColorSource::SetBitmapAndContextCacheParameters(this);
  *(_OWORD *)((char *)this + 188) = *(_OWORD *)((char *)this + 120);
  if ( !*(_BYTE *)(v10 + 88) )
  {
    v13 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
    if ( v13 )
    {
      if ( (**v13)(v13, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v20) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20) == 3 )
      {
        v19 = v20 ? (CBitmapOfDeviceBitmaps *)(v20 - 16) : 0LL;
        if ( !a10
          || CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
               v19,
               *(struct _LUID *)(*((_QWORD *)this + 2) + 712LL)) )
        {
          CHwBitmapColorSource::ComputeMinimumRealizationBounds(a3, (_DWORD *)(v10 + 72), (int *)this + 47);
        }
      }
    }
  }
  CHwBitmapColorSource::CheckAndSetReusableSources(this, a10);
  v14 = a5;
  if ( (a5 != 0) != *((_BYTE *)this + 280) )
    goto LABEL_18;
  if ( !a5 )
  {
LABEL_7:
    *((_BYTE *)this + 280) = 0;
    goto LABEL_8;
  }
  if ( !(unsigned __int8)CColorKey::operator==((char *)this + 284, a5) )
  {
LABEL_18:
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 43) = 0;
  }
  if ( !v14 )
    goto LABEL_7;
  *(_OWORD *)((char *)this + 284) = *(_OWORD *)v14;
  *(_OWORD *)((char *)this + 300) = *(_OWORD *)(v14 + 16);
  *((_DWORD *)this + 79) = *(_DWORD *)(v14 + 32);
  *((_BYTE *)this + 280) = 1;
LABEL_8:
  v15 = a6;
  *((_DWORD *)this + 34) = *(_DWORD *)(v10 + 76);
  *((_DWORD *)this + 35) = *(_DWORD *)(v10 + 80);
  CHwTexturedColorSource::SetFilterMode(this, *(unsigned int *)(v10 + 72), v15);
  v16 = CHwBitmapColorSource::CalcTextureTransform(this, a7, a8);
  v17 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x96Bu);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v20);
  return v17;
}

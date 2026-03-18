/*
 * XREFs of ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18007C330
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180043438 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007D224 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1800C5DD8 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::GetBitmapColorSource(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        struct CHwBitmapColorSource::CacheParameters *a3,
        const struct CHwBitmapColorSource::CacheContextParameters *a4,
        struct CHwBitmapCache *a5,
        struct CHwBitmapColorSource **a6,
        struct CHwBitmapColorSource **a7)
{
  CMILPoolResource *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  int Cache; // eax
  int v16; // eax
  int v17; // eax
  struct IMILResourceCache *v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = 0LL;
  if ( a5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
    goto LABEL_3;
  }
  Cache = CHwBitmapCache::GetCache(a1, a2, 0, &a5);
  if ( Cache >= 0 )
  {
LABEL_3:
    v11 = a5;
    v12 = CHwBitmapCache::ChooseBitmapColorSource(a5, a2, a3, a4, a6, a7);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD0u);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, Cache, 0xC7u);
  *a7 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IMILResourceCache **))a2)(
          a2,
          &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
          &v18);
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xDCu);
  v17 = CHwBitmapColorSource::Create(a1, v18, a3, 0, a6);
  v13 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE2u);
  v11 = a5;
LABEL_5:
  if ( v18 )
    (*(void (__fastcall **)(struct IMILResourceCache *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v11 )
    CMILPoolResource::Release(v11);
  return v13;
}

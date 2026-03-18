/*
 * XREFs of ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180056E58
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x180057010 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::RetrieveFromBitmapSource(
        struct IBitmapSource *a1,
        const struct CD3DDeviceLevel1 *a2,
        struct CHwBitmapCache **a3)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **); // rax
  int Resource; // eax
  struct CHwBitmapCache *v9; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct IMILCacheableResource *v12; // [rsp+48h] [rbp+10h] BYREF
  CMILResourceCache *v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v4 = *((_DWORD *)a2 + 128);
  if ( v4 == -1 )
  {
    v6 = -2147467259;
    v11 = 92;
  }
  else
  {
    v5 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, CMILResourceCache **))a1)(
           a1,
           &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
           &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5Fu);
      goto LABEL_18;
    }
    v7 = *(__int64 (__fastcall **)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **))(*(_QWORD *)v13 + 24LL);
    if ( v7 == CMILResourceCache::GetResource )
      Resource = CMILResourceCache::GetResource(v13, v4, &v12);
    else
      Resource = v7(v13, v4, &v12);
    v6 = Resource;
    if ( Resource >= 0 )
    {
      v9 = v12;
      if ( v12 )
        v9 = (struct IMILCacheableResource *)((char *)v12 - 128);
      v12 = 0LL;
      *a3 = v9;
      goto LABEL_9;
    }
    v11 = 98;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v11);
LABEL_18:
  if ( v12 )
    (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v12 + 8LL))(v12);
LABEL_9:
  if ( v13 )
    (*(void (__fastcall **)(CMILResourceCache *))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}

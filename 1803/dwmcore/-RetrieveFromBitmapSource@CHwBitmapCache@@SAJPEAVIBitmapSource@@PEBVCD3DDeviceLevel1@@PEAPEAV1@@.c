/*
 * XREFs of ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801E8548
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::RetrieveFromBitmapSource(
        struct IBitmapSource *a1,
        const struct CD3DDeviceLevel1 *a2,
        struct CHwBitmapCache **a3)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // ebx
  struct CHwBitmapCache *v7; // rax
  unsigned int v8; // eax
  struct CHwBitmapCache *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = *((_DWORD *)a2 + 124);
  v10 = 0LL;
  v11 = 0LL;
  if ( v4 == -1 )
  {
    v6 = -2147467259;
    v8 = 92;
  }
  else
  {
    v5 = v4;
    v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a1)(
           a1,
           &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
           &v11);
    if ( v6 < 0 )
    {
      v8 = 95;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CHwBitmapCache **))(*(_QWORD *)v11 + 24LL))(v11, v5, &v10);
      if ( v6 >= 0 )
      {
        v7 = v10;
        if ( v10 )
          v7 = (struct CHwBitmapCache *)((char *)v10 - 120);
        v10 = 0LL;
        *a3 = v7;
        goto LABEL_13;
      }
      v8 = 98;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v8);
  if ( v10 )
    (*(void (__fastcall **)(struct CHwBitmapCache *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_13:
  ReleaseInterfaceNoNULL<IWICBitmap>(v11);
  return (unsigned int)v6;
}

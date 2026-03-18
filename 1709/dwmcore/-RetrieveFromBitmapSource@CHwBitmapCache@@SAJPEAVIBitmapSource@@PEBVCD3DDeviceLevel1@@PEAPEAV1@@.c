/*
 * XREFs of ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007BBC8
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801B50E0 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::RetrieveFromBitmapSource(
        struct IBitmapSource *a1,
        const struct CD3DDeviceLevel1 *a2,
        struct CHwBitmapCache **a3)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  struct CHwBitmapCache *v8; // rax
  DWORD v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct CHwBitmapCache *v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = *((_DWORD *)a2 + 124);
  v12 = 0LL;
  v13 = 0LL;
  if ( v4 == -1 )
  {
    v6 = -2147467259;
    v11 = 92;
    v10 = -2147467259;
  }
  else
  {
    v5 = v4;
    v7 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a1)(
           a1,
           &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
           &v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      v11 = 95;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CHwBitmapCache **))(*(_QWORD *)v13 + 24LL))(v13, v5, &v12);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v8 = v12;
        if ( v12 )
          v8 = (struct CHwBitmapCache *)((char *)v12 - 120);
        v12 = 0LL;
        *a3 = v8;
        goto LABEL_9;
      }
      v11 = 98;
    }
    v10 = v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v11);
  if ( v12 )
    (*(void (__fastcall **)(struct CHwBitmapCache *))(*(_QWORD *)v12 + 8LL))(v12);
LABEL_9:
  ReleaseInterfaceNoNULL<CManipulationManager>(v13);
  return v6;
}

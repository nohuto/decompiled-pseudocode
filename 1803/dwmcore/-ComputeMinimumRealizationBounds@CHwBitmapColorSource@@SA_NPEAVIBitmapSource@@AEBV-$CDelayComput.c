/*
 * XREFs of ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUCacheContextParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE9D8
 * Callers:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1801E875C (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE804 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 */

char __fastcall CHwBitmapColorSource::ComputeMinimumRealizationBounds(
        __int64 a1,
        struct MilRectF *a2,
        __int64 a3,
        int *a4)
{
  char v7; // bl
  int v8; // eax
  int v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v12[4]; // [rsp+38h] [rbp-30h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD *))(*(_QWORD *)a1 + 32LL))(a1, &v11, v12);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x21Bu);
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 8);
    v12[1] = *(_DWORD *)(a3 + 40);
    a4[2] = v11;
    a4[3] = v12[0];
    *(_QWORD *)a4 = 0LL;
    return CHwBitmapColorSource::ComputeMinimumRealizationBounds(a2, &v10, a4);
  }
  return v7;
}

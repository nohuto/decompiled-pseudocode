/*
 * XREFs of ?TryMakeSuperWet@CWetInkManager@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_KPEAVCDrawingContext@@PEA_N@Z @ 0x18013ABFC
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x18013AA20 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800781D0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18013AB30 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 */

__int64 __fastcall CWetInkManager::TryMakeSuperWet(
        CWetInkManager *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        __int64 a3,
        struct CDrawingContext *a4,
        bool *a5)
{
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int16 v10; // [rsp+34h] [rbp-Dh]
  int v11; // [rsp+38h] [rbp-9h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-5h]
  __int64 v13; // [rsp+40h] [rbp-1h]
  __int64 v14; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v15[48]; // [rsp+50h] [rbp+Fh] BYREF

  v14 = 0LL;
  v13 = 0LL;
  memset_0(v15, 0, 0x2CuLL);
  *a5 = 0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetCachedFeatureEnabledState(v6, v5, v7);
  LOBYTE(v10) = 0;
  v11 = 0;
  v12 = v10;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data,
    11148202LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v11);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v14);
  return 0LL;
}

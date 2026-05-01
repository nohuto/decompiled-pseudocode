/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800D83F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CB5C8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 *     ?GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@PEAPEAU5674@@Z @ 0x1800D6DBC (-GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Col.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800D7154 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800D97A0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9A50 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, __int64 *))
{
  int (__fastcall **v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  BOOL v8; // ebx
  bool IsViewContextHolographic; // di
  struct IUnknownVtbl *v10; // rbx
  __int64 *v11; // rax
  PositionerPropertySetHelpers *v12; // rcx
  enum PositionerPropertySetHelpers::ActivationPropertyFlags *v13; // r9
  int DetailsForActivation; // eax
  struct Windows::Foundation::Collections::IPropertySet **v15; // r8
  struct IUnknownVtbl *lpVtbl; // rcx
  Windows::Internal::Shell::Holographic *v17; // rcx
  __int64 v18; // rcx
  Windows::Internal::Shell::Holographic *v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21[2]; // [rsp+38h] [rbp-28h] BYREF
  int v22; // [rsp+48h] [rbp-18h]
  __int16 v23; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IUnknown v25; // [rsp+A8h] [rbp+48h] BYREF

  v21[1] = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  v22 = 0;
  LOBYTE(v23) = 3;
  LODWORD(v25.lpVtbl) = 0;
  WORD2(v25.lpVtbl) = v23;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
    0x88518Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v25,
    1,
    3);
  v21[0] = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v21);
  if ( (*v6)((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v7) >= 0 )
  {
    IsViewContextHolographic = 0;
    v20 = 0LL;
    if ( a3 )
    {
      v10 = (struct IUnknownVtbl *)*a3;
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v20);
      if ( ((__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))v10->QueryInterface)(
             a3,
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             v11) >= 0 )
      {
        DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(v12, a3, &v25, v13);
        if ( DetailsForActivation < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x240,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)DetailsForActivation);
        if ( ((__int64)v25.lpVtbl & 4) != 0 )
        {
          LODWORD(v25.lpVtbl) = 0;
          IsViewContextHolographic = (int)HolographicPositioner::IsViewManaged(
                                            (HolographicPositioner *)((char *)this - 40),
                                            (struct IApplicationView *)a2,
                                            (int *)&v25) >= 0
                                  && LODWORD(v25.lpVtbl);
        }
        else if ( ((__int64)v25.lpVtbl & 8) != 0 )
        {
          v25.lpVtbl = 0LL;
          if ( (int)Windows::Internal::Shell::Holographic::GetOriginatingActivationPropertySet(
                      v20,
                      (struct Windows::Foundation::Collections::IPropertySet *)&v25,
                      v15) >= 0 )
            IsViewContextHolographic = HolographicPositioner::_IsViewContextHolographic(
                                         (HolographicPositioner *)((char *)this - 152),
                                         (struct IApplicationView *)a2,
                                         (struct Windows::Foundation::Collections::IPropertySet *)v25.lpVtbl);
          lpVtbl = v25.lpVtbl;
          if ( v25.lpVtbl )
          {
            v25.lpVtbl = 0LL;
            (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
          }
        }
        else
        {
          IsViewContextHolographic = HolographicPositioner::_IsViewContextHolographic(
                                       (HolographicPositioner *)((char *)this - 152),
                                       (struct IApplicationView *)a2,
                                       v20);
        }
      }
    }
    v8 = IsViewContextHolographic;
    v17 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(Windows::Internal::Shell::Holographic *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    v8 = 0;
  }
  v18 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v8;
}

/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180060CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___ @ 0x180025720 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800754A0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180086178 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlin.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::IsFullScreen(IUnknown **this, struct IImmersiveApplication *a2, int *a3)
{
  HRESULT v6; // eax
  int v7; // ebx
  __int64 (__fastcall *v8)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int ViewForApplication; // eax
  void *v10; // rcx
  RTL_SRWLOCK *v11; // rbx
  __int64 (__fastcall *v12)(RTL_SRWLOCK *, PVOID *); // rax
  int PositionerPriority; // eax
  int v14; // esi
  __int64 v15; // rax
  struct wil_details_RecordUsageResult *v16; // r9
  IUnknown *v17; // rcx
  int v18; // eax
  __int64 (*v19)(void); // rax
  int CurrentPositioner; // eax
  struct IShellPositionerPriority *v21; // rcx
  CWinRTApplicationView *v22; // rcx
  void (*v23)(void); // rax
  int v25; // [rsp+20h] [rbp-89h]
  int v26; // [rsp+20h] [rbp-89h]
  enum wil_VariantReportingKind *v27; // [rsp+30h] [rbp-79h]
  unsigned __int64 v28; // [rsp+40h] [rbp-69h]
  char v29; // [rsp+50h] [rbp-59h] BYREF
  int v30; // [rsp+58h] [rbp-51h] BYREF
  __int16 v31; // [rsp+5Ch] [rbp-4Dh]
  void *ppvOut; // [rsp+60h] [rbp-49h] BYREF
  struct IShellPositionerPriority *v33; // [rsp+68h] [rbp-41h] BYREF
  CApplicationViewBase *v34; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v35[3]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v36[24]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v37[2]; // [rsp+A8h] [rbp-1h] BYREF
  int v38; // [rsp+B8h] [rbp+Fh]
  int v39; // [rsp+BCh] [rbp+13h]
  __int128 v40; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  *a3 = 0;
  v34 = 0LL;
  ppvOut = 0LL;
  v6 = IUnknown_QueryService(
         *(this - 9),
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v6,
      v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **))(*(_QWORD *)ppvOut + 56LL);
    if ( v8 == CApplicationViewManager::GetViewForApplication )
      ViewForApplication = CApplicationViewManager::GetViewForApplication((RTL_SRWLOCK *)ppvOut, a2, &v34);
    else
      ViewForApplication = v8((RTL_SRWLOCK *)ppvOut, a2, &v34);
    v7 = ViewForApplication;
    if ( ViewForApplication < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)ViewForApplication,
        v25);
    v10 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v7,
      v25);
  }
  else
  {
    v11 = (RTL_SRWLOCK *)v34;
    *a3 = 0;
    v33 = 0LL;
    v12 = (__int64 (__fastcall *)(RTL_SRWLOCK *, PVOID *))*((_QWORD *)v11->Ptr + 33);
    if ( v12 == CApplicationViewBase::GetPositionerPriority )
      PositionerPriority = CApplicationViewBase::GetPositionerPriority(v11, (PVOID *)&v33);
    else
      PositionerPriority = v12(v11, (PVOID *)&v33);
    if ( PositionerPriority >= 0 )
    {
      v29 = 0;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetCachedFeatureEnabledState();
      LOBYTE(v31) = 3;
      v14 = 1;
      LODWORD(ppvOut) = 0;
      WORD2(ppvOut) = v31;
      v30 = 3;
      v15 = wil_details_RecordUsageInPropertyCache(
              (__int64)v36,
              (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data,
              2,
              0,
              1u);
      v40 = *(_OWORD *)v15;
      v41 = *(_QWORD *)(v15 + 16);
      if ( g_wil_details_recordFeatureUsage )
      {
        if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
          wil::details::RecordFeatureUsageCallback(
            (wil::details *)0x9A07C0,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data,
            (union wil_details_FeaturePropertyCache *)&v40,
            v16);
        else
          g_wil_details_recordFeatureUsage(
            0x9A07C0u,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data,
            (struct wil_details_RecordUsageResult *)&v40);
        if ( (`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
        {
          v38 = 0;
          v39 = (`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
          v37[0] = 0LL;
          v37[1] = 2LL;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10094528LL, 0LL, v37);
        }
      }
      if ( !(_DWORD)v41 && g_wil_details_pfnFeatureLoggingHook )
      {
        LOBYTE(v27) = 0;
        if ( (char *)g_wil_details_pfnFeatureLoggingHook == (char *)wil::details::FeatureLoggingHook )
          wil::details::FeatureLoggingHook(
            (wil::details *)0x9A07C0,
            (unsigned int)&ppvOut,
            0LL,
            (const struct FEATURE_ERROR *)1,
            (__int64)&v30,
            0LL,
            v27,
            1,
            v28);
        else
          g_wil_details_pfnFeatureLoggingHook(
            0x9A07C0u,
            (const struct FEATURE_LOGGED_TRAITS *)&ppvOut,
            0LL,
            1,
            (const enum wil_ReportingKind *)&v30,
            0LL,
            0,
            1uLL);
      }
      v17 = *(this - 9);
      v35[2] = &v29;
      v35[0] = v11;
      v35[1] = a3;
      v18 = ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___(
              v17,
              (struct IApplicationView *)v11,
              (__int64)v35);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF1,
          (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)v18,
          v26);
      if ( !v29 )
      {
        v19 = *(__int64 (**)(void))(*(_QWORD *)v33 + 24LL);
        if ( (char *)v19 == (char *)PositionerPriority::GetCurrentPositioner )
          CurrentPositioner = PositionerPriority::GetCurrentPositioner((RTL_SRWLOCK *)v33);
        else
          CurrentPositioner = v19();
        if ( CurrentPositioner != 3 )
          v14 = 0;
        *a3 = v14;
      }
    }
    v21 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v7 = 0;
  }
  v22 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
    if ( (char *)v23 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v22);
    else
      v23();
  }
  return (unsigned int)v7;
}

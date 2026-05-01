/*
 * XREFs of ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800218D0
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180022368 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800252D0 (-SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801073E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  bool v8; // r14
  HWND WindowForView; // rsi
  __int64 (__fastcall *v10)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  bool v12; // di
  struct IShellPositionerPriority *v13; // rcx
  bool v14; // r15
  __int64 (__fastcall *v15)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  int v17; // edi
  __int64 (*v18)(void); // rax
  int CurrentPositioner; // eax
  struct IShellPositionerPriority *v20; // rcx
  void (__fastcall *v21)(struct IApplicationView *, __int64); // rax
  struct IShellPositionerPriority *v22[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]

  v22[1] = (struct IShellPositionerPriority *)-2LL;
  v4 = a3 - 1;
  if ( !v4 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(a1, 0LL);
    return 0LL;
  }
  v5 = v4 - 6;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 7 )
        CDesktopPositioner::_OnSizeConstraintsChanged((CDesktopPositioner *)(a1 - 136), a2);
      return 0LL;
    }
  }
  v8 = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, a2);
  if ( WindowForView )
  {
    v22[0] = 0LL;
    v10 = **(__int64 (__fastcall ***)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))a2;
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                    a2,
                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                    v22);
    }
    else if ( v10 == CWin32ApplicationView::QueryInterface )
    {
      Interface = CWin32ApplicationView::QueryInterface(a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, (void **)v22);
    }
    else
    {
      Interface = v10(a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, (void **)v22);
    }
    v12 = Interface >= 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
    v8 = v12 && !GetPropW(WindowForView, L"ViewWindowHasEverUncloaked");
    SetPropW(WindowForView, L"ViewWindowHasEverUncloaked", HANDLE_FLAG_INHERIT);
    v13 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = 0;
  v22[0] = 0LL;
  v15 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a2 + 264LL);
  if ( v15 == CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority(a2, v22);
  else
    PositionerPriority = v15(a2, v22);
  v17 = PositionerPriority;
  if ( PositionerPriority < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x768,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)PositionerPriority,
      (int)v22[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v22);
  }
  else
  {
    v18 = *(__int64 (**)(void))(*(_QWORD *)v22[0] + 24LL);
    if ( v18 == PositionerPriority::GetCurrentPositioner )
      CurrentPositioner = PositionerPriority::GetCurrentPositioner();
    else
      CurrentPositioner = v18();
    v14 = CurrentPositioner == 0;
    v20 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v17 = 0;
  }
  if ( v17 >= 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
    if ( v14 )
    {
      if ( v8 && WindowForView )
        DwmpTransitionWindow(WindowForView, 93LL);
      v21 = *(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL);
      if ( (char *)v21 == (char *)CApplicationViewBase::SetCloak )
        CApplicationViewBase::SetCloak(a2, 1LL);
      else
        v21(a2, 1LL);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C6,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v17,
    (int)v22[0]);
  return (unsigned int)v17;
}

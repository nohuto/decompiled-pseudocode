/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D6638
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1800D44A0 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800D5C40 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FE0C (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A61EC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A6874 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1800A7ED4 (--$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA-AV0.c)
 *     ??$_GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x1800B9A7C (--$_GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D76C4 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800D9474 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800DA754 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800DA7A0 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // ebx
  HRESULT v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // r8
  int v7; // eax
  int v8; // ecx
  char v9; // al
  bool v10; // si
  __int64 v11; // rax
  void (*v12)(void); // rax
  int v13; // r14d
  HRESULT v14; // eax
  struct Windows::Foundation::IPropertyValue *v15; // r8
  int v16; // eax
  int v17; // ecx
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // ebx
  HMONITOR v21; // r8
  HMONITOR v22; // r8
  int v23; // eax
  bool IsViewVisible; // al
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v29; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v34[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v31[1] = -2LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v34);
  v30 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18), &v30);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x433,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_37;
  }
  v31[0] = v30;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  v4 = *((_DWORD *)this + 34);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"WindowMode", 0xAu, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v31,
         string,
         v6,
         (__int64)&v29);
  v8 = v29;
  if ( v7 < 0 )
    v8 = 0;
  *((_DWORD *)this + 34) = v8;
  v9 = v8 != 3;
  v10 = 0;
  if ( v4 == 9 )
  {
    if ( v8 != 9 )
    {
      v10 = 1;
      *((_BYTE *)this + 210) = 0;
    }
  }
  else if ( v8 == 9 )
  {
    *((_BYTE *)this + 210) = 1;
  }
  if ( v9 != *((_BYTE *)this + 128) )
  {
    *((_BYTE *)this + 128) = v9;
    v11 = **((_QWORD **)this + 12);
    if ( v8 == 3 )
      v12 = *(void (**)(void))(v11 + 128);
    else
      v12 = *(void (**)(void))(v11 + 120);
    v12();
  }
  v13 = *((_DWORD *)this + 33);
  string = 0LL;
  v14 = WindowsCreateStringReference(L"ViewMode", 8u, &hstringHeader, &string);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
  v16 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)v31,
          string,
          v15,
          (__int64)&v29);
  v17 = v29;
  if ( v16 < 0 )
    v17 = 0;
  *((_DWORD *)this + 33) = v17;
  if ( *((_BYTE *)this + 240) )
  {
    v18 = *((float *)this + 43);
    LODWORD(hstringHeader.Reserved.Reserved1) = (int)v18;
    v19 = *((float *)this + 44);
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = (int)v19;
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = (int)(float)(v18 + *((float *)this + 45));
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[12] = (int)(float)(v19 + *((float *)this + 46));
    v20 = (unsigned int)MonitorFromRect((LPCRECT)&hstringHeader, 0);
    *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                          (ExperienceManagerUtils *)0x1AC,
                                          v20,
                                          v21);
    *((float *)this + 48) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                          (ExperienceManagerUtils *)0x1EC,
                                          v20,
                                          v22);
LABEL_28:
    IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
    v25 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v10);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x460,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v25);
    if ( v13 == 3 )
    {
      CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
      if ( *((_DWORD *)this + 33) == 4 )
      {
        v26 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x46E,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v26);
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v34);
    v3 = 0;
    goto LABEL_35;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 18) + 48LL))(
          *((_QWORD *)this + 18),
          (char *)this + 188);
  v3 = v23;
  if ( v23 >= 0 )
    goto LABEL_28;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x45E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v23);
LABEL_35:
  if ( v31[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31[0] + 16LL))(v31[0]);
LABEL_37:
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v34[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v34);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
  return v3;
}

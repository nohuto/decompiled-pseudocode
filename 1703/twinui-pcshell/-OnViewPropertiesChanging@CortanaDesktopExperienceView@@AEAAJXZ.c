/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C47E8
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1800C2960 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800C3DB0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInt32WithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAHPEAUHSTRING__@@H@Z @ 0x180097DC4 (-GetInt32WithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAHPEAUHSTRING__@@H@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BA50 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009CBDC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009D264 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x18009EAEC (--$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA-AV0.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C5844 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800C8318 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800C8364 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // ebx
  HRESULT v5; // eax
  unsigned int v6; // r8d
  int Int32WithDefault; // eax
  char v8; // cl
  bool v9; // si
  bool v10; // zf
  __int64 v11; // rax
  void (*v12)(void); // rax
  int v13; // r14d
  HRESULT v14; // eax
  unsigned int v15; // r8d
  float v16; // xmm0_4
  float v17; // xmm1_4
  int v18; // ebx
  HMONITOR v19; // r8
  HMONITOR v20; // r8
  int v21; // eax
  bool IsViewVisible; // al
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v28[2]; // [rsp+30h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING string[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v31[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v28[1] = -2LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v31);
  v27 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18), &v27);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x41F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_33;
  }
  v28[0] = v27;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v4 = *((_DWORD *)this + 34);
  string[0] = 0LL;
  v5 = WindowsCreateStringReference(L"WindowMode", 0xAu, &hstringHeader, string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  Int32WithDefault = Windows::Internal::ShellHelpers::PropertySetHelper::GetInt32WithDefault(
                       (Windows::Internal::ShellHelpers::PropertySetHelper *)v28,
                       string[0],
                       v6);
  *((_DWORD *)this + 34) = Int32WithDefault;
  v8 = Int32WithDefault != 3;
  v9 = 0;
  if ( v4 == 9 )
  {
    if ( Int32WithDefault != 9 )
    {
      v9 = 1;
      *((_BYTE *)this + 208) = 0;
    }
  }
  else if ( Int32WithDefault == 9 )
  {
    *((_BYTE *)this + 208) = 1;
  }
  if ( v8 != *((_BYTE *)this + 128) )
  {
    *((_BYTE *)this + 128) = v8;
    v10 = Int32WithDefault == 3;
    v11 = **((_QWORD **)this + 12);
    if ( v10 )
      v12 = *(void (**)(void))(v11 + 128);
    else
      v12 = *(void (**)(void))(v11 + 120);
    v12();
  }
  v13 = *((_DWORD *)this + 33);
  string[0] = 0LL;
  v14 = WindowsCreateStringReference(L"ViewMode", 8u, &hstringHeader, string);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
  *((_DWORD *)this + 33) = Windows::Internal::ShellHelpers::PropertySetHelper::GetInt32WithDefault(
                             (Windows::Internal::ShellHelpers::PropertySetHelper *)v28,
                             string[0],
                             v15);
  if ( *((_BYTE *)this + 240) )
  {
    v16 = *((float *)this + 43);
    LODWORD(hstringHeader.Reserved.Reserved1) = (int)v16;
    v17 = *((float *)this + 44);
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = (int)v17;
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = (int)(float)(v16 + *((float *)this + 45));
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[12] = (int)(float)(v17 + *((float *)this + 46));
    v18 = (unsigned int)MonitorFromRect((LPCRECT)&hstringHeader, 0);
    *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                          (ExperienceManagerUtils *)0x1AC,
                                          v18,
                                          v19);
    *((float *)this + 48) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                          (ExperienceManagerUtils *)0x1EC,
                                          v18,
                                          v20);
LABEL_24:
    IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
    v23 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v9);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v23);
    if ( v13 == 3 )
    {
      CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
      if ( *((_DWORD *)this + 33) == 4 )
      {
        v24 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x45A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v24);
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v31);
    v3 = 0;
    goto LABEL_31;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 18) + 48LL))(
          *((_QWORD *)this + 18),
          (char *)this + 188);
  v3 = v21;
  if ( v21 >= 0 )
    goto LABEL_24;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x44A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v21);
LABEL_31:
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
LABEL_33:
  v25 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v31[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v31);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
  return v3;
}

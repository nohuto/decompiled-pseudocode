/*
 * XREFs of ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FD98 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A6988 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A70B8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800D3B34 (-StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D75B0 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D76C4 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800D8054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1800D8684 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800DA1E0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::MinimizeToBoxMode(CortanaDesktopExperienceView *this)
{
  char *v2; // rdi
  int v3; // eax
  int v4; // eax
  HRESULT v5; // eax
  int ActivateArgs; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ebx
  HSTRING newString[2]; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v14[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h]
  int *v16; // [rsp+80h] [rbp-88h]
  int *v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h] BYREF
  char v19; // [rsp+94h] [rbp-74h]
  int v20; // [rsp+B8h] [rbp-50h] BYREF
  const char *v21; // [rsp+C0h] [rbp-48h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  char v23; // [rsp+D0h] [rbp-38h]
  __int64 v24; // [rsp+D8h] [rbp-30h]
  _BYTE v25[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+170h] [rbp+68h]
  __int64 v27; // [rsp+178h] [rbp+70h]
  __int64 v28; // [rsp+180h] [rbp+78h]
  __int64 v29; // [rsp+188h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  newString[1] = (HSTRING)-2LL;
  v14[1] = 0LL;
  v14[2] = v14;
  v14[3] = 0LL;
  LODWORD(v15) = 0;
  v16 = &v20;
  v17 = &v18;
  v18 = 0;
  v19 = 0;
  v23 = 0;
  v20 = 0;
  v21 = "CortanaExperienceManager_Dismiss";
  v22 = 0LL;
  v24 = 1LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(v25, 0, sizeof(v25));
  v28 = 0LL;
  v29 = 0LL;
  v14[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *)v14);
  *((_BYTE *)this + 173) = 0;
  *((_BYTE *)this + 175) = 1;
  v2 = (char *)this - 24;
  v3 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded((CortanaDesktopExperienceView *)((char *)this - 24));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x28D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  v4 = CortanaDesktopExperienceView::SetZBand((char *)this - 24, 13LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x28F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)((char *)this - 24));
  newString[0] = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"StartMode=QFSearchBox&QuerySource=StartLightDismiss&Positioner=desktop",
         0x46u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  WindowsDeleteString(newString[0]);
  newString[0] = 0LL;
  ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                   (CortanaDesktopExperienceView *)((char *)this - 24),
                   string,
                   newString);
  v7 = ActivateArgs;
  if ( ActivateArgs >= 0 )
  {
    v8 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(v2, L"NotifyRelaunch", 0LL, newString[0]);
    v9 = v8;
    if ( v8 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x718,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x296,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x295,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
  }
  WindowsDeleteString(newString[0]);
  newString[0] = 0LL;
  v14[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  return v7;
}

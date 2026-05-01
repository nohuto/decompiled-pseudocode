/*
 * XREFs of ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C300
 * Callers:
 *     ?RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800686B0 (-RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z @ 0x18006E180 (-IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006E21C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180091368 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180094054 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??$?0PEBGPEBGIAEBQEAUHWND__@@@RemoveKeepAlive@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1$$QEAIAEBQEAUHWND__@@@Z @ 0x18009407C (--$-0PEBGPEBGIAEBQEAUHWND__@@@RemoveKeepAlive@SingleViewExperienceTelemetry@@AEAA@U-$integral_co.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RemoveKeepAlive(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  int v4; // edx
  DesktopSingleViewShellExperiencePersonality *v5; // rcx
  __int64 (__fastcall *v6)(DesktopSingleViewShellExperiencePersonality *__hidden, bool *); // rax
  int IsViewVisible; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+28h] [rbp-E0h]
  int v13; // [rsp+28h] [rbp-E0h]
  bool v14[8]; // [rsp+38h] [rbp-D0h] BYREF
  HWND v15; // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v18[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v17[1] = -2LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( !v3 )
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x8000FFFFLL,
      v12);
    return v9;
  }
  v15 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  *(_DWORD *)&v14[4] = *((_DWORD *)this + 10);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v17[0] = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::RemoveKeepAlive::RemoveKeepAlive(
    (unsigned int)v18,
    v4,
    (unsigned int)v17,
    (unsigned int)&StringRawBuffer,
    (__int64)&v14[4],
    (__int64)&v15);
  v14[0] = 0;
  v5 = (DesktopSingleViewShellExperiencePersonality *)*((_QWORD *)this + 10);
  v6 = *(__int64 (__fastcall **)(DesktopSingleViewShellExperiencePersonality *__hidden, bool *))(*(_QWORD *)v5 + 56LL);
  if ( v6 == DesktopSingleViewShellExperiencePersonality::IsViewVisible )
    IsViewVisible = DesktopSingleViewShellExperiencePersonality::IsViewVisible(v5, v14);
  else
    IsViewVisible = v6(v5, v14);
  if ( IsViewVisible < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x385,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)IsViewVisible,
      v13);
  if ( v14[0] )
  {
    v9 = -2147019873;
    v11 = 902LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v9,
      v13);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 18) = 1;
    goto LABEL_9;
  }
  v8 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
         (char *)this + 72,
         *((_QWORD *)this + 3),
         1LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v8,
    v13);
LABEL_10:
  if ( (v9 & 0x80000000) != 0 )
  {
    v11 = 903LL;
    goto LABEL_20;
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
  v9 = 0;
LABEL_12:
  SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive((SingleViewExperienceTelemetry::RemoveKeepAlive *)v18);
  return v9;
}

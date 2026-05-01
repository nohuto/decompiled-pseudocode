/*
 * XREFs of ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800D8870
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800D51E0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800D53E0 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009E2C0 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800A01E4 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800D1D34 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800DA1E0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x1800DB71C (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowInternal(
        TabletModeHelpers *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // r8
  DWORD v9; // eax
  const struct _TlgProvider_t *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  bool v16[4]; // [rsp+40h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-15h] BYREF
  int pvData; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  char *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( TabletModeHelpers::IsTabletMode(a1) )
  {
    v9 = 1;
  }
  else
  {
    v16[0] = 0;
    CortanaCapabilities::HasCortanaCapabilities(2048, v16, v8);
    pcbData = 4;
    pvData = v16[0] + 1;
    RegGetValueW(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
      L"SearchboxTaskbarMode",
      0x10u,
      0LL,
      &pvData,
      &pcbData);
    v9 = pvData;
  }
  pcbData = v9;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>(&pcbData);
  v10 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v10 > 4u )
  {
    v22 = 0;
    v20 = (char *)a1 + 206;
    v21 = 1;
    TlgWrite(v10, &unk_18025D965, 0LL, 0LL, 3u, &pData);
  }
  v11 = *((_QWORD *)a1 + 18);
  v16[0] = 0;
  if ( v11 && (*(int (__fastcall **)(__int64, bool *))(*(_QWORD *)v11 + 72LL))(v11, v16) >= 0 && v16[0] )
  {
    v12 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(a1, L"NotifyRelaunch", a4, a2);
    v13 = v12;
    if ( v12 >= 0 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x718,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x744,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 18) + 88LL))(
          *((_QWORD *)a1 + 18),
          a2,
          a3);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x747,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
  return 0LL;
}

/*
 * XREFs of ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18022F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078980 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18022C574 (--$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAE.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x18022D70C (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ?CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x18022E2DC (-CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x1802304A4 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ @ 0x1802311E0 (-StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180231698 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rdi
  int v5; // ebx
  char v6; // r14
  XamlLauncherState *v7; // rbp
  HWND WindowW; // rax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  XamlLauncherState *v11; // [rsp+30h] [rbp-28h]
  char v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v10 = v5;
  v11 = this;
  v12 = 1;
  v6 = 1;
  v7 = (XamlLauncherState *)((char *)this + 24);
  if ( !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    if ( v5 == 1 )
    {
LABEL_10:
      v6 = 0;
      *((_BYTE *)this + 963) = 1;
      *v4 = 1;
      v13 = -2147467260;
      StartWindowTelemetry::StartRunningWithoutCortana<long>((__int64)&v13);
      goto LABEL_11;
    }
    if ( v5 == 2 )
      goto LABEL_20;
    if ( v5 <= 2 )
      goto LABEL_11;
    if ( v5 <= 4 || v5 == 18 )
      goto LABEL_10;
    if ( v5 == 19 )
    {
LABEL_20:
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( v5 > 19 && v5 <= 21 )
    {
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( XamlLauncherState::IsCortanaVisible(v7) )
  {
    *((_QWORD *)this + 122) = 0LL;
    WindowW = hWnd;
    if ( !hWnd )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      hWnd = WindowW;
    }
    PostMessageW(WindowW, 0x5CBu, 0LL, 0LL);
  }
  if ( v6 )
  {
    if ( XamlLauncherState::IsCortanaVisible(v7) && XamlLauncherState::IsStartVisible(v7) )
    {
      *v4 = 16;
      if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 128LL))(*((_QWORD *)this + 10)) < 0 )
      {
        XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
        goto LABEL_24;
      }
LABEL_26:
      StartWindowTelemetry::StartStayedUpWhenCortanaCrashed();
      goto LABEL_24;
    }
    if ( XamlLauncherState::IsCortanaVisible(v7) )
    {
      StartWindowTelemetry::CortanaViewDestroyedWhileVisible();
    }
    else if ( *v4 == 16 )
    {
      goto LABEL_26;
    }
    *v4 = 0;
  }
LABEL_24:
  v12 = 0;
  StartWindowTelemetry::OnCortanaDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v10,
    v4);
  return 0LL;
}

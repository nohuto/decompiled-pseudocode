/*
 * XREFs of ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x180185B4C (-PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z.c)
 *     ?StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ @ 0x180187418 (-StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ.c)
 *     ?CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x180187500 (-CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180189AE0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x18018AAF8 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18018B374 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ??$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E508 (--$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAE.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x18018E5D0 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  unsigned int *v4; // rbx
  char v5; // bp
  int v6; // r15d
  signed int v8; // [rsp+28h] [rbp-30h] BYREF
  XamlLauncherState *v9; // [rsp+30h] [rbp-28h]
  char v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int *)((char *)this + 64);
  v8 = *((_DWORD *)this + 16);
  v9 = this;
  v10 = 1;
  v5 = 1;
  v6 = 227872;
  if ( (unsigned int)v8 > 0x11 || !_bittest(&v6, v8) )
  {
    if ( v8 != 1 )
    {
      if ( v8 == 2 )
        goto LABEL_11;
      if ( v8 <= 2 )
        goto LABEL_13;
      if ( v8 <= 4 || v8 == 18 )
        goto LABEL_12;
      if ( v8 == 19 )
      {
LABEL_11:
        XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
        goto LABEL_13;
      }
      if ( (unsigned int)(v8 - 20) > 1 )
        goto LABEL_13;
    }
LABEL_12:
    v5 = 0;
    *((_BYTE *)this + 963) = 1;
    *v4 = 1;
    v11 = -2147467260;
    StartWindowTelemetry::StartRunningWithoutCortana<long>(&v11, a2, a3);
  }
LABEL_13:
  if ( XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    *((_QWORD *)this + 122) = 0LL;
    PostCortanaVisibility(0, 0LL);
  }
  if ( v5 )
  {
    if ( XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this + 24))
      && *v4 <= 0x11
      && _bittest(&v6, *v4) )
    {
      *v4 = 16;
      if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 128LL))(*((_QWORD *)this + 10)) < 0 )
      {
        XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
        goto LABEL_26;
      }
LABEL_24:
      StartWindowTelemetry::StartStayedUpWhenCortanaCrashed();
      goto LABEL_26;
    }
    if ( XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this + 24)) )
    {
      StartWindowTelemetry::CortanaViewDestroyedWhileVisible();
    }
    else if ( *v4 == 16 )
    {
      goto LABEL_24;
    }
    *v4 = 0;
  }
LABEL_26:
  v10 = 0;
  StartWindowTelemetry::OnCortanaDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v8,
    v4);
  return 0LL;
}

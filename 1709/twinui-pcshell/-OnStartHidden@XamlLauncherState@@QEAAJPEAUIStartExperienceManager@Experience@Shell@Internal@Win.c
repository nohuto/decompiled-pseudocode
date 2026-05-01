/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x18018707C (-LauncherClosed@CommonStartTelemetry@@SAXXZ.c)
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E058 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rbx
  int v5; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v6; // [rsp+30h] [rbp-18h]
  char v7; // [rsp+38h] [rbp-10h]

  v3 = (_DWORD *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v6 = this;
  v7 = 1;
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 16) + 32LL))(
    *((_QWORD *)this + 16),
    a2,
    a3);
  if ( *v3 == 9 )
  {
    *v3 = 10;
    goto LABEL_9;
  }
  if ( *v3 == 11 )
    goto LABEL_7;
  if ( *v3 != 14 )
  {
    if ( *v3 != 17 )
      goto LABEL_9;
LABEL_7:
    *v3 = 0;
    goto LABEL_9;
  }
  *v3 = 7;
LABEL_9:
  CommonStartTelemetry::LauncherClosed();
  v7 = 0;
  StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v5,
    v3);
  return 0LL;
}

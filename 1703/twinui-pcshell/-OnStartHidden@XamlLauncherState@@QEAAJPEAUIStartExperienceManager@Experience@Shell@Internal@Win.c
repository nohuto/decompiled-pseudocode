/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180156C00
 * Callers:
 *     <none>
 * Callees:
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x180152C04 (-LauncherClosed@CommonStartTelemetry@@SAXXZ.c)
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159ED8 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+48h] [rbp-10h]

  LODWORD(v6) = *((_DWORD *)this + 14);
  *((_QWORD *)&v6 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v7, &v6);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 32LL))(*((_QWORD *)this + 15));
  v4 = *((_DWORD *)this + 14);
  switch ( v4 )
  {
    case 9:
      *((_DWORD *)this + 14) = 10;
      break;
    case 11:
      goto LABEL_7;
    case 14:
      *((_DWORD *)this + 14) = 7;
      break;
    case 17:
LABEL_7:
      *((_DWORD *)this + 14) = 0;
      break;
  }
  CommonStartTelemetry::LauncherClosed();
  if ( v9 )
  {
    v9 = 0;
    StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v7,
      v8 + 56);
  }
  return 0LL;
}

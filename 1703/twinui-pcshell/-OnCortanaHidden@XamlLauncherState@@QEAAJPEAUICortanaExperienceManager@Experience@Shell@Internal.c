/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157690
 * Callers:
 *     <none>
 * Callees:
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x18015188C (-PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A2C0 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v3; // eax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  char v9; // [rsp+40h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  *((_QWORD *)&v6 + 1) = this;
  LODWORD(v6) = v3;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v7, &v6);
  *((_QWORD *)this + 120) = 0LL;
  PostCortanaVisibility(0, 0LL);
  if ( *((_DWORD *)this + 14) == 8 )
  {
LABEL_4:
    *((_DWORD *)this + 14) = 0;
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 14) != 9 )
  {
    if ( *((_DWORD *)this + 14) != 10 )
      goto LABEL_5;
    goto LABEL_4;
  }
  *((_DWORD *)this + 14) = 11;
LABEL_5:
  if ( v9 )
  {
    v9 = 0;
    StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v7,
      v8 + 56);
  }
  return 0LL;
}

/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x180185B4C (-PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E440 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  *((_QWORD *)this + 122) = 0LL;
  v3 = (_DWORD *)((char *)this + 64);
  v4 = *((_DWORD *)this + 16);
  v7 = this;
  v6 = v4;
  PostCortanaVisibility(0, 0LL);
  switch ( *v3 )
  {
    case 8:
      goto LABEL_4;
    case 9:
      *v3 = 11;
      break;
    case 0xA:
LABEL_4:
      *v3 = 0;
      break;
  }
  v8 = 0;
  StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v6,
    v3);
  return 0LL;
}

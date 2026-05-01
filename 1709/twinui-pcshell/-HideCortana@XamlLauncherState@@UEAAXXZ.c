/*
 * XREFs of ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x180189C80
 * Callers:
 *     <none>
 * Callees:
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018D974 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::HideCortana(XamlLauncherState *this)
{
  char *v1; // rbx
  int v2; // [rsp+28h] [rbp-20h] BYREF
  char *v3; // [rsp+30h] [rbp-18h]
  char v4; // [rsp+38h] [rbp-10h]

  v2 = *((_DWORD *)this + 10);
  v1 = (char *)this - 24;
  v3 = (char *)this - 24;
  v4 = 1;
  if ( v2 == 7 )
  {
    *((_DWORD *)this + 10) = 8;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 88LL))(*((_QWORD *)this + 8));
  }
  v4 = 0;
  StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v2,
    v1 + 64);
}

/*
 * XREFs of ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x1801558E0
 * Callers:
 *     <none>
 * Callees:
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159738 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::HideCortana(XamlLauncherState *this)
{
  __int64 v1; // r9
  int v2; // r8d
  __int128 v3; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v4[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  char v6; // [rsp+48h] [rbp-10h]

  LODWORD(v3) = *((_DWORD *)this + 10);
  *((_QWORD *)&v3 + 1) = (char *)this - 16;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v4, &v3);
  if ( v2 == 7 )
  {
    *(_DWORD *)(v1 + 40) = 8;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 64) + 88LL))(*(_QWORD *)(v1 + 64));
  }
  if ( v6 )
  {
    v6 = 0;
    StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v4,
      v5 + 56);
  }
}

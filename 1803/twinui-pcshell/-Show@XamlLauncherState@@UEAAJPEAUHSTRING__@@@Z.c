/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180230BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180078E50 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180184F2C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18022D158 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18022DFD8 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+28h] [rbp-20h] BYREF
  char *v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 936) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  *(_WORD *)((char *)this + 931) = 0;
  v8 = *((_DWORD *)this + 8);
  v9 = (char *)this - 32;
  v10 = 1;
  if ( !v8 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *((_BYTE *)this + 933) = 0;
    *((_DWORD *)this + 8) = 6;
    v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 848LL;
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  if ( v8 == 5 )
  {
    v5 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 854LL;
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  if ( v8 <= 5 )
    goto LABEL_25;
  if ( v8 <= 7 )
    goto LABEL_18;
  if ( v8 <= 11 )
    goto LABEL_25;
  if ( v8 <= 14 )
  {
LABEL_18:
    v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 874LL;
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  if ( v8 != 16 )
    goto LABEL_25;
  XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
  *((_DWORD *)this + 8) = 17;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 7LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 8) = 6;
    v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 864LL;
      goto LABEL_24;
    }
LABEL_25:
    v6 = 0;
    goto LABEL_26;
  }
  v7 = 862LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v5);
LABEL_26:
  v10 = 0;
  StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v8,
    (int *)this + 8);
  return v6;
}

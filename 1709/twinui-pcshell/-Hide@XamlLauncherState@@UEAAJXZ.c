/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x18018A050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018DB04 (--$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  char *v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  int v5; // [rsp+28h] [rbp-20h] BYREF
  char *v6; // [rsp+30h] [rbp-18h]
  char v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (char *)this - 32;
  if ( *((_BYTE *)this + 929) || v1[962] )
    return 2147942487LL;
  v5 = *((_DWORD *)this + 8);
  v6 = (char *)this - 32;
  v7 = 1;
  if ( v5 == 7
    && (*((_DWORD *)this + 8) = 8,
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7)),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x391,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v2);
  }
  else
  {
    v3 = 0;
  }
  v7 = 0;
  StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v5,
    v1 + 64);
  return v3;
}

/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180155CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801598C8 (--$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  __int64 v2; // r9
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 929) )
    return 2147942487LL;
  LODWORD(v6) = *((_DWORD *)this + 8);
  *((_QWORD *)&v6 + 1) = (char *)this - 24;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v7, &v6);
  if ( v3 == 7
    && (*(_DWORD *)(v2 + 32) = 8,
        v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 56) + 88LL))(*(_QWORD *)(v2 + 56)),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x381,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  if ( v9 )
  {
    v9 = 0;
    StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v7,
      v8 + 56);
  }
  return v5;
}

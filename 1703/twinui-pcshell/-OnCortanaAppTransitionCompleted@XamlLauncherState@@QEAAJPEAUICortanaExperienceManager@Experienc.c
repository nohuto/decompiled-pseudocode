/*
 * XREFs of ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180158110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A8C4 (--$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTel.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaAppTransitionCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  __int64 v3; // r9
  int v4; // r8d
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  LODWORD(v8) = *((_DWORD *)this + 14);
  *((_QWORD *)&v8 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v9, &v8);
  if ( v4 == 13
    && (*(_DWORD *)(v3 + 56) = 14,
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 72) + 64LL))(*(_QWORD *)(v3 + 72), 7LL),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x85D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  if ( v11 )
  {
    v11 = 0;
    StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v9,
      v10 + 56);
  }
  return v6;
}

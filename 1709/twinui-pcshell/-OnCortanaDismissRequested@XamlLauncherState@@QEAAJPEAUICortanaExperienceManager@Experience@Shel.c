/*
 * XREFs of ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E65C (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDismissRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_DWORD *)((char *)this + 64);
  v9 = *((_DWORD *)this + 16);
  v10 = this;
  v11 = 1;
  if ( v9 == 5 )
  {
    (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 11) + 96LL))(
      *((_QWORD *)this + 11),
      a2,
      a3);
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  if ( v9 != 7 )
    goto LABEL_8;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IInspectable *))(**((_QWORD **)this + 12) + 24LL))(
         *((_QWORD *)this + 12),
         3LL,
         a3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x74A,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  *v4 = 8;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_8;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x74C,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v6);
LABEL_9:
  v11 = 0;
  StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v9,
    v4);
  return v7;
}

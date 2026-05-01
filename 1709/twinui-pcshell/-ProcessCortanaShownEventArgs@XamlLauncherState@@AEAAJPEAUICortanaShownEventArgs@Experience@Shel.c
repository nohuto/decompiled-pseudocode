/*
 * XREFs of ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18018BA78
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18018B6F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::ProcessCortanaShownEventArgs(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  HMONITOR v6; // rax
  float v7; // [rsp+20h] [rbp-38h] BYREF
  float v8; // [rsp+24h] [rbp-34h]
  float v9; // [rsp+28h] [rbp-30h]
  float v10; // [rsp+2Ch] [rbp-2Ch]
  RECT rc; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *, float *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    rc.left = (int)v7;
    rc.top = (int)v8;
    rc.right = (int)(float)(v9 + v7);
    rc.bottom = (int)(float)(v10 + v8);
    v6 = MonitorFromRect(&rc, 0);
    *((_QWORD *)this + 122) = v6;
    if ( !v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6B4,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)0x8000FFFFLL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6AB,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}

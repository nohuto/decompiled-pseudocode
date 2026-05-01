/*
 * XREFs of ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180079360
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800794C0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::ProcessCortanaShownEventArgs(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  HMONITOR v5; // rax
  int v7; // [rsp+20h] [rbp-38h] BYREF
  float v8; // [rsp+24h] [rbp-34h]
  float v9; // [rsp+28h] [rbp-30h]
  float v10; // [rsp+2Ch] [rbp-2Ch]
  RECT rc; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6AB,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3,
      v7);
    return v4;
  }
  else
  {
    rc.left = (int)*(float *)&v7;
    rc.top = (int)v8;
    rc.right = (int)(float)(v9 + *(float *)&v7);
    rc.bottom = (int)(float)(v10 + v8);
    v5 = MonitorFromRect(&rc, 0);
    *((_QWORD *)this + 122) = v5;
    if ( !v5 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6B4,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)0x8000FFFFLL,
        v7);
    return 0LL;
  }
}

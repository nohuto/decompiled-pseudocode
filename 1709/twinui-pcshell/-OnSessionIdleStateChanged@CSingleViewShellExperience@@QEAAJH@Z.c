/*
 * XREFs of ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1801CFD88
 * Callers:
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1801DD24C (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 *     SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged @ 0x1801DD8C0 (SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___--OnIdleStateChanged.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x1801D3748 (--$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801DAD70 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnSessionIdleStateChanged(CSingleViewShellExperience *this, int a2)
{
  _BYTE *v2; // rdi
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 53;
  *((_BYTE *)this + 53) = a2 != 0;
  SingleViewExperienceTelemetry::SessionIdleState<bool &>((char *)this + 53);
  if ( *((_QWORD *)this + 3) )
  {
    LOBYTE(v5) = *v2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           this,
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      if ( a2 )
      {
        v8 = *((_DWORD *)this + 19);
        if ( v8 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 336LL))(v7, 1LL);
          v10 = v9;
          if ( v9 >= 0 )
          {
            *((_DWORD *)this + 19) = 1;
            v10 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x63,
              (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
              (const char *)(unsigned int)v9);
          }
          if ( v10 < 0 )
          {
            v11 = (unsigned int)v10;
            v12 = 165LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v12,
              (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
              (const char *)v11);
            return 0LL;
          }
          *((_DWORD *)this + 18) = v8;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 18) )
        {
          v13 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
                  (char *)this + 72,
                  *((_QWORD *)this + 3));
          if ( v13 >= 0 )
          {
            *((_DWORD *)this + 18) = 0;
            return 0LL;
          }
          v11 = (unsigned int)v13;
          v12 = 188LL;
          goto LABEL_17;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)0x8007139FLL);
      }
    }
  }
  return 0LL;
}

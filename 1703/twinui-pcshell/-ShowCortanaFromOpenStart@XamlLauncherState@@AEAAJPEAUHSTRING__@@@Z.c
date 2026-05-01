/*
 * XREFs of ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180157BB0
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180155AA0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180155D70 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801567B0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180157230 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157E10 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800C211C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A66C (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowCortanaFromOpenStart(XamlLauncherState *this, HSTRING a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
  bool v9; // si
  HSTRING *v10; // rbx
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  char v15; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v17; // [rsp+80h] [rbp+30h] BYREF
  char v18; // [rsp+90h] [rbp+40h] BYREF
  char v19; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v12) = *((_DWORD *)this + 14);
  *((_QWORD *)&v12 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v13, &v12);
  v17 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 120LL))(*((_QWORD *)this + 9), &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1958LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_35;
  }
  v9 = 0;
  if ( *((_BYTE *)this + 959)
    || (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 400LL))(*((_QWORD *)this + 10), &v19) >= 0
    && v19 )
  {
    if ( CortanaHelpers::AllowCortanaAboveLock() )
    {
      v7 = *((_DWORD *)this + 14);
      if ( v7 <= 0x11 )
      {
        v8 = 227872;
        if ( _bittest(&v8, v7) )
          v9 = 1;
      }
    }
  }
  if ( !v17 && !v9 )
  {
    v18 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10), &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1975LL;
      goto LABEL_33;
    }
    if ( v18 )
    {
      if ( a2 )
      {
        v10 = (HSTRING *)((char *)this + 976);
        if ( a2 != *((HSTRING *)this + 122) )
        {
          WindowsDeleteString(*v10);
          *v10 = 0LL;
          v4 = WindowsDuplicateString(a2, (HSTRING *)this + 122);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 1981LL;
            goto LABEL_33;
          }
        }
      }
      *((_DWORD *)this + 14) = 12;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10), 2LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1984LL;
        goto LABEL_33;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 112LL))(*((_QWORD *)this + 9));
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1985LL;
        goto LABEL_33;
      }
    }
    else
    {
      *((_DWORD *)this + 14) = 14;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 7LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1992LL;
        goto LABEL_33;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 10) + 56LL))(
             *((_QWORD *)this + 10),
             a2,
             1LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1994LL;
        goto LABEL_33;
      }
    }
    goto LABEL_31;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 10) + 56LL))(
         *((_QWORD *)this + 10),
         a2,
         1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1970LL;
    goto LABEL_33;
  }
  if ( !v9 )
  {
LABEL_31:
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 104LL))(*((_QWORD *)this + 10));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 2001LL;
      goto LABEL_33;
    }
  }
  v5 = 0;
LABEL_35:
  if ( v15 )
  {
    v15 = 0;
    StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v13,
      v14 + 56);
  }
  return v5;
}

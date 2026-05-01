/*
 * XREFs of ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CAEFC
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800CB620 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::SetupExperienceFrame(CVirtualTouchpadExperienceManager *this)
{
  _DWORD *v2; // rbx
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int ScaleFactorForWindow; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v25[4]; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+54h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v24[1] = -2LL;
  v2 = (_DWORD *)((char *)this + 352);
  if ( *((_DWORD *)this + 88) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    if ( v3 < 0 )
    {
      v4 = 268LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    *v2 = 0;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 42) + 40LL))(
         *((_QWORD *)this + 42),
         ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         v2);
  if ( v3 < 0 )
  {
    v4 = 272LL;
    goto LABEL_4;
  }
  v5 = *((_QWORD *)this + 42);
  v6 = (_QWORD *)((char *)this + 344);
  v7 = *((_QWORD *)this + 43);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, (char *)this + 344);
  if ( v3 < 0 )
  {
    v4 = 273LL;
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 48LL))(*v6, *((unsigned int *)this + 29));
  if ( v3 < 0 )
  {
    v4 = 274LL;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 120LL))(*v6, 1LL);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 32LL))(*v6, &v20);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v22 = 0LL;
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 144LL))(v20, &v22);
    v3 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      v21 = *((_QWORD *)this + 33);
      ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 120LL))(v20, v25);
      v3 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow >= 0 )
      {
        ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, v24);
        v3 = ScaleFactorForWindow;
        if ( ScaleFactorForWindow >= 0 )
        {
          ScaleFactorForWindow = GetScaleFactorForWindow(v24[0], &v23);
          v3 = ScaleFactorForWindow;
          if ( ScaleFactorForWindow >= 0 )
          {
            v12 = v26;
            *((_DWORD *)this + 70) -= v26;
            HIDWORD(v21) -= 100 * v12 / v23;
            v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 72LL))(*v6, &v21);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x129,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v13);
            v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 80LL))(*v6, &v21);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x12A,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v14);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 88LL))(v22, 255LL, 4LL);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x12C,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v15);
            ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 112LL))(
                                     v20,
                                     127LL,
                                     33LL);
            v3 = ScaleFactorForWindow;
            if ( ScaleFactorForWindow >= 0 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v20 + 72LL))(
                      v20,
                      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
                      0LL);
              if ( v16 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x12E,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  (const char *)(unsigned int)v16);
              v3 = 0;
              goto LABEL_38;
            }
            v11 = 301LL;
          }
          else
          {
            v11 = 293LL;
          }
        }
        else
        {
          v11 = 291LL;
        }
      }
      else
      {
        v11 = 289LL;
      }
    }
    else
    {
      v11 = 282LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_38:
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x117,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_40:
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v3;
}

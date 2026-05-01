/*
 * XREFs of ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180182A84
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180182E20 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::SetupExperienceFrame(CVirtualTouchpadExperienceManager *this)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int v4; // r14d
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int ScaleFactorForWindow; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v26[4]; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+54h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v25[1] = -2LL;
  v2 = (_DWORD *)((char *)this + 352);
  if ( *((_DWORD *)this + 88) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    *v2 = 0;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 42) + 40LL))(
         *((_QWORD *)this + 42),
         ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         v2);
  if ( v6 >= 0 )
  {
    v8 = *((_QWORD *)this + 42);
    v9 = (_QWORD *)((char *)this + 344);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 344);
    if ( v6 < 0 )
    {
      v7 = 273LL;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 48LL))(*v9, *((unsigned int *)this + 29));
    if ( v6 < 0 )
    {
      v7 = 274LL;
      goto LABEL_7;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 120LL))(*v9, 1LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        276LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v21 = 0LL;
    v11 = *v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v21);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x117,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      return (unsigned int)v6;
    }
    v23 = 0LL;
    v13 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 144LL))(v13, &v23);
    v6 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      v22 = *((_QWORD *)this + 33);
      ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 120LL))(v21, v26);
      v6 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow >= 0 )
      {
        ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(v21, v25);
        v6 = ScaleFactorForWindow;
        if ( ScaleFactorForWindow >= 0 )
        {
          ScaleFactorForWindow = GetScaleFactorForWindow(v25[0], &v24);
          v6 = ScaleFactorForWindow;
          if ( ScaleFactorForWindow >= 0 )
          {
            v16 = v27;
            *((_DWORD *)this + 70) -= v27;
            HIDWORD(v22) -= 100 * v16 / v24;
            v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v9 + 72LL))(*v9, &v22);
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                297LL,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v17);
            v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v9 + 80LL))(*v9, &v22);
            if ( v18 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                298LL,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v18);
            v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 104LL))(v23, 255LL, 4LL);
            if ( v19 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                300LL,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v19);
            ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 112LL))(
                                     v21,
                                     255LL,
                                     33LL);
            v6 = ScaleFactorForWindow;
            if ( ScaleFactorForWindow >= 0 )
            {
              v20 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v21 + 72LL))(
                      v21,
                      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
                      0LL);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  302LL,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  (const char *)(unsigned int)v20);
              v6 = 0;
              goto LABEL_36;
            }
            v15 = 301LL;
          }
          else
          {
            v15 = 293LL;
          }
        }
        else
        {
          v15 = 291LL;
        }
      }
      else
      {
        v15 = 289LL;
      }
    }
    else
    {
      v15 = 282LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_36:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    goto LABEL_37;
  }
  v7 = 272LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

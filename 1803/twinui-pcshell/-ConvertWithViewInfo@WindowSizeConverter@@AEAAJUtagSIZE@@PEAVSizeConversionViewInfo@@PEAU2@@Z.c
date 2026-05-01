/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180025CE0
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180025AB0 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x1802B6510 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1802B65D0 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180026024 (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180026130 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     ?GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x180026260 (-GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  LONG cx; // esi
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // eax
  ApplicationViewTitlebarConfiguration *v13; // rdi
  __int64 (__fastcall *v14)(ApplicationViewTitlebarConfiguration *__hidden, enum TITLE_BAR_SHOW_OPTIONS *, enum TITLE_BAR_SHOW_OPTIONS *); // rax
  int ShowOptions; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HWND v20; // r14
  int v21; // r15d
  const char *v22; // r9
  int v23; // r9d
  __int64 v24; // rcx
  void (__fastcall *v25)(ApplicationViewTitlebarConfiguration *); // rax
  __int64 v26; // rcx
  __int64 v28; // rdx
  int LastError; // eax
  int v30[2]; // [rsp+20h] [rbp-89h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-81h] BYREF
  unsigned int v32; // [rsp+2Ch] [rbp-7Dh] BYREF
  __int64 v33; // [rsp+30h] [rbp-79h] BYREF
  __int128 v34; // [rsp+40h] [rbp-69h] BYREF
  int **v35; // [rsp+50h] [rbp-59h]
  int *v36; // [rsp+60h] [rbp-49h] BYREF
  HWND hWnd; // [rsp+68h] [rbp-41h] BYREF
  struct tagSIZE v38; // [rsp+70h] [rbp-39h]
  __int64 v39; // [rsp+78h] [rbp-31h]
  __int64 v40; // [rsp+80h] [rbp-29h]
  struct tagRECT Rect; // [rsp+88h] [rbp-21h] BYREF
  struct tagRECT v42; // [rsp+98h] [rbp-11h] BYREF
  __int128 v43; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v39 = -2LL;
  cx = a2.cx;
  v38 = a2;
  v8 = *((_QWORD *)a3 + 2);
  v40 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)&Rect.left = v8;
  *(_QWORD *)&v34 = &Rect;
  *((_QWORD *)&v34 + 1) = this;
  v9 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(&v34);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9,
      v30[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)v10,
      v30[0]);
    goto LABEL_26;
  }
  *(_QWORD *)v30 = 0LL;
  v36 = v30;
  *(_QWORD *)&Rect.left = v8;
  *(_QWORD *)&v34 = this;
  *((_QWORD *)&v34 + 1) = &Rect;
  v35 = &v36;
  v11 = wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___(&v34);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v11,
      v30[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)v10,
      v30[0]);
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, bool))(**(_QWORD **)v30 + 112LL))(
          *(_QWORD *)v30,
          255LL,
          (*((_BYTE *)a3 + 24) & 1) != 0);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v12,
      v30[0]);
    goto LABEL_24;
  }
  v13 = (ApplicationViewTitlebarConfiguration *)*((_QWORD *)a3 + 4);
  v36 = (int *)v13;
  if ( v13 )
    (*(void (__fastcall **)(ApplicationViewTitlebarConfiguration *))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *__hidden, enum TITLE_BAR_SHOW_OPTIONS *, enum TITLE_BAR_SHOW_OPTIONS *))(*(_QWORD *)v13 + 48LL);
  if ( v14 == ApplicationViewTitlebarConfiguration::GetShowOptions )
    ShowOptions = ApplicationViewTitlebarConfiguration::GetShowOptions(
                    v13,
                    (enum TITLE_BAR_SHOW_OPTIONS *)&v32,
                    (enum TITLE_BAR_SHOW_OPTIONS *)&v31);
  else
    ShowOptions = v14(v13, (enum TITLE_BAR_SHOW_OPTIONS *)&v32, (enum TITLE_BAR_SHOW_OPTIONS *)&v31);
  v10 = ShowOptions;
  if ( ShowOptions >= 0 )
  {
    v33 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v30 + 144LL))(*(_QWORD *)v30, &v33);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25C,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v16,
        v30[0]);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v33 + 64LL))(v33, v32, v31);
      v10 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25D,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
          (const char *)(unsigned int)v17,
          v30[0]);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**(_QWORD **)v30 + 24LL))(*(_QWORD *)v30, &hWnd);
        v10 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x260,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
            (const char *)(unsigned int)v18,
            v30[0]);
        }
        else
        {
          v43 = 0uLL;
          if ( (*((_BYTE *)a3 + 24) & 2) != 0
            || (v19 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v30 + 120LL))(*(_QWORD *)v30, &v43),
                v10 = v19,
                v19 >= 0) )
          {
            v34 = v43;
            v20 = hWnd;
            v21 = *((_DWORD *)a3 + 10);
            *a4 = 0LL;
            Rect = 0LL;
            if ( GetWindowRect(v20, &Rect) )
            {
              v42 = 0LL;
              if ( GetClientRect(v20, &v42) )
              {
                v23 = v42.top + Rect.bottom + DWORD1(v34) - HIDWORD(v34) - Rect.top - v42.bottom;
                a4->cx = v42.left + Rect.right + v34 - DWORD2(v34) - Rect.left - v42.right + v21 * cx / 100;
                a4->cy = v23 + v21 * v38.cy / 100;
LABEL_19:
                v10 = 0;
                goto LABEL_20;
              }
              v28 = 630LL;
            }
            else
            {
              v28 = 624LL;
            }
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)v28,
                          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                          v22);
            v10 = LastError;
            if ( LastError >= 0 )
              goto LABEL_19;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x267,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
              (const char *)(unsigned int)LastError,
              v30[0]);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x265,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
              (const char *)(unsigned int)v19,
              v30[0]);
          }
        }
      }
    }
LABEL_20:
    v24 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x259,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)ShowOptions,
    v30[0]);
LABEL_22:
  v25 = *(void (__fastcall **)(ApplicationViewTitlebarConfiguration *))(*(_QWORD *)v13 + 16LL);
  if ( (char *)v25 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v13);
  else
    v25(v13);
LABEL_24:
  v26 = *(_QWORD *)v30;
  if ( *(_QWORD *)v30 )
  {
    *(_QWORD *)v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
LABEL_26:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v10;
}

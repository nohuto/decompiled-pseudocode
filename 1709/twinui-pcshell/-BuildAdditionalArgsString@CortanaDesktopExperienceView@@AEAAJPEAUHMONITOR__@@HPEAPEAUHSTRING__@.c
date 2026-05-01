/*
 * XREFs of ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800D77C8
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800D8054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800D858C (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800D93D0 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB7C0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CortanaDesktopExperienceView::BuildAdditionalArgsString(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        HMONITOR a3,
        HSTRING *a4)
{
  bool v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // r9d
  UINT32 v14; // edx
  HRESULT v15; // eax
  HRESULT v16; // eax
  HRESULT v17; // eax
  unsigned int v18; // ebx
  int BOOL; // eax
  int v20; // ecx
  const wchar_t *v21; // rax
  __int64 v22; // rbx
  HRESULT v23; // eax
  int StuckPlace; // ebx
  const wchar_t *v25; // rax
  __int64 v26; // rbx
  HRESULT v27; // eax
  HRESULT v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // eax
  UINT32 v31; // edx
  HRESULT v32; // eax
  HRESULT v33; // eax
  HRESULT v34; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v36; // rdx
  const wchar_t *v37; // rax
  __int64 v38; // rbx
  int v39; // eax
  int v40; // ecx
  const wchar_t *v41; // rax
  __int64 v42; // rbx
  HRESULT v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  int v46; // ecx
  const wchar_t *v47; // rax
  __int64 v48; // rax
  int v50[2]; // [rsp+20h] [rbp-E0h] BYREF
  bool v51; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v52; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v53; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string2; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v55; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v56; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v57; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING newString; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  HSTRING *v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  HSTRING string; // [rsp+98h] [rbp-68h] BYREF
  HSTRING_HEADER v64; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string1; // [rsp+B8h] [rbp-48h] BYREF
  WCHAR sourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v67[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v61 = -2LL;
  v60 = a4;
  v6 = 0;
  *a4 = 0LL;
  newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, a3);
  memset(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  v10 = -1;
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException(v9 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v11 = v9;
  v12 = v9 + 1;
  v13 = -1;
  if ( v11 + 1 >= v11 )
    v13 = v11 + 1;
  if ( v12 < v11 )
  {
    Microsoft::WRL::Details::RaiseException(v12 < v11 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v14 = v13 - 1;
  if ( v11 < v13 )
    v14 = v11;
  v15 = WindowsCreateStringReference(sourceString, v14, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    __debugbreak();
  }
  string1 = 0LL;
  v16 = WindowsCreateStringReference(L"&SpeechTextInputHeight=", 0x17u, &v64, &string1);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
    __debugbreak();
  }
  WindowsDeleteString(newString);
  newString = 0LL;
  v17 = WindowsConcatString(string1, string, &newString);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v56 = 0LL;
    BOOL = SHRegGetBOOL(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"ColorPrevalence",
             v50);
    v20 = v50[0];
    if ( BOOL < 0 )
      v20 = 0;
    v21 = L"&ColorPrevalenceEnabled=false";
    if ( v20 )
      v21 = (const wchar_t *)L"&ColorPrevalenceEnabled=true";
    *(_QWORD *)v50 = v21;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)v50);
    WindowsDeleteString(v56);
    v56 = 0LL;
    v23 = WindowsConcatString(newString, *(HSTRING *)(v22 + 24), &v56);
    v18 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5E4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v23);
LABEL_80:
      WindowsDeleteString(v56);
      v56 = 0LL;
      goto LABEL_81;
    }
    v55 = 0LL;
    StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)v50);
    if ( StuckPlace >= 0 )
    {
      v6 = v50[0] == 3;
      StuckPlace = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6E5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
    }
    if ( StuckPlace < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
    v25 = L"&PersonaOnlySupported=false";
    if ( v6 )
      v25 = (const wchar_t *)L"&PersonaOnlySupported=true";
    *(_QWORD *)v50 = v25;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)v50);
    WindowsDeleteString(v55);
    v55 = 0LL;
    v27 = WindowsConcatString(v56, *(HSTRING *)(v26 + 24), &v55);
    v18 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5E9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v27);
LABEL_79:
      WindowsDeleteString(v55);
      v55 = 0LL;
      goto LABEL_80;
    }
    string2 = 0LL;
    v28 = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v59);
    v18 = v28;
    if ( v28 < 0 )
    {
      v29 = 1518LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v28);
LABEL_78:
      WindowsDeleteString(string2);
      string2 = 0LL;
      goto LABEL_79;
    }
    memset(v67, 0, 0x44uLL);
    _o__itow_s(v59, v67, 34LL, 10LL);
    do
      ++v8;
    while ( v67[v8] );
    if ( v8 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException(v8 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
      __debugbreak();
    }
    v30 = v8 + 1;
    if ( (int)v8 + 1 >= (unsigned int)v8 )
      v10 = v8 + 1;
    if ( v30 < (unsigned int)v8 )
    {
      Microsoft::WRL::Details::RaiseException(v30 < (unsigned int)v8 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
      __debugbreak();
    }
    v31 = v10 - 1;
    if ( (unsigned int)v8 < v10 )
      v31 = v8;
    v32 = WindowsCreateStringReference(v67, v31, &hstringHeader, &string);
    if ( v32 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32);
      __debugbreak();
    }
    string1 = 0LL;
    v33 = WindowsCreateStringReference(L"&TaskbarOrientation=", 0x14u, &v64, &string1);
    if ( v33 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
      __debugbreak();
    }
    WindowsDeleteString(string2);
    string2 = 0LL;
    v28 = WindowsConcatString(string1, string, &string2);
    v18 = v28;
    if ( v28 < 0 )
    {
      v29 = 1521LL;
      goto LABEL_51;
    }
    v57 = 0LL;
    WindowsDeleteString(0LL);
    v57 = 0LL;
    v34 = WindowsConcatString(v55, string2, &v57);
    v18 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5F4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v34);
LABEL_77:
      WindowsDeleteString(v57);
      v57 = 0LL;
      goto LABEL_78;
    }
    v53 = 0LL;
    IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, a2, &v51);
    v18 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v36 = 1529LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v36,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_76:
      WindowsDeleteString(v53);
      v53 = 0LL;
      goto LABEL_77;
    }
    v37 = L"&SearchBoxInTaskbar=false";
    if ( v51 )
      v37 = (const wchar_t *)L"&SearchBoxInTaskbar=true";
    *(_QWORD *)v50 = v37;
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)v50);
    WindowsDeleteString(v53);
    v53 = 0LL;
    IsTraySearchBoxVisible = WindowsConcatString(v57, *(HSTRING *)(v38 + 24), &v53);
    v18 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v36 = 1531LL;
      goto LABEL_60;
    }
    v52 = 0LL;
    v39 = SHRegGetBOOL(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
            L"AppsUseLightTheme",
            v50);
    v40 = v50[0];
    if ( v39 < 0 )
      v40 = 1;
    v41 = L"&AppsUseLightTheme=false";
    if ( v40 )
      v41 = L"&AppsUseLightTheme=true";
    *(_QWORD *)v50 = v41;
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)v50);
    WindowsDeleteString(v52);
    v52 = 0LL;
    v43 = WindowsConcatString(v53, *(HSTRING *)(v42 + 24), &v52);
    v18 = v43;
    if ( v43 >= 0 )
    {
      v45 = SHRegGetBOOL(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
              L"HideFileExt",
              v50);
      v46 = v50[0];
      if ( v45 < 0 )
        v46 = 0;
      v47 = L"&HideFileExtensions=false";
      if ( v46 )
        v47 = (const wchar_t *)L"&HideFileExtensions=true";
      *(_QWORD *)v50 = v47;
      v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)v50);
      v43 = WindowsConcatString(v52, *(HSTRING *)(v48 + 24), v60);
      v18 = v43;
      if ( v43 >= 0 )
      {
        v18 = 0;
        goto LABEL_75;
      }
      v44 = 1540LL;
    }
    else
    {
      v44 = 1536LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v44,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v43);
LABEL_75:
    WindowsDeleteString(v52);
    v52 = 0LL;
    goto LABEL_76;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5DF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v17);
LABEL_81:
  WindowsDeleteString(newString);
  return v18;
}

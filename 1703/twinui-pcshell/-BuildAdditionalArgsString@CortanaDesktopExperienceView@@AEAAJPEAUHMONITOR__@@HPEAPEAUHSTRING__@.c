/*
 * XREFs of ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800C5948
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C5F30 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x18009EF5C (--$-0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800C642C (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800C71D8 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C3DC (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::BuildAdditionalArgsString(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        HMONITOR a3,
        HSTRING *a4)
{
  unsigned int v7; // ebx
  HSTRING_HEADER *v8; // rbx
  HRESULT v9; // eax
  HRESULT v10; // eax
  unsigned int v11; // ebx
  int BOOL; // eax
  int v13; // ecx
  const wchar_t *v14; // rax
  HSTRING_HEADER *v15; // rbx
  HRESULT v16; // eax
  bool v17; // si
  int StuckPlace; // eax
  int v19; // ebx
  const wchar_t *v20; // rax
  HSTRING_HEADER *v21; // rbx
  HRESULT v22; // eax
  HRESULT v23; // eax
  __int64 v24; // rdx
  HSTRING_HEADER *v25; // rbx
  HRESULT v26; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v28; // rdx
  const wchar_t *v29; // rax
  HSTRING_HEADER *v30; // rax
  bool v32; // [rsp+20h] [rbp-E0h] BYREF
  int v33[2]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string2; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v35; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v37; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING newString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER v43; // [rsp+88h] [rbp-78h] BYREF
  WCHAR sourceString[40]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v45[40]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v40 = -2LL;
  *a4 = 0LL;
  newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, a3);
  memset(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, sourceString);
  string = 0LL;
  v9 = WindowsCreateStringReference(L"&SpeechTextInputHeight=", 0x17u, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  WindowsDeleteString(newString);
  newString = 0LL;
  v10 = WindowsConcatString(string, (HSTRING)v8[1].Reserved.Reserved1, &newString);
  v11 = v10;
  if ( v10 >= 0 )
  {
    string1 = 0LL;
    BOOL = SHRegGetBOOL(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"ColorPrevalence",
             v33);
    v13 = v33[0];
    if ( BOOL < 0 )
      v13 = 0;
    v14 = L"&ColorPrevalenceEnabled=false";
    if ( v13 )
      v14 = L"&ColorPrevalenceEnabled=true";
    *(_QWORD *)v33 = v14;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)v33);
    WindowsDeleteString(string1);
    string1 = 0LL;
    v16 = WindowsConcatString(newString, (HSTRING)v15[1].Reserved.Reserved1, &string1);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5D0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v16);
LABEL_40:
      WindowsDeleteString(string1);
      string1 = 0LL;
      goto LABEL_41;
    }
    v35 = 0LL;
    v17 = 0;
    StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)v33);
    v19 = StuckPlace;
    if ( StuckPlace >= 0 )
    {
      v17 = v33[0] == 3;
      v19 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6A2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
    }
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6AE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v19);
    v20 = L"&PersonaOnlySupported=false";
    if ( v17 )
      v20 = L"&PersonaOnlySupported=true";
    *(_QWORD *)v33 = v20;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)v33);
    WindowsDeleteString(v35);
    v35 = 0LL;
    v22 = WindowsConcatString(string1, (HSTRING)v21[1].Reserved.Reserved1, &v35);
    v11 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5D5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v22);
LABEL_39:
      WindowsDeleteString(v35);
      v35 = 0LL;
      goto LABEL_40;
    }
    string2 = 0LL;
    v23 = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v39);
    v11 = v23;
    if ( v23 < 0 )
    {
      v24 = 1498LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v23);
LABEL_38:
      WindowsDeleteString(string2);
      string2 = 0LL;
      goto LABEL_39;
    }
    memset(v45, 0, 0x44uLL);
    _o__itow_s(v39, v45, 34LL, 10LL);
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, v45);
    string = 0LL;
    v26 = WindowsCreateStringReference(L"&TaskbarOrientation=", 0x14u, &hstringHeader, &string);
    if ( v26 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
      __debugbreak();
    }
    WindowsDeleteString(string2);
    string2 = 0LL;
    v23 = WindowsConcatString(string, (HSTRING)v25[1].Reserved.Reserved1, &string2);
    v11 = v23;
    if ( v23 < 0 )
    {
      v24 = 1501LL;
      goto LABEL_26;
    }
    v37 = 0LL;
    WindowsDeleteString(0LL);
    v37 = 0LL;
    IsTraySearchBoxVisible = WindowsConcatString(v35, string2, &v37);
    v11 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible >= 0 )
    {
      IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, a2, &v32);
      v11 = IsTraySearchBoxVisible;
      if ( IsTraySearchBoxVisible >= 0 )
      {
        v29 = L"&SearchBoxInTaskbar=false";
        if ( v32 )
          v29 = L"&SearchBoxInTaskbar=true";
        *(_QWORD *)v33 = v29;
        v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)v33);
        IsTraySearchBoxVisible = WindowsConcatString(v37, (HSTRING)v30[1].Reserved.Reserved1, a4);
        v11 = IsTraySearchBoxVisible;
        if ( IsTraySearchBoxVisible >= 0 )
        {
          v11 = 0;
          goto LABEL_37;
        }
        v28 = 1510LL;
      }
      else
      {
        v28 = 1508LL;
      }
    }
    else
    {
      v28 = 1504LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_37:
    WindowsDeleteString(v37);
    v37 = 0LL;
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5CB,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_41:
  WindowsDeleteString(newString);
  return v11;
}

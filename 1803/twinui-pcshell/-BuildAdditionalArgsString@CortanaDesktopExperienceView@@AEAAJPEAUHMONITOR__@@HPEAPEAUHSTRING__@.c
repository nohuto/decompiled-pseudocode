/*
 * XREFs of ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180063DB0
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180063A50 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18001A118 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180062EB8 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800636F8 (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?GetAppsUseLightTheme@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180063904 (-GetAppsUseLightTheme@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetHideFileExtensionsEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800639AC (-GetHideFileExtensionsEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180063D0C (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180095304 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaDesktopExperienceView::BuildAdditionalArgsString(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        ExperienceManagerUtils *a3,
        HSTRING *newString)
{
  unsigned int v7; // ebx
  HSTRING_HEADER *v8; // rbx
  HRESULT v9; // eax
  CortanaDesktopExperienceView *v10; // rcx
  unsigned int v11; // ebx
  char ColorPrevalenceEnabled; // al
  const WCHAR *v13; // rcx
  __int64 v14; // rbx
  HRESULT v15; // eax
  int StuckPlace; // esi
  bool v17; // bl
  const WCHAR *v18; // rax
  __int64 v19; // rbx
  HRESULT v20; // eax
  HRESULT v21; // eax
  HSTRING_HEADER *v22; // rbx
  HRESULT v23; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  const WCHAR *v25; // rax
  __int64 v26; // rbx
  HMONITOR v27; // rax
  HRESULT v28; // eax
  const WCHAR *v29; // rax
  __int64 v30; // rbx
  CortanaDesktopExperienceView *v31; // rcx
  char AppsUseLightTheme; // al
  const WCHAR *v33; // rcx
  __int64 v34; // rbx
  HRESULT v35; // eax
  CortanaDesktopExperienceView *v36; // rcx
  char HideFileExtensionsEnabled; // al
  const WCHAR *v38; // rcx
  __int64 v39; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  int v45; // [rsp+20h] [rbp-E0h] BYREF
  const WCHAR *v46; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v47; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v48; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v49; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string2; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v51; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING newStringa; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v53; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING string; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  HSTRING_HEADER v57; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string1; // [rsp+B8h] [rbp-48h]
  WCHAR sourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v61[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v56 = -2LL;
  *newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, (HMONITOR)a3);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, sourceString);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = WindowsConcatString(string1, (HSTRING)v8[1].Reserved.Reserved1, &string);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v9,
      v45);
    goto LABEL_37;
  }
  newStringa = 0LL;
  ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v10);
  v13 = L"&ColorPrevalenceEnabled=true";
  if ( !ColorPrevalenceEnabled )
    v13 = L"&ColorPrevalenceEnabled=false";
  v46 = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v46);
  WindowsDeleteString(newStringa);
  newStringa = 0LL;
  v15 = WindowsConcatString(string, *(HSTRING *)(v14 + 24), &newStringa);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v15,
      v45);
    goto LABEL_36;
  }
  v51 = 0LL;
  StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v46);
  if ( StuckPlace < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x715,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)StuckPlace,
      v45);
    v17 = 0;
  }
  else
  {
    v17 = (_DWORD)v46 == 3;
    StuckPlace = 0;
  }
  if ( StuckPlace < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x721,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)StuckPlace,
      v45);
  v18 = L"&PersonaOnlySupported=true";
  if ( !v17 )
    v18 = L"&PersonaOnlySupported=false";
  v46 = v18;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v46);
  WindowsDeleteString(v51);
  v51 = 0LL;
  v20 = WindowsConcatString(newStringa, *(HSTRING *)(v19 + 24), &v51);
  v11 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x614,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v20,
      v45);
    goto LABEL_35;
  }
  string2 = 0LL;
  v21 = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v55);
  v11 = v21;
  if ( v21 < 0 )
  {
    v41 = 1561LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v21,
      v45);
    goto LABEL_34;
  }
  memset_0(v61, 0, 0x44uLL);
  _o__itow_s(v55, v61, 34LL, 10LL);
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, v61);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
  WindowsDeleteString(string2);
  string2 = 0LL;
  v21 = WindowsConcatString(string1, (HSTRING)v22[1].Reserved.Reserved1, &string2);
  v11 = v21;
  if ( v21 < 0 )
  {
    v41 = 1564LL;
    goto LABEL_44;
  }
  v53 = 0LL;
  WindowsDeleteString(0LL);
  v53 = 0LL;
  v23 = WindowsConcatString(v51, string2, &v53);
  v11 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v23,
      v45);
    goto LABEL_33;
  }
  v49 = 0LL;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, a2, (bool *)&v45);
  v11 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    v42 = 1572LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible,
      v45);
    goto LABEL_32;
  }
  v25 = L"&SearchBoxInTaskbar=true";
  if ( !(_BYTE)v45 )
    v25 = L"&SearchBoxInTaskbar=false";
  v46 = v25;
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v46);
  WindowsDeleteString(v49);
  v49 = 0LL;
  IsTraySearchBoxVisible = WindowsConcatString(v53, *(HSTRING *)(v26 + 24), &v49);
  v11 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    v42 = 1574LL;
    goto LABEL_48;
  }
  v48 = 0LL;
  v46 = 0LL;
  v27 = MonitorFromPoint(0LL, 1u);
  v28 = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, v27, (bool *)&v45);
  v11 = v28;
  if ( v28 < 0 )
  {
    v43 = 1581LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v28,
      v45);
    goto LABEL_31;
  }
  v29 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
  if ( !(_BYTE)v45 )
    v29 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
  v46 = v29;
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v46);
  WindowsDeleteString(v48);
  v48 = 0LL;
  v28 = WindowsConcatString(v49, *(HSTRING *)(v30 + 24), &v48);
  v11 = v28;
  if ( v28 < 0 )
  {
    v43 = 1583LL;
    goto LABEL_51;
  }
  v47 = 0LL;
  AppsUseLightTheme = CortanaDesktopExperienceView::GetAppsUseLightTheme(v31);
  v33 = L"&AppsUseLightTheme=true";
  if ( !AppsUseLightTheme )
    v33 = L"&AppsUseLightTheme=false";
  v46 = v33;
  v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v46);
  WindowsDeleteString(v47);
  v47 = 0LL;
  v35 = WindowsConcatString(v48, *(HSTRING *)(v34 + 24), &v47);
  v11 = v35;
  if ( v35 < 0 )
  {
    v44 = 1588LL;
LABEL_54:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v35,
      v45);
    goto LABEL_30;
  }
  HideFileExtensionsEnabled = CortanaDesktopExperienceView::GetHideFileExtensionsEnabled(v36);
  v38 = L"&HideFileExtensions=true";
  if ( !HideFileExtensionsEnabled )
    v38 = L"&HideFileExtensions=false";
  v46 = v38;
  v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v46);
  v35 = WindowsConcatString(v47, *(HSTRING *)(v39 + 24), newString);
  v11 = v35;
  if ( v35 < 0 )
  {
    v44 = 1592LL;
    goto LABEL_54;
  }
  v11 = 0;
LABEL_30:
  WindowsDeleteString(v47);
  v47 = 0LL;
LABEL_31:
  WindowsDeleteString(v48);
  v48 = 0LL;
LABEL_32:
  WindowsDeleteString(v49);
  v49 = 0LL;
LABEL_33:
  WindowsDeleteString(v53);
  v53 = 0LL;
LABEL_34:
  WindowsDeleteString(string2);
  string2 = 0LL;
LABEL_35:
  WindowsDeleteString(v51);
  v51 = 0LL;
LABEL_36:
  WindowsDeleteString(newStringa);
  newStringa = 0LL;
LABEL_37:
  WindowsDeleteString(string);
  return v11;
}

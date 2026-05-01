/*
 * XREFs of _lambda_0cfb79e9f82d4b070b46ace9fa651aa3_::operator() @ 0x18009FC58
 * Callers:
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x18009FB50 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005A980 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18009F7BC (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18018329C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0cfb79e9f82d4b070b46ace9fa651aa3_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ebx
  _DWORD *v6; // rax
  HWND ForegroundWindow; // rax
  HMONITOR v8; // rsi
  ImeNotificationExperienceManager *v9; // rcx
  int v10; // eax
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  UINT32 cData[2]; // [rsp+28h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-41h]
  int v17; // [rsp+38h] [rbp-39h]
  int v18; // [rsp+48h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-21h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-9h]
  struct tagMONITORINFO mi; // [rsp+70h] [rbp-1h] BYREF
  HSTRING_HEADER v23; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v21 = -2LL;
  v2 = *a1;
  if ( *(_DWORD *)(v2 + 88) == 2 )
  {
    v3 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(v2 + 48));
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xBF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  v5 = 0;
  v6 = (_DWORD *)a1[1];
  if ( *v6 == 1 || *v6 == 2 )
    v5 = 1041;
  v18 = 18;
  ForegroundWindow = GetForegroundWindow();
  v8 = MonitorFromWindow(ForegroundWindow, 2u);
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v8, &mi) )
  {
    v4 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return v4;
  }
  v10 = ImeNotificationExperienceManager::CalculateScaling(v9, 18, v8, &mi, 1, &v18);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  pv = 0LL;
  v20 = 0uLL;
  v17 = *(_DWORD *)a1[1];
  LODWORD(pData) = v5;
  cData[0] = v18;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
    (__int64)&pv,
    (__int64)L"%s %ld %ld %ld %ld",
    L"Windows.Internal.ShellExperience.ImeStatusNotification",
    18LL,
    *(_QWORD *)cData,
    pData,
    v17);
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&pv);
  v12 = CSingleViewShellExperience::SetArgs((HSTRING *)(*a1 + 48LL), (HSTRING)v11[1].Reserved.Reserved1);
  v4 = v12;
  if ( v12 >= 0 )
  {
    v12 = CSingleViewShellExperience::Show(*a1 + 48LL, 1LL);
    v4 = v12;
    if ( v12 >= 0 )
    {
      if ( hProvider > 5u
        && (qword_18023E100 & 0x400000000000LL) != 0
        && (qword_18023E108 & 0x400000000000LL) == qword_18023E108 )
      {
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801F9B72, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&v23);
      }
      v4 = 0;
      goto LABEL_21;
    }
    v13 = 223LL;
  }
  else
  {
    v13 = 222LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_21:
  if ( pv )
    CoTaskMemFree(pv);
  return v4;
}

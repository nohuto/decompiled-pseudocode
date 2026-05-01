/*
 * XREFs of ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x1800AA400
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005D360 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x1800AA088 (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801D2CA0 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::SetMode(__int64 a1, int a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int16 v7; // bx
  HWND ForegroundWindow; // rax
  HMONITOR v9; // r14
  ImeNotificationExperienceManager *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  UINT32 cData[2]; // [rsp+28h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-61h]
  int v16; // [rsp+48h] [rbp-49h] BYREF
  LPVOID pv[4]; // [rsp+50h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+70h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    v4 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(a1 + 48));
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xBC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v5;
    }
  }
  v7 = 0;
  if ( a2 == 1 || a2 == 2 )
    v7 = 1041;
  v16 = 18;
  ForegroundWindow = GetForegroundWindow();
  v9 = MonitorFromWindow(ForegroundWindow, 2u);
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v9, &mi) )
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return (unsigned int)v5;
  }
  v11 = ImeNotificationExperienceManager::CalculateScaling(v10, 18, v9, &mi, 1, &v16);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  memset(pv, 0, 24);
  LODWORD(pData) = v7;
  cData[0] = v16;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
    (__int64)pv,
    (__int64)L"%s %ld %ld %ld %ld",
    L"Windows.Internal.ShellExperience.ImeStatusNotification",
    18LL,
    *(_QWORD *)cData,
    pData,
    a2);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v19, (const WCHAR **)pv);
  v5 = CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 48), *(HSTRING *)(v12 + 24));
  if ( v5 < 0 )
  {
    v13 = 219LL;
    goto LABEL_14;
  }
  v5 = CSingleViewShellExperience::Show(a1 + 48, 1LL);
  if ( v5 < 0 )
  {
    v13 = 220LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return (unsigned int)v5;
  }
  if ( hProvider > 5u
    && (qword_1802B2100 & 0x400000000000LL) != 0
    && (qword_1802B2108 & 0x400000000000LL) == qword_1802B2108 )
  {
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18025B198, 0LL, 0LL, 2u, &v19);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return 0LL;
}

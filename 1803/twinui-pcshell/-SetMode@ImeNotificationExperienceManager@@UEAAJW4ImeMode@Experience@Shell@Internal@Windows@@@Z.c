/*
 * XREFs of ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x180160380
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18006C11C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800F5EF4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18015FB1C (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1803070E4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::SetMode(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int16 v6; // bx
  HWND ForegroundWindow; // rax
  HMONITOR v8; // r14
  ImeNotificationExperienceManager *v9; // rcx
  int v10; // eax
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  const struct _TlgProvider_t *v14; // rcx
  UINT32 cData[2]; // [rsp+28h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-61h]
  int v18; // [rsp+48h] [rbp-49h] BYREF
  const WCHAR *v19[4]; // [rsp+50h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+70h] [rbp-21h] BYREF
  HSTRING_HEADER v21; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v19[3] = (const WCHAR *)-2LL;
  if ( *(_DWORD *)(a1 + 88) != 2
    || (v4 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(a1 + 48)), (v4 & 0x80000000) == 0) )
  {
    v6 = 0;
    if ( a2 == 1 || a2 == 2 )
      v6 = 1041;
    v18 = 18;
    ForegroundWindow = GetForegroundWindow();
    v8 = MonitorFromWindow(ForegroundWindow, 2u);
    memset_0(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( !GetMonitorInfoW(v8, &mi) )
    {
      v4 = -2147467259;
      v5 = 206LL;
      goto LABEL_4;
    }
    v10 = ImeNotificationExperienceManager::CalculateScaling(v9, 18, v8, &mi, 1, &v18);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        209LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    memset(v19, 0, 24);
    LODWORD(pData) = v6;
    cData[0] = v18;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
      (wchar_t **)v19,
      L"%s %ld %ld %ld %ld",
      L"Windows.Internal.ShellExperience.ImeStatusNotification",
      18LL,
      *(_QWORD *)cData,
      pData,
      a2);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, v19);
    v12 = CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 48), (HSTRING)v11[1].Reserved.Reserved1);
    v4 = v12;
    if ( v12 >= 0 )
    {
      v12 = CSingleViewShellExperience::Show(
              a1 + 48,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
      v4 = v12;
      if ( v12 >= 0 )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          TlgWrite(v14, &unk_18038CC67, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&v21);
        v4 = 0;
        goto LABEL_21;
      }
      v13 = 220LL;
    }
    else
    {
      v13 = 219LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_21:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
    return v4;
  }
  v5 = 188LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
    (const char *)v4);
  return v4;
}

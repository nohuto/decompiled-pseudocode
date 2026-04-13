/*
 * XREFs of ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180083BA0
 * Callers:
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180083D84 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025EFC (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18002615C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::GetCurrentUserSidString(CreativeFramework::Actions *this, wchar_t **a2)
{
  unsigned int ValueW; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  char *v9; // rax
  DWORD pcbData; // [rsp+40h] [rbp-1D8h] BYREF
  HKEY hkey[2]; // [rsp+48h] [rbp-1D0h] BYREF
  WCHAR SubKey[12]; // [rsp+58h] [rbp-1C0h] BYREF
  unsigned __int16 pvData[192]; // [rsp+70h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  hkey[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  *(_QWORD *)this = 0LL;
  hkey[0] = 0LL;
  ValueW = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
             0,
             9u,
             hkey);
  if ( ValueW )
  {
    v4 = 40LL;
LABEL_7:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v4,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)ValueW);
    goto LABEL_20;
  }
  v5 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  pcbData = 185;
  ValueW = RegGetValueW(hkey[0], SubKey, L"LoggedOnUserSID", 2u, 0LL, pvData, &pcbData);
  if ( ValueW )
  {
    v4 = 46LL;
    goto LABEL_7;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( pvData[v7] );
  *(_QWORD *)this = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v6 = -2147024362;
  }
  else
  {
    *(_QWORD *)this = 0LL;
    if ( !is_mul_ok(v8, 2uLL) )
    {
      v6 = -2147024362;
      goto LABEL_15;
    }
    v9 = (char *)CoTaskMemAlloc(2 * v8);
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      v6 = 0;
      StringCchCopyNExW(v9, v7 + 1, pvData, v7);
LABEL_15:
      if ( v6 >= 0 )
        goto LABEL_20;
      goto LABEL_19;
    }
    v6 = -2147024882;
  }
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
    (const char *)(unsigned int)v6);
LABEL_20:
  if ( hkey[0] )
    RegCloseKey(hkey[0]);
  return (unsigned int)v6;
}

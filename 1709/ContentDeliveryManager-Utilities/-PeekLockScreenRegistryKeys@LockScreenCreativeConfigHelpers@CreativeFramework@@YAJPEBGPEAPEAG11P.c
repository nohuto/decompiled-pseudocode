/*
 * XREFs of ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18002A808
 * Callers:
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x18002E4E0 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18002615C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002A244 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180038604 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2,
        DWORD *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  DWORD *v5; // r12
  DWORD *v6; // r15
  HKEY v7; // rdi
  int CurrentUserSidString; // eax
  int v9; // esi
  void *v10; // rcx
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int InfoKeyW; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  DWORD v19; // esi
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r14
  LSTATUS ValueW; // eax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  LSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  LSTATUS v32; // eax
  __int64 v33; // rdx
  LSTATUS v34; // eax
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-98h] BYREF
  DWORD cSubKeys[2]; // [rsp+78h] [rbp-90h] BYREF
  HKEY v39; // [rsp+80h] [rbp-88h]
  unsigned __int16 **v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  wchar_t SubKey[264]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR Buffer[264]; // [rsp+2A8h] [rbp+1A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+500h] [rbp+3F8h]

  v41 = -2LL;
  v40 = a4;
  v5 = a3;
  v6 = (DWORD *)a2;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *(_QWORD *)a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v7 = 0LL;
  v39 = 0LL;
  pv = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&pv,
                           a2);
  v9 = CurrentUserSidString;
  if ( CurrentUserSidString < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A0,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)CurrentUserSidString);
    v10 = pv;
    if ( !pv )
      goto LABEL_22;
    goto LABEL_11;
  }
  v11 = pv;
  v12 = StringCchPrintfW(
          SubKey,
          260LL,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
          pv);
  v9 = v12;
  if ( v12 >= 0 )
  {
    hKey = 0LL;
    v13 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x2001Fu, &hKey);
    if ( !v13 )
    {
      v7 = hKey;
      hKey = 0LL;
      v39 = v7;
      if ( v11 )
        CoTaskMemFree(v11);
      v9 = 0;
      goto LABEL_22;
    }
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x1A6,
           (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
           (const char *)v13);
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A4,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)v12);
  }
  if ( v11 )
  {
    v10 = v11;
LABEL_11:
    CoTaskMemFree(v10);
  }
LABEL_22:
  if ( v9 < 0 )
  {
    v14 = (unsigned int)v9;
    v15 = 436LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)v14);
    goto LABEL_77;
  }
  InfoKeyW = RegQueryInfoKeyW(v7, 0LL, 0LL, 0LL, cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( InfoKeyW )
  {
    v17 = 440LL;
LABEL_75:
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v17,
           (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
           (const char *)InfoKeyW);
    goto LABEL_77;
  }
  v18 = 0LL;
  v19 = 0;
  if ( !cSubKeys[0] )
  {
LABEL_76:
    v9 = -2147024894;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)0x80070002LL);
LABEL_77:
    v24 = v9;
    goto LABEL_78;
  }
  do
  {
    LODWORD(pv) = 256;
    InfoKeyW = RegEnumKeyExW(v7, v19, SubKey, (LPDWORD)&pv, 0LL, 0LL, 0LL, 0LL);
    if ( InfoKeyW )
    {
      v17 = 446LL;
      goto LABEL_75;
    }
    v20 = _wcstoui64(SubKey, 0LL, 10);
    if ( v20 > v18 )
      v18 = v20;
    ++v19;
  }
  while ( v19 < cSubKeys[0] );
  if ( !v18 )
    goto LABEL_76;
  v21 = StringCchPrintfW(Buffer, 260LL, L"%llu", v18);
  v9 = v21;
  if ( v21 < 0 )
  {
    v14 = (unsigned int)v21;
    v15 = 458LL;
    goto LABEL_34;
  }
  v22 = -1LL;
  if ( v6 )
  {
    LODWORD(pv) = 522;
    ValueW = RegGetValueW(v7, Buffer, L"contentId", 0x20000002u, 0LL, SubKey, (LPDWORD)&pv);
    v24 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v24 = ValueW;
    if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2147024894 )
    {
      v25 = 464LL;
      goto LABEL_71;
    }
    v26 = -1LL;
    do
      ++v26;
    while ( SubKey[v26] );
    v27 = _AllocStringWorker<CTCoAllocPolicy>(0LL, 0x80000000LL, SubKey);
    v24 = v27;
    v6 = 0LL;
    if ( v27 < 0 )
    {
      v28 = 465LL;
LABEL_64:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v28,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)(unsigned int)v27);
      goto LABEL_78;
    }
  }
  if ( v5 )
  {
    LODWORD(pv) = 522;
    v29 = RegGetValueW(v7, Buffer, L"landscapeImage", 0x20000002u, v6, SubKey, (LPDWORD)&pv);
    v24 = (unsigned __int16)v29 | 0x80070000;
    if ( v29 <= 0 )
      v24 = v29;
    if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2147024894 )
    {
      v25 = 472LL;
LABEL_71:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)v24);
      goto LABEL_78;
    }
    v31 = -1LL;
    do
      ++v31;
    while ( SubKey[v31] != (_WORD)v6 );
    v27 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v30, SubKey);
    v24 = v27;
    v5 = 0LL;
    if ( v27 < 0 )
    {
      v28 = 473LL;
      goto LABEL_64;
    }
  }
  if ( v40 )
  {
    LODWORD(pv) = 522;
    v32 = RegGetValueW(v7, Buffer, L"portraitImage", 0x20000002u, v5, SubKey, (LPDWORD)&pv);
    v24 = (unsigned __int16)v32 | 0x80070000;
    if ( v32 <= 0 )
      v24 = v32;
    if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2147024894 )
    {
      v25 = 480LL;
      goto LABEL_71;
    }
    do
      ++v22;
    while ( SubKey[v22] != (_WORD)v5 );
    v27 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v33, SubKey);
    v24 = v27;
    if ( v27 < 0 )
    {
      v28 = 481LL;
      goto LABEL_64;
    }
  }
  if ( a5 )
  {
    LODWORD(pv) = (_DWORD)v5;
    LODWORD(hKey) = 4;
    v34 = RegGetValueW(v7, Buffer, L"showImageOnSecureLock", 0x20000010u, v5, &pv, (LPDWORD)&hKey);
    v24 = (unsigned __int16)v34 | 0x80070000;
    if ( v34 <= 0 )
      v24 = v34;
    if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2147024894 )
    {
      v25 = 488LL;
      goto LABEL_71;
    }
    *(_BYTE *)a5 = (_DWORD)pv != (_DWORD)v5;
  }
  v24 = (unsigned int)v5;
LABEL_78:
  if ( v7 )
    RegCloseKey(v7);
  return v24;
}

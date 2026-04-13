/*
 * XREFs of ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18002D90C
 * Callers:
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x1800316F0 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180029804 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002D344 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18003BF2C (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2,
        DWORD *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  DWORD *v5; // r13
  DWORD *v6; // r12
  HKEY v7; // rdi
  int CurrentUserSidString; // eax
  unsigned int v9; // esi
  void *v10; // rcx
  void *v11; // rbx
  int v12; // eax
  WCHAR *v13; // r14
  unsigned int v14; // eax
  unsigned int InfoKeyW; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  DWORD v18; // esi
  unsigned __int64 v19; // rax
  int v20; // eax
  WCHAR *v21; // r15
  __int64 v22; // r14
  LSTATUS ValueW; // eax
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // eax
  unsigned __int64 v27; // r9
  LSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r9
  int v31; // eax
  LSTATUS v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  _BYTE *v35; // r14
  LSTATUS v36; // eax
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-98h] BYREF
  DWORD cSubKeys[2]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR *v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  HKEY v44; // [rsp+98h] [rbp-70h]
  unsigned __int16 **v45; // [rsp+A0h] [rbp-68h]
  unsigned __int16 **v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  wchar_t Name[264]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v47 = -2LL;
  v45 = a4;
  v5 = a3;
  v6 = (DWORD *)a2;
  v46 = a5;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *(_QWORD *)a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v7 = 0LL;
  v44 = 0LL;
  pv = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&pv,
                           a2);
  v9 = CurrentUserSidString;
  if ( CurrentUserSidString < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)CurrentUserSidString);
    v10 = pv;
    if ( !pv )
      goto LABEL_29;
    goto LABEL_11;
  }
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v11 = pv;
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v41,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
          pv);
  v9 = v12;
  if ( v12 >= 0 )
  {
    hKey = 0LL;
    v13 = v41;
    v14 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, v41, 0, 0x2001Fu, &hKey);
    if ( v14 )
    {
      v9 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1A7,
             (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
             (const char *)v14);
      if ( hKey )
        RegCloseKey(hKey);
      if ( v13 )
        CoTaskMemFree(v13);
      if ( v11 )
        CoTaskMemFree(v11);
    }
    else
    {
      v7 = hKey;
      hKey = 0LL;
      v44 = v7;
      if ( v13 )
        CoTaskMemFree(v13);
      if ( v11 )
        CoTaskMemFree(v11);
      v9 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)v12);
    if ( v41 )
      CoTaskMemFree(v41);
    if ( v11 )
    {
      v10 = v11;
LABEL_11:
      CoTaskMemFree(v10);
    }
  }
LABEL_29:
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)v9);
    goto LABEL_85;
  }
  InfoKeyW = RegQueryInfoKeyW(v7, 0LL, 0LL, 0LL, cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !InfoKeyW )
  {
    v17 = 0LL;
    v18 = 0;
    if ( !cSubKeys[0] )
    {
LABEL_84:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)0x80070002LL);
      v9 = -2147024894;
      goto LABEL_85;
    }
    do
    {
      LODWORD(pv) = 256;
      InfoKeyW = RegEnumKeyExW(v7, v18, Name, (LPDWORD)&pv, 0LL, 0LL, 0LL, 0LL);
      if ( InfoKeyW )
      {
        v16 = 447LL;
        goto LABEL_83;
      }
      v19 = _wcstoui64(Name, 0LL, 10);
      if ( v19 > v17 )
        v17 = v19;
      ++v18;
    }
    while ( v18 < cSubKeys[0] );
    if ( !v17 )
      goto LABEL_84;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&v41,
            L"%llu",
            v17);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CB,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)(unsigned int)v20);
      v21 = v41;
      goto LABEL_80;
    }
    v22 = -1LL;
    v21 = v41;
    if ( !v6 )
      goto LABEL_90;
    LODWORD(pv) = 522;
    ValueW = RegGetValueW(v7, v41, L"contentId", 0x20000002u, 0LL, Name, (LPDWORD)&pv);
    v9 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v9 = ValueW;
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
    {
      v24 = 465LL;
LABEL_76:
      v27 = v9;
      goto LABEL_77;
    }
    v25 = -1LL;
    do
      ++v25;
    while ( Name[v25] );
    v26 = _AllocStringWorker<CTCoAllocPolicy>(0LL, 0x80000000LL, Name);
    v9 = v26;
    v6 = 0LL;
    if ( v26 < 0 )
    {
      v27 = (unsigned int)v26;
      v24 = 466LL;
    }
    else
    {
LABEL_90:
      if ( !v5 )
        goto LABEL_91;
      LODWORD(pv) = 522;
      v28 = RegGetValueW(v7, v21, L"landscapeImage", 0x20000002u, v6, Name, (LPDWORD)&pv);
      v9 = (unsigned __int16)v28 | 0x80070000;
      if ( v28 <= 0 )
        v9 = v28;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        v24 = 473LL;
        goto LABEL_76;
      }
      v30 = -1LL;
      do
        ++v30;
      while ( Name[v30] != (_WORD)v6 );
      v31 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v29, Name);
      v9 = v31;
      v5 = 0LL;
      if ( v31 < 0 )
      {
        v27 = (unsigned int)v31;
        v24 = 474LL;
      }
      else
      {
LABEL_91:
        if ( !v45 )
          goto LABEL_70;
        LODWORD(pv) = 522;
        v32 = RegGetValueW(v7, v21, L"portraitImage", 0x20000002u, v5, Name, (LPDWORD)&pv);
        v9 = (unsigned __int16)v32 | 0x80070000;
        if ( v32 <= 0 )
          v9 = v32;
        if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
        {
          v24 = 481LL;
          goto LABEL_76;
        }
        do
          ++v22;
        while ( Name[v22] != (_WORD)v5 );
        v34 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v33, Name);
        v9 = v34;
        if ( v34 >= 0 )
        {
LABEL_70:
          v35 = v46;
          if ( v46 )
          {
            LODWORD(pv) = (_DWORD)v5;
            LODWORD(hKey) = 4;
            v36 = RegGetValueW(v7, v21, L"showImageOnSecureLock", 0x20000010u, v5, &pv, (LPDWORD)&hKey);
            v9 = (unsigned __int16)v36 | 0x80070000;
            if ( v36 <= 0 )
              v9 = v36;
            if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
            {
              v24 = 489LL;
              goto LABEL_76;
            }
            *v35 = (_DWORD)pv != (_DWORD)v5;
          }
          v9 = (unsigned int)v5;
LABEL_80:
          if ( v21 )
            CoTaskMemFree(v21);
          goto LABEL_85;
        }
        v27 = (unsigned int)v34;
        v24 = 482LL;
      }
    }
LABEL_77:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)v27);
    goto LABEL_80;
  }
  v16 = 441LL;
LABEL_83:
  v9 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v16,
         (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
         (const char *)InfoKeyW);
LABEL_85:
  if ( v7 )
    RegCloseKey(v7);
  return v9;
}

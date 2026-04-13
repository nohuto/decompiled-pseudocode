/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x1800289C8
 * Callers:
 *     _lambda_a4f13cb95add8140a6fafa459ff1c2f1_::operator() @ 0x18002C36C (_lambda_a4f13cb95add8140a6fafa459ff1c2f1_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002ED4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180026184 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180030790 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v5; // r15d
  WCHAR *v6; // rbx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rdx
  bool v10; // di
  LSTATUS v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  WCHAR *v14; // rsi
  unsigned __int64 v15; // r12
  int v16; // eax
  bool v17; // r15
  WCHAR *v18; // rdi
  LSTATUS ValueW; // eax
  void *v20; // rcx
  unsigned __int64 v21; // rdi
  int v22; // eax
  _WORD *v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  HKEY hKey; // [rsp+50h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-28h] BYREF
  struct _FILETIME v31; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-18h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  __int64 v34; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v37; // [rsp+D0h] [rbp+50h]

  v37 = (unsigned int)a3;
  pv = 0LL;
  v33 = 0LL;
  v5 = (unsigned int)a3;
  v34 = 0LL;
  v6 = 0LL;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         &pv,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v6 = (WCHAR *)pv;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v7);
    if ( pv )
      CoTaskMemFree(pv);
  }
  if ( v8 < 0 )
  {
    v9 = 72LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v8);
    goto LABEL_76;
  }
  hKey = 0LL;
  v10 = 0;
  v11 = RegOpenKeyExW(HKEY_CURRENT_USER, v6, 0, 0x20019u, &hKey);
  v8 = (unsigned __int16)v11 | 0x80070000;
  if ( v11 <= 0 )
    v8 = v11;
  if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
  {
    v10 = v8 >= 0;
    if ( hKey )
      RegCloseKey(hKey);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xD8,
      (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)v8,
      (__int64)"RegKey: %ws",
      (const char *)v6);
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( v8 < 0 )
  {
    v9 = 75LL;
    goto LABEL_32;
  }
  if ( !v10 )
  {
    hKey = 0LL;
    v12 = RegCreateKeyExW(HKEY_CURRENT_USER, v6, 0, 0LL, 0, 0x20019u, 0LL, &hKey, 0LL);
    if ( v12 )
    {
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x10E,
             (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
             (const char *)v12,
             (__int64)"RegKey: %ws",
             (const char *)v6);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      if ( hKey )
        RegCloseKey(hKey);
      v8 = 0;
    }
    if ( v8 < 0 )
    {
      v9 = 78LL;
      goto LABEL_32;
    }
    LODWORD(hKey) = 0;
    v13 = RegSetKeyValueW(HKEY_CURRENT_USER, v6, 0LL, 4u, &hKey, 4u);
    if ( v13 )
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x62,
             (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
             (const char *)v13,
             (__int64)"RegKey: %ws %ws",
             (const char *)v6,
             &Src);
    else
      v8 = 0;
    if ( v8 < 0 )
    {
      v9 = 83LL;
      goto LABEL_32;
    }
  }
  v14 = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v15 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  pv = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          &pv,
          L"%llu",
          v15);
  v8 = v16;
  if ( v16 >= 0 )
  {
    LODWORD(hKey) = 0;
    v17 = 0;
    v18 = (WCHAR *)pv;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, v6, (LPCWSTR)pv, 2u, 0LL, 0LL, (LPDWORD)&hKey);
    v8 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v8 = ValueW;
    if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
    {
      v17 = v8 >= 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xEA,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)v8,
        (__int64)"RegKey: %ws %ws",
        (const char *)v6,
        v18);
    }
    if ( v8 >= 0 )
    {
      if ( !v17 )
      {
LABEL_51:
        v14 = v18;
        v8 = 0;
        goto LABEL_52;
      }
      while ( 1 )
      {
        do
        {
          GetSystemTimeAsFileTime(&v31);
          v21 = v31.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v31) << 32);
        }
        while ( v15 == v21 );
        v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                &pv,
                L"%llu",
                v31.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v31) << 32));
        v8 = v22;
        if ( v22 < 0 )
          break;
        if ( v15 != v21 )
        {
          v18 = (WCHAR *)pv;
          goto LABEL_51;
        }
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v22);
      v20 = pv;
      if ( !pv )
        goto LABEL_52;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v8);
      if ( !v18 )
      {
LABEL_52:
        v5 = v37;
        goto LABEL_53;
      }
      v20 = v18;
    }
    CoTaskMemFree(v20);
    goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x31,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
    (const char *)(unsigned int)v16);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_53:
  if ( v8 >= 0 )
  {
    pv = 0LL;
    v33 = 0LL;
    v23 = 0LL;
    v34 = 0LL;
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            &pv,
            L"%d,%ws,%ws",
            v5,
            a4,
            a2);
    v8 = v24;
    if ( v24 >= 0 )
    {
      v23 = pv;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v24);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v8 >= 0 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v23[v26] );
      v27 = RegSetKeyValueW(HKEY_CURRENT_USER, v6, v14, 1u, v23, 2 * v26 + 2);
      if ( v27 )
        v8 = wil::details::in1diag3::Return_Win32Msg(
               retaddr,
               (void *)0xCA,
               (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
               (const char *)v27,
               (__int64)"RegKey: %ws %ws",
               (const char *)v6,
               v14);
      else
        v8 = 0;
      if ( v8 >= 0 )
      {
        v8 = 0;
LABEL_72:
        if ( v23 )
          CoTaskMemFree(v23);
        goto LABEL_74;
      }
      v25 = 98LL;
    }
    else
    {
      v25 = 93LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v8);
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x57,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
    (const char *)(unsigned int)v8);
LABEL_74:
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_76:
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)v8;
}

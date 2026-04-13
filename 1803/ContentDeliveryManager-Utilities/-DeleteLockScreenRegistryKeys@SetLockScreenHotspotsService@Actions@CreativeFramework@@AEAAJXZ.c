/*
 * XREFs of ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x18008FBC8
 * Callers:
 *     ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008F660 (-Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008F6F0 (-Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001980 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18003245C (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180084278 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180090260 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  unsigned int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  unsigned int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  DWORD i; // ebx
  unsigned int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  unsigned int ValueW; // eax
  wil::details::in1diag3 *v11; // rcx
  const WCHAR *v12; // r8
  unsigned __int64 v13; // r8
  LPCWSTR v14; // rbx
  const WCHAR *v15; // rdx
  unsigned int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  unsigned int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  const char *v20; // r9
  __int64 result; // rax
  DWORD pcbData; // [rsp+60h] [rbp-698h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-690h] BYREF
  DWORD cSubKeys; // [rsp+70h] [rbp-688h] BYREF
  DWORD cchName; // [rsp+74h] [rbp-684h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-680h] BYREF
  __int64 v27; // [rsp+88h] [rbp-670h]
  __int64 v28; // [rsp+90h] [rbp-668h]
  void *v29[3]; // [rsp+98h] [rbp-660h] BYREF
  unsigned __int64 v30; // [rsp+B0h] [rbp-648h]
  WCHAR Name[256]; // [rsp+C0h] [rbp-638h] BYREF
  WCHAR SubKey[264]; // [rsp+2C0h] [rbp-438h] BYREF
  WCHAR pvData[264]; // [rsp+4D0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6F8h] [rbp+0h]

  v28 = -2LL;
  try
  {
    v2 = StringCchPrintfW(
           SubKey,
           260LL,
           L"%s\\%s",
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
           *((_QWORD *)this + 2));
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)(unsigned int)v2);
    }
    else
    {
      hKey = 0LL;
      v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0xFu, &hKey);
      v4 = retaddr;
      if ( !v3 )
      {
        *(_OWORD *)lpSubKey = 0LL;
        v27 = 0LL;
        v5 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        v6 = retaddr;
        if ( !v5 )
        {
          for ( i = 0; i < cSubKeys; ++i )
          {
            cchName = 256;
            pcbData = 261;
            v8 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
            v9 = retaddr;
            if ( v8 )
              goto LABEL_35;
            ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
            v11 = retaddr;
            if ( ValueW )
              goto LABEL_36;
            v12 = (const WCHAR *)((char *)this + 24);
            if ( *((_QWORD *)this + 6) >= 8uLL )
              v12 = *(const WCHAR **)v12;
            if ( CompareStringOrdinal(pvData, -1, v12, -1, 0) == 2 )
            {
              v30 = 7LL;
              v29[2] = 0LL;
              LOWORD(v29[0]) = 0;
              if ( Name[0] )
              {
                v13 = -1LL;
                do
                  ++v13;
                while ( Name[v13] );
              }
              else
              {
                v13 = 0LL;
              }
              std::wstring::assign(v29, (char *)Name, v13);
              std::vector<std::wstring>::push_back(lpSubKey, v29);
              if ( v30 >= 8 )
                operator delete(v29[0]);
            }
          }
          v14 = lpSubKey[0];
          if ( lpSubKey[0] == lpSubKey[1] )
          {
            *((_BYTE *)this + 124) = 0;
LABEL_29:
            std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
            if ( hKey )
              RegCloseKey(hKey);
            return 0LL;
          }
          *((_BYTE *)this + 124) = 1;
          while ( v14 != lpSubKey[1] )
          {
            if ( *((_QWORD *)v14 + 3) < 8uLL )
              v15 = v14;
            else
              v15 = *(const WCHAR **)v14;
            v16 = RegDeleteKeyExW(hKey, v15, 0, 0);
            v17 = retaddr;
            if ( v16 )
              goto LABEL_37;
            v14 += 16;
          }
          pcbData = 1;
          v18 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &pcbData, 4u);
          v19 = retaddr;
          if ( !v18 )
            goto LABEL_29;
LABEL_38:
          wil::details::in1diag3::_Throw_Win32(
            v19,
            (void *)0xBA,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
            (const char *)v18);
          JUMPOUT(0x18008FFA4LL);
        }
LABEL_34:
        wil::details::in1diag3::_Throw_Win32(
          v6,
          (void *)0x9B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v5);
LABEL_35:
        wil::details::in1diag3::_Throw_Win32(
          v9,
          (void *)0xA2,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v8);
LABEL_36:
        wil::details::in1diag3::_Throw_Win32(
          v11,
          (void *)0xA3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)ValueW);
LABEL_37:
        wil::details::in1diag3::_Throw_Win32(
          v17,
          (void *)0xB5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v16);
        goto LABEL_38;
      }
    }
    wil::details::in1diag3::_Throw_Win32(
      v4,
      (void *)0x96,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)v3);
    goto LABEL_34;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBF,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
                           v20);
  }
  return result;
}

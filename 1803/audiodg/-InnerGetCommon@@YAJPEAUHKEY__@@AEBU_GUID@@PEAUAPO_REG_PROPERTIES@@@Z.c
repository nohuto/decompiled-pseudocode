/*
 * XREFs of ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000FFA0
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000FBD0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 */

__int64 __fastcall InnerGetCommon(HKEY hKey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  CLSID v3; // xmm0
  LSTATUS v6; // eax
  int v7; // r14d
  WCHAR *szFriendlyName; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  WCHAR v11; // ax
  LSTATUS v12; // eax
  WCHAR *szCopyrightInfo; // rax
  WCHAR v14; // cx
  bool v15; // cc
  LPDWORD lpcbData; // [rsp+28h] [rbp-D8h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE lpData[4]; // [rsp+34h] [rbp-CCh] BYREF
  DWORD Type; // [rsp+38h] [rbp-C8h] BYREF
  BYTE Data[1024]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *a2;
  cbData = 1024;
  lpcbData = &cbData;
  a3->clsid = v3;
  *(_DWORD *)lpData = 0;
  v6 = RegQueryValueExW(hKey, L"FriendlyName", 0LL, &Type, Data, lpcbData);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      return (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    szFriendlyName = a3->szFriendlyName;
    v9 = 256LL;
    v10 = 256LL;
    v7 = 0;
    while ( v10 != -2147483390 )
    {
      v11 = *(WCHAR *)((char *)szFriendlyName + Data - (BYTE *)a3->szFriendlyName);
      if ( !v11 )
        break;
      *szFriendlyName++ = v11;
      if ( !--v10 )
      {
        --szFriendlyName;
        v7 = -2147024774;
        break;
      }
    }
    *szFriendlyName = 0;
    if ( v7 >= 0 )
    {
      cbData = 1024;
      v12 = RegQueryValueExW(hKey, L"Copyright", 0LL, &Type, Data, &cbData);
      v7 = v12;
      if ( v12 )
      {
        if ( v12 <= 0 )
          return (unsigned int)v7;
        return (unsigned __int16)v12 | 0x80070000;
      }
      szCopyrightInfo = a3->szCopyrightInfo;
      v7 = 0;
      while ( v9 != -2147483390 )
      {
        v14 = *(WCHAR *)((char *)szCopyrightInfo + Data - (BYTE *)a3->szCopyrightInfo);
        if ( !v14 )
          break;
        *szCopyrightInfo++ = v14;
        if ( !--v9 )
        {
          --szCopyrightInfo;
          v7 = -2147024774;
          break;
        }
      }
      *szCopyrightInfo = 0;
      if ( v7 >= 0 )
      {
        cbData = 4;
        v12 = RegQueryValueExW(hKey, L"MajorVersion", 0LL, &Type, lpData, &cbData);
        v15 = v12 <= 0;
        if ( !v12 )
        {
          a3->u32MajorVersion = *(_DWORD *)lpData;
          cbData = 4;
          v12 = RegQueryValueExW(hKey, L"MinorVersion", 0LL, &Type, lpData, &cbData);
          v15 = v12 <= 0;
          if ( !v12 )
          {
            a3->u32MinorVersion = *(_DWORD *)lpData;
            cbData = 4;
            v12 = RegQueryValueExW(hKey, L"Flags", 0LL, &Type, lpData, &cbData);
            v15 = v12 <= 0;
            if ( !v12 )
            {
              a3->Flags = *(_DWORD *)lpData;
              cbData = 4;
              v12 = RegQueryValueExW(hKey, L"MinInputConnections", 0LL, &Type, lpData, &cbData);
              v15 = v12 <= 0;
              if ( !v12 )
              {
                a3->u32MinInputConnections = *(_DWORD *)lpData;
                cbData = 4;
                v12 = RegQueryValueExW(hKey, L"MaxInputConnections", 0LL, &Type, lpData, &cbData);
                v15 = v12 <= 0;
                if ( !v12 )
                {
                  a3->u32MaxInputConnections = *(_DWORD *)lpData;
                  cbData = 4;
                  v12 = RegQueryValueExW(hKey, L"MinOutputConnections", 0LL, &Type, lpData, &cbData);
                  v15 = v12 <= 0;
                  if ( !v12 )
                  {
                    a3->u32MinOutputConnections = *(_DWORD *)lpData;
                    cbData = 4;
                    v12 = RegQueryValueExW(hKey, L"MaxOutputConnections", 0LL, &Type, lpData, &cbData);
                    v15 = v12 <= 0;
                    if ( !v12 )
                    {
                      a3->u32MaxOutputConnections = *(_DWORD *)lpData;
                      cbData = 4;
                      v12 = RegQueryValueExW(hKey, L"MaxInstances", 0LL, &Type, lpData, &cbData);
                      v15 = v12 <= 0;
                      if ( !v12 )
                      {
                        a3->u32MaxInstances = *(_DWORD *)lpData;
                        return (unsigned int)v7;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v15 )
          return (unsigned int)v12;
        return (unsigned __int16)v12 | 0x80070000;
      }
    }
  }
  return (unsigned int)v7;
}

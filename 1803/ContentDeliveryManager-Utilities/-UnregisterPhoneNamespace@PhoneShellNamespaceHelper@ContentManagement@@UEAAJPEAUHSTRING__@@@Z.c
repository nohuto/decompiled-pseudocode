/*
 * XREFs of ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180012D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003244 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x18000C454 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x18000C764 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::UnregisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  int v4; // eax
  void *v5; // rcx
  LPCVOID v6; // rbx
  PCWSTR v7; // rax
  int v8; // eax
  void *v9; // rcx
  LPCVOID v10; // rdi
  WCHAR *v11; // rcx
  LPCWSTR v12; // rbx
  PCWSTR v13; // rax
  int v14; // eax
  char *v15; // rsi
  unsigned int v16; // ebx
  LSTATUS v17; // eax
  unsigned __int64 v18; // r9
  PCWSTR v19; // rax
  int v20; // eax
  char *v21; // rdi
  LSTATUS v22; // eax
  unsigned __int64 v23; // r9
  const WCHAR *v24; // rax
  const unsigned __int16 *v25; // r8
  LPCVOID dwItem1; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h]
  __int64 v29; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPCWSTR lpPathName; // [rsp+80h] [rbp+30h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  dwItem1 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         &dwItem1,
         L"::%ws",
         StringRawBuffer);
  if ( v4 >= 0 )
  {
    v6 = dwItem1;
    SHChangeNotify(16, 5u, dwItem1, 0LL);
    if ( !v6 )
      goto LABEL_7;
    v5 = (void *)v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4);
    v5 = (void *)dwItem1;
    if ( !dwItem1 )
      goto LABEL_7;
  }
  CoTaskMemFree(v5);
LABEL_7:
  v7 = WindowsGetStringRawBuffer(a2, 0LL);
  dwItem1 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         &dwItem1,
         L"%ws\\%ws\\%ws\\%ws",
         L"Software\\Classes\\CLSID",
         v7,
         L"Instance",
         L"InitPropertyBag");
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x506,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
    v9 = (void *)dwItem1;
    if ( !dwItem1 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v10 = dwItem1;
  lpPathName = 0LL;
  if ( (int)CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
              (const WCHAR *)dwItem1,
              L"TargetFolderPath",
              0LL,
              &lpPathName) >= 0 )
  {
    v12 = lpPathName;
    RemoveDirectoryW(lpPathName);
    if ( v12 )
    {
      v11 = (WCHAR *)v12;
LABEL_15:
      CoTaskMemFree(v11);
    }
  }
  else
  {
    v11 = (WCHAR *)lpPathName;
    if ( lpPathName )
      goto LABEL_15;
  }
  if ( !v10 )
    goto LABEL_19;
  v9 = (void *)v10;
LABEL_18:
  CoTaskMemFree(v9);
LABEL_19:
  dwItem1 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v13 = WindowsGetStringRawBuffer(a2, 0LL);
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          &dwItem1,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v13);
  v15 = (char *)dwItem1;
  v16 = v14;
  if ( v14 >= 0 )
  {
    v17 = RegDeleteTreeW(HKEY_CURRENT_USER, (LPCWSTR)dwItem1);
    v18 = (unsigned __int16)v17 | 0x80070000;
    if ( v17 <= 0 )
      v18 = (unsigned int)v17;
    if ( (((_DWORD)v18 + 0x80000000) & 0x80000000) == 0 && (_DWORD)v18 != -2147024894 )
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x122,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
        (const char *)v18,
        (__int64)"RegKey: %ws",
        v15);
    dwItem1 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v19 = WindowsGetStringRawBuffer(a2, 0LL);
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            &dwItem1,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v19);
    v21 = (char *)dwItem1;
    v16 = v20;
    if ( v20 >= 0 )
    {
      v22 = RegDeleteKeyW(HKEY_CURRENT_USER, (LPCWSTR)dwItem1);
      v23 = (unsigned __int16)v22 | 0x80070000;
      if ( v22 <= 0 )
        v23 = (unsigned int)v22;
      if ( (((_DWORD)v23 + 0x80000000) & 0x80000000) == 0 && (_DWORD)v23 != -2147024894 )
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x11B,
          (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
          (const char *)v23,
          (__int64)"RegKey: %ws",
          v21);
      v24 = WindowsGetStringRawBuffer(a2, 0LL);
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
        v24,
        v25);
      v16 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v20);
    }
    if ( v21 )
      CoTaskMemFree(v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x486,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v14);
  }
  if ( v15 )
    CoTaskMemFree(v15);
  return v16;
}

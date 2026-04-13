/*
 * XREFs of ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002ED4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180026184 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x1800286A8 (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x180028870 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002B160 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18002DA5C (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002DB18 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::CreativeEventReportedCache::SetEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        struct _FILETIME a4)
{
  char v6; // r12
  WCHAR *v7; // rsi
  WCHAR *StringRawBuffer; // rax
  bool *v9; // r9
  int DoesSettingExist; // eax
  const unsigned __int16 *v11; // rdx
  unsigned __int16 **v12; // r9
  int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdi
  int v17; // eax
  const WCHAR *v18; // r8
  LPCWCH *v19; // rcx
  const WCHAR *v20; // rbx
  unsigned int v21; // eax
  const WCHAR *v22; // rdi
  LSTATUS v23; // eax
  int CreativeEventString; // eax
  bool *v25; // r9
  WCHAR *v26; // rdi
  __int64 v27; // rdx
  struct _FILETIME v28; // r9
  unsigned __int16 v30; // [rsp+40h] [rbp-39h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-29h]
  LPCWCH lpString1[4]; // [rsp+58h] [rbp-21h] BYREF
  LPCWCH lpString2[3]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  lpString1[3] = (LPCWCH)-2LL;
  SystemTimeAsFileTime = a4;
  v32 = a3;
  v6 = 0;
  v7 = 0LL;
  memset(lpString1, 0, 24);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v30,
                       v9);
  v13 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    v14 = (unsigned int)DoesSettingExist;
    v15 = 695LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v14);
    goto LABEL_43;
  }
  v16 = -1LL;
  if ( (_BYTE)v30 )
  {
    v17 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
            *(const WCHAR **)(a1 + 24),
            v11,
            (unsigned __int16 *)lpString1,
            v12);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2BB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v17);
      v7 = (WCHAR *)lpString1[0];
      goto LABEL_43;
    }
    v7 = (WCHAR *)lpString1[0];
    if ( lpString1[0] )
    {
      v18 = (const WCHAR *)lpString2;
      if ( v35 >= 8 )
        v18 = lpString2[0];
      if ( CompareStringOrdinal(lpString1[0], -1, v18, -1, 1) == 2 )
        goto LABEL_32;
    }
    v6 = 1;
  }
  v19 = lpString2;
  if ( v35 >= 8 )
    v19 = (LPCWCH *)lpString2[0];
  v20 = *(const WCHAR **)(a1 + 24);
  do
    ++v16;
  while ( *((_WORD *)v19 + v16) );
  v21 = RegSetKeyValueW(HKEY_CURRENT_USER, v20, L"LastCreativeBatchId", 1u, v19, 2 * v16 + 2);
  if ( v21 )
    v13 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0xCA,
            (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
            (const char *)v21,
            (__int64)"RegKey: %ws %ws",
            (const char *)v20,
            L"LastCreativeBatchId");
  else
    v13 = 0;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 706LL;
    goto LABEL_20;
  }
  if ( v6 && (_BYTE)v30 )
  {
    v22 = *(const WCHAR **)(a1 + 48);
    v23 = RegDeleteKeyW(HKEY_CURRENT_USER, v22);
    v13 = (unsigned __int16)v23 | 0x80070000;
    if ( v23 <= 0 )
      v13 = v23;
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147024894 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x11B,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)v13,
        (__int64)"RegKey: %ws",
        (const char *)v22);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2C7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_43;
    }
  }
LABEL_32:
  lpString1[0] = 0LL;
  CreativeEventString = ContentManagement::GetCreativeEventString(a2, v32, *(HSTRING *)&SystemTimeAsFileTime, lpString1);
  v13 = CreativeEventString;
  v26 = (WCHAR *)lpString1[0];
  if ( CreativeEventString < 0 )
  {
    v27 = 717LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    goto LABEL_41;
  }
  CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                          *(const WCHAR **)(a1 + 48),
                          lpString1[0],
                          &v30,
                          v25);
  v13 = CreativeEventString;
  if ( CreativeEventString < 0 )
  {
    v27 = 721LL;
    goto LABEL_39;
  }
  if ( !(_BYTE)v30 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
                            *(const WCHAR **)(a1 + 48),
                            v26,
                            *(_QWORD *)&SystemTimeAsFileTime,
                            v28);
    v13 = CreativeEventString;
    if ( CreativeEventString < 0 )
    {
      v27 = 726LL;
      goto LABEL_39;
    }
  }
  v13 = 0;
LABEL_41:
  if ( v26 )
    CoTaskMemFree(v26);
LABEL_43:
  if ( v35 >= 8 )
    operator delete((void *)lpString2[0]);
  v35 = 7LL;
  lpString2[2] = 0LL;
  LOWORD(lpString2[0]) = 0;
  if ( v7 )
    CoTaskMemFree(v7);
  return (unsigned int)v13;
}

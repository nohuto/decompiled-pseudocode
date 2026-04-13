/*
 * XREFs of ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180031110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003244 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z @ 0x18000C57C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x18002BCF0 (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18002BD90 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002E2B4 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x180030D0C (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180030DC8 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::CreativeEventReportedCache::SetEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        struct _FILETIME a4)
{
  char v7; // r15
  WCHAR *v8; // rdi
  WCHAR *StringRawBuffer; // rax
  bool *v10; // r9
  int DoesSettingExist; // eax
  const unsigned __int16 *v12; // rdx
  unsigned __int16 **v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  char v16; // si
  int v17; // eax
  const WCHAR *v18; // r8
  LPCWCH *v19; // r8
  const WCHAR *v20; // rsi
  LSTATUS v21; // eax
  int CreativeEventString; // eax
  bool *v23; // r9
  WCHAR *v24; // rsi
  __int64 v25; // rdx
  struct _FILETIME v26; // r9
  unsigned __int16 v28; // [rsp+30h] [rbp-49h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-41h] BYREF
  LPCWCH lpString1[4]; // [rsp+40h] [rbp-39h] BYREF
  LPCWCH lpString2[3]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  lpString1[3] = (LPCWCH)-2LL;
  SystemTimeAsFileTime = a4;
  v7 = 0;
  v8 = 0LL;
  memset(lpString1, 0, 24);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v28,
                       v10);
  v14 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    v15 = 738LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    goto LABEL_37;
  }
  v16 = v28;
  if ( !(_BYTE)v28 )
    goto LABEL_10;
  v17 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
          *(const WCHAR **)(a1 + 24),
          v12,
          (unsigned __int16 *)lpString1,
          v13);
  v14 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v17);
    v8 = (WCHAR *)lpString1[0];
    goto LABEL_37;
  }
  v7 = 1;
  v8 = (WCHAR *)lpString1[0];
  if ( !lpString1[0] )
    goto LABEL_10;
  v18 = (const WCHAR *)lpString2;
  if ( v32 >= 8 )
    v18 = lpString2[0];
  if ( CompareStringOrdinal(lpString1[0], -1, v18, -1, 1) != 2 )
  {
LABEL_10:
    v19 = lpString2;
    if ( v32 >= 8 )
      v19 = (LPCWCH *)lpString2[0];
    DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                         *(const WCHAR **)(a1 + 24),
                         L"LastCreativeBatchId",
                         v19,
                         (const unsigned __int16 *)v13);
    v14 = DoesSettingExist;
    if ( DoesSettingExist < 0 )
    {
      v15 = 749LL;
      goto LABEL_14;
    }
    if ( v7 && v16 )
    {
      v20 = *(const WCHAR **)(a1 + 48);
      v21 = RegDeleteKeyW(HKEY_CURRENT_USER, v20);
      v14 = (unsigned __int16)v21 | 0x80070000;
      if ( v21 <= 0 )
        v14 = v21;
      if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147024894 )
        v14 = 0;
      else
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x11B,
          (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
          (const char *)v14,
          (__int64)"RegKey: %ws",
          (const char *)v20);
      if ( (v14 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F2,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)v14);
        goto LABEL_37;
      }
    }
  }
  lpString1[0] = 0LL;
  CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, *(HSTRING *)&SystemTimeAsFileTime, lpString1);
  v14 = CreativeEventString;
  v24 = (WCHAR *)lpString1[0];
  if ( CreativeEventString < 0 )
  {
    v25 = 760LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    goto LABEL_35;
  }
  CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                          *(const WCHAR **)(a1 + 48),
                          lpString1[0],
                          &v28,
                          v23);
  v14 = CreativeEventString;
  if ( CreativeEventString < 0 )
  {
    v25 = 764LL;
    goto LABEL_33;
  }
  if ( !(_BYTE)v28 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
                            *(const WCHAR **)(a1 + 48),
                            v24,
                            *(_QWORD *)&SystemTimeAsFileTime,
                            v26);
    v14 = CreativeEventString;
    if ( CreativeEventString < 0 )
    {
      v25 = 769LL;
      goto LABEL_33;
    }
  }
  v14 = 0;
LABEL_35:
  if ( v24 )
    CoTaskMemFree(v24);
LABEL_37:
  if ( v32 >= 8 )
    operator delete((void *)lpString2[0]);
  v32 = 7LL;
  lpString2[2] = 0LL;
  LOWORD(lpString2[0]) = 0;
  if ( v8 )
    CoTaskMemFree(v8);
  return v14;
}

/*
 * XREFs of ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18002E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x1800285A4 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x180028870 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002AF5C (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002B160 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18002DA5C (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002DB18 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::CreativeEventReportedCache::IsReportedEventExpired(
        __int64 a1,
        HSTRING a2,
        int a3,
        bool *a4,
        bool *a5)
{
  int DoesSettingExist; // eax
  unsigned int v9; // ebx
  WCHAR *StringRawBuffer; // rax
  const unsigned __int16 *v12; // rdx
  unsigned __int16 **v13; // r9
  int v14; // eax
  WCHAR *v15; // rsi
  const WCHAR *v16; // r8
  int CreativeEventString; // eax
  bool *v18; // r9
  WCHAR *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rbx
  WCHAR *v22; // rax
  unsigned __int64 ImpressionEventExpirationTime; // rbx
  unsigned __int16 v24; // [rsp+30h] [rbp-51h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-49h] BYREF
  LPCWCH lpString1[3]; // [rsp+40h] [rbp-41h] BYREF
  LPVOID pv[4]; // [rsp+58h] [rbp-29h] BYREF
  LPCWCH lpString2[3]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  pv[3] = (LPVOID)-2LL;
  *a5 = 0;
  if ( !a3 )
  {
    DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                         *(const WCHAR **)(a1 + 24),
                         L"LastCreativeBatchId",
                         &v24,
                         a4);
    v9 = DoesSettingExist;
    if ( DoesSettingExist < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2E3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)DoesSettingExist);
      return v9;
    }
    if ( (_BYTE)v24 )
    {
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
      anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
      lpString1[0] = 0LL;
      lpString1[1] = (LPCWCH)-1LL;
      lpString1[2] = (LPCWCH)-1LL;
      v14 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
              *(const WCHAR **)(a1 + 24),
              v12,
              (unsigned __int16 *)lpString1,
              v13);
      v9 = v14;
      v15 = (WCHAR *)lpString1[0];
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2E9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v14);
LABEL_21:
        if ( v15 )
          CoTaskMemFree(v15);
        if ( v29 >= 8 )
          operator delete((void *)lpString2[0]);
        return v9;
      }
      if ( lpString1[0] )
      {
        v16 = (const WCHAR *)lpString2;
        if ( v29 >= 8 )
          v16 = lpString2[0];
        if ( CompareStringOrdinal(lpString1[0], -1, v16, -1, 1) == 2 )
        {
          pv[0] = 0LL;
          pv[1] = (LPVOID)-1LL;
          pv[2] = (LPVOID)-1LL;
          CreativeEventString = ContentManagement::GetCreativeEventString(a2, 0, (HSTRING)a4, pv);
          v9 = CreativeEventString;
          v19 = (WCHAR *)pv[0];
          if ( CreativeEventString < 0 )
          {
            v20 = 749LL;
            goto LABEL_19;
          }
          CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                  *(const WCHAR **)(a1 + 48),
                                  (LPCWSTR)pv[0],
                                  &v24,
                                  v18);
          v9 = CreativeEventString;
          if ( CreativeEventString < 0 )
          {
            v20 = 753LL;
            goto LABEL_19;
          }
          if ( (_BYTE)v24 )
          {
            CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                                    *(const WCHAR **)(a1 + 48),
                                    v19,
                                    0LL,
                                    &SystemTimeAsFileTime);
            v9 = CreativeEventString;
            if ( CreativeEventString < 0 )
            {
              v20 = 759LL;
LABEL_19:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v20,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
                (const char *)(unsigned int)CreativeEventString);
              if ( v19 )
                CoTaskMemFree(v19);
              goto LABEL_21;
            }
            v21 = SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32);
            v22 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
            ImpressionEventExpirationTime = anonymous_namespace_::GetImpressionEventExpirationTime(0LL, v22, v21);
            GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
            *a5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32) >= ImpressionEventExpirationTime;
          }
          if ( v19 )
            CoTaskMemFree(v19);
        }
      }
      if ( v15 )
        CoTaskMemFree(v15);
      if ( v29 >= 8 )
        operator delete((void *)lpString2[0]);
    }
  }
  return 0LL;
}

/*
 * XREFs of ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x1800070A4
 * Callers:
 *     ?get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIContextualSuggestionsManager@2@@Z @ 0x180011B30 (-get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUI.c)
 *     ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x180011CD0 (-get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnai.c)
 *     ?get_FeatureManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIFeatureManager@2@@Z @ 0x180012250 (-get_FeatureManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIFeatureManager.c)
 *     ?get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManager@2@@Z @ 0x1800123F0 (-get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManag.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002ED4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180054870 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18005498C (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180054BA8 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180054BE0 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180054D6C (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
        CreativeFramework::LockScreenCategoryConfig *this,
        const unsigned __int16 *const *a2)
{
  signed int CallingProcessHandle; // ebx
  bool *v3; // r8
  char *v4; // rcx
  void **v6; // r8
  signed int LastError; // eax
  char *v8; // rcx
  const WCHAR **v9; // rbx
  const char *v10; // rsi
  __int64 v11; // rdx
  const WCHAR *v12; // r8
  const WCHAR *v13; // rcx
  unsigned __int16 **v14; // rdx
  void *v15; // rdi
  LPWSTR StringSid; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HANDLE hObject; // [rsp+A0h] [rbp+30h] BYREF
  int v24; // [rsp+A8h] [rbp+38h] BYREF
  PSID Sid; // [rsp+B0h] [rbp+40h] BYREF

  v24 = (int)a2;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::IsProcessAppContainer(hObject, &v24, v3);
  v4 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  if ( CallingProcessHandle >= 0 )
  {
    if ( !(_BYTE)v24 )
      return 0LL;
    v17 = -1LL;
    v18 = -1LL;
    StringSid = 0LL;
    hObject = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(
                             (CallerIdentity *)v4,
                             (unsigned int)&hObject,
                             (void **)v3);
    if ( CallingProcessHandle >= 0 )
    {
      StringSid = 0LL;
      CallingProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(hObject, &Sid, v6);
      if ( CallingProcessHandle >= 0 )
      {
        if ( ConvertSidToStringSidW(Sid, &StringSid) )
        {
          CallingProcessHandle = 0;
        }
        else
        {
          LastError = GetLastError();
          CallingProcessHandle = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            CallingProcessHandle = LastError;
          if ( CallingProcessHandle >= 0 )
            CallingProcessHandle = -2147467259;
        }
        LocalFree(Sid);
      }
    }
    v8 = (char *)hObject;
    hObject = 0LL;
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v8);
    if ( CallingProcessHandle >= 0 )
    {
      v9 = (const WCHAR **)&off_1800C0C10;
      v10 = (const char *)&Src;
      do
      {
        LODWORD(v11) = v17;
        if ( v17 == -1 )
        {
          if ( StringSid )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( StringSid[v11] );
          }
          else
          {
            LODWORD(v11) = 0;
          }
        }
        v12 = &Src;
        if ( *v9 )
          v12 = *v9;
        v13 = &Src;
        if ( StringSid )
          v13 = StringSid;
        if ( CompareStringOrdinal(v13, v11, v12, -(*v9 != 0LL), 1) == 2 )
        {
          CallingProcessHandle = 0;
          goto LABEL_41;
        }
        ++v9;
      }
      while ( (__int64)v9 < (__int64)&Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'} );
      pv = 0LL;
      v20 = -1LL;
      v21 = -1LL;
      CallerIdentity::GetCallingProcessPackageFullName((CallerIdentity *)&pv, v14);
      v15 = pv;
      if ( pv )
        v10 = (const char *)pv;
      CallingProcessHandle = -2147024891;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x8D,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencategoryconfig.h",
        (const char *)0x80070005LL,
        (__int64)"%ls",
        v10);
      if ( v15 )
      {
        CoTaskMemFree(v15);
        pv = 0LL;
      }
      v20 = 0LL;
      v21 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7D,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencategoryconfig.h",
        (const char *)(unsigned int)CallingProcessHandle);
    }
LABEL_41:
    if ( StringSid )
    {
      CoTaskMemFree(StringSid);
      StringSid = 0LL;
    }
    v17 = 0LL;
    v18 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x79,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencategoryconfig.h",
      (const char *)(unsigned int)CallingProcessHandle);
  }
  return (unsigned int)CallingProcessHandle;
}

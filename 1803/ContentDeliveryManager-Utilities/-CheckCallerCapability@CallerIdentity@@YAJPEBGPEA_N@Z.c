/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058550
 * Callers:
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x18000D3E0 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18000D600 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18000D790 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18000D930 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x1800133E0 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 *     ?get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificationManager@2@@Z @ 0x180013920 (-get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificat.c)
 *     ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x180013B10 (-get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2.c)
 *     ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x180014010 (-get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@.c)
 *     ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x180014200 (-get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPho.c)
 *     ?get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMobilityExperienceSettings@2@@Z @ 0x1800143F0 (-get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMo.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180045138 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800133C4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004222C (--0-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180046CC0 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180058480 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180058928 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, unsigned __int16 *a2, bool *a3)
{
  __int64 v5; // rdx
  HANDLE v6; // rcx
  int CallingProcessHandle; // eax
  bool *v8; // r9
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)a2 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  v6 = hObject;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>::close_reset(hObject);
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v6, v5, &hObject);
  v9 = 0;
  if ( CallingProcessHandle < 0 )
    v9 = CallingProcessHandle;
  if ( v9 >= 0 )
    v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, this, a2, v8);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  return (unsigned int)v9;
}

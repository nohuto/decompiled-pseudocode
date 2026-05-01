/*
 * XREFs of ?RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z @ 0x18007A50C
 * Callers:
 *     ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180071A20 (-v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077610 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@V_ea_180077610.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x180081768 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x1800817F8 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::CGlobals::RuntimeClassInitialize(
        ApplicationViewManagement::CGlobals *this,
        struct CApplicationViewManager *a2)
{
  signed __int32 v3; // eax
  __int64 v4; // rcx
  DWORD CurrentProcessId; // eax
  int v6; // eax
  __int64 v7; // rcx
  LSTATUS v8; // eax
  const char *v9; // r9
  __int64 v10; // rdx
  LSTATUS Key; // eax
  __int64 v12; // rcx
  HKEY v13; // rcx
  char *v15; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD pSessionId; // [rsp+60h] [rbp-A0h] BYREF
  DWORD dwDisposition[3]; // [rsp+64h] [rbp-9Ch] BYREF
  WCHAR SubKey[80]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  if ( *((struct CApplicationViewManager **)this + 5) != a2 )
  {
    if ( a2 )
    {
      do
        v3 = *((_DWORD *)a2 + 43);
      while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 43, v3 + 1, v3) );
    }
    v4 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  hKey = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId);
  v6 = StringCchPrintfW(
         SubKey,
         75LL,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SessionInfo\\%d",
         pSessionId);
  v7 = (unsigned int)v6;
  if ( v6 >= 0 )
  {
    v8 = RegCreateKeyExW(HKEY_CURRENT_USER, SubKey, 0, 0LL, 1u, 4u, 0LL, &hKey, dwDisposition);
    v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v8 <= 0 )
      v7 = (unsigned int)v8;
  }
  LODWORD(v15) = v7;
  if ( (int)v7 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[11],long &>(
      v7,
      &v15);
    v9 = (const char *)(unsigned int)v15;
    if ( (int)v15 >= 0 )
      goto LABEL_20;
    v10 = 15LL;
    goto LABEL_19;
  }
  Key = RegCreateKeyExW(hKey, L"ApplicationViewManagement", 0, 0LL, 1u, 0xF003Fu, 0LL, (PHKEY)this + 4, 0LL);
  v12 = (unsigned __int16)Key | 0x80070000;
  if ( Key <= 0 )
    v12 = (unsigned int)Key;
  LODWORD(v15) = v12;
  if ( (int)v12 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
      v12,
      &v15);
    v9 = (const char *)(unsigned int)v15;
    if ( (int)v15 < 0 )
    {
      v10 = 32LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        v9);
    }
  }
LABEL_20:
  v13 = hKey;
  hKey = 0LL;
  if ( v13 )
    RegCloseKey(v13);
  return 0LL;
}

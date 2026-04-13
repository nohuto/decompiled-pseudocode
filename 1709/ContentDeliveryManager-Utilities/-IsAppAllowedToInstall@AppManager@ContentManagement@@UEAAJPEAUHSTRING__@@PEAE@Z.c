/*
 * XREFs of ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18000C760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000EB98 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18001C7B8 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800547D8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsAppAllowedToInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability(
              (CallerIdentity *)L"storeAppInstall",
              (const unsigned __int16 *)&v16,
              a3) < 0
    || !(_BYTE)v16 )
  {
    return 2147942405LL;
  }
  v16 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 56),
                        &v16);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x9C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v16 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v16 + 16LL))(v16);
    return v7;
  }
  v17 = 0LL;
  v9 = v16;
  v10 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, __int64 *))(*(_QWORD *)v16 + 192LL))(
          v16,
          a2,
          &v17);
  if ( v10 < 0 )
  {
    v11 = 161LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
    return (unsigned int)v10;
  }
  v13 = v17;
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v17);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v13 + 64LL))(v13, a3);
  if ( v10 < 0 )
  {
    v11 = 163LL;
    goto LABEL_9;
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}

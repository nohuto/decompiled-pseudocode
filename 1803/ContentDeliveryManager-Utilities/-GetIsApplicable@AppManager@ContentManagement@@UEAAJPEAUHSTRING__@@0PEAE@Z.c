/*
 * XREFs of ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18000D790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000F97C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18001F498 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058550 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetIsApplicable(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3,
        unsigned __int8 *a4)
{
  int AppInstallManager; // eax
  unsigned int v9; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v19; // [rsp+78h] [rbp+38h] BYREF

  v17[1] = -2LL;
  *a4 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability(
              (CallerIdentity *)L"storeAppInstall",
              (const unsigned __int16 *)&v19,
              a3) < 0
    || !(_BYTE)v19 )
  {
    return 2147942405LL;
  }
  v19 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        &v19);
  v9 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v19 + 16LL))(v19);
    return v9;
  }
  v17[0] = 0LL;
  v11 = v19;
  v12 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, bool *, _QWORD *))(*(_QWORD *)v19 + 144LL))(
          v19,
          a2,
          a3,
          v17);
  if ( v12 < 0 )
  {
    v13 = 190LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12);
    v14 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return (unsigned int)v12;
  }
  v15 = v17[0];
  v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v17[0]);
  if ( v12 >= 0 )
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v15 + 64LL))(v15, a4);
  if ( v12 < 0 )
  {
    v13 = 192LL;
    goto LABEL_9;
  }
  v16 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}

/*
 * XREFs of ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x18000D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000F97C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18001F498 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058550 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsStoreBlockedByPolicy(
        ContentManagement::AppManager *this,
        unsigned __int8 *a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v6; // ebx
  HRESULT v8; // eax
  HSTRING v9; // rdi
  HRESULT v10; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int16 v17; // [rsp+38h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v19[2]; // [rsp+48h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  HSTRING string; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER v22; // [rsp+78h] [rbp+17h] BYREF
  HSTRING v23; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v19[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a2 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v17, a3) < 0 || !(_BYTE)v17 )
    return 2147942405LL;
  v19[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v19);
  v6 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v19[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
    return v6;
  }
  v18 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US",
         0x50u,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    goto LABEL_24;
  }
  v9 = string;
  v23 = 0LL;
  v10 = WindowsCreateStringReference(L"Microsoft.WindowsStore", 0x16u, &v22, &v23);
  if ( v10 < 0 )
  {
LABEL_24:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    JUMPOUT(0x18000D5F7LL);
  }
  v11 = v19[0];
  v12 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v19[0] + 184LL))(
          v19[0],
          v23,
          v9,
          &v18);
  if ( v12 < 0 )
  {
    v13 = 153LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12);
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return (unsigned int)v12;
  }
  v15 = v18;
  v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v18);
  if ( v12 >= 0 )
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v15 + 64LL))(v15, a2);
  if ( v12 < 0 )
  {
    v13 = 155LL;
    goto LABEL_11;
  }
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}

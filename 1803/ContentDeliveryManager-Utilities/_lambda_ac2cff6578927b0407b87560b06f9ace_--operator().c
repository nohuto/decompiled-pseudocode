/*
 * XREFs of _lambda_ac2cff6578927b0407b87560b06f9ace_::operator() @ 0x18000E880
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18000E560 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000F97C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001FC08 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_ac2cff6578927b0407b87560b06f9ace_::operator()(__int64 a1)
{
  int AppInstallManager; // eax
  int v3; // edi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v4; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v12; // [rsp+28h] [rbp-58h]
  char v13; // [rsp+30h] [rbp-50h]
  char v14; // [rsp+38h] [rbp-48h]
  char v15; // [rsp+40h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v20; // [rsp+C8h] [rbp+48h] BYREF

  v20 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(*(ContentManagement::AppManager **)a1, &v20);
  v3 = AppInstallManager;
  v4 = v20;
  if ( AppInstallManager >= 0 )
  {
    v18 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v20)(
           v20,
           &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
           &v18);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v17 = 0LL;
      v15 = 0;
      v14 = **(_BYTE **)(a1 + 48);
      v13 = **(_BYTE **)(a1 + 40);
      v12 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL))(
             v18,
             **(_QWORD **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24),
             **(_QWORD **)(a1 + 32),
             v12,
             v13,
             v14,
             v15,
             **(_QWORD **)(a1 + 56),
             0LL,
             &v17);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v19 = 0LL;
        v7 = v17;
        v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(v17);
        if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v19), v3 < 0) )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x164,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v3);
        else
          v3 = 0;
        v8 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x164,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v6);
      }
      v9 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}

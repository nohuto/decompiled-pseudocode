/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x18000EE00
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x18000D380 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007E94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x18000CF80 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000F97C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180018390 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001FE94 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::AppManager::GetEntitlementInternal(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        unsigned __int8 a6,
        HSTRING a7)
{
  int AppInstallManager; // eax
  int Entitlement; // edi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  HSTRING *v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v29[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-28h] BYREF
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v33[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HSTRING v35; // [rsp+98h] [rbp+38h] BYREF

  v35 = a4;
  v33[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  v33[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this, v33);
  Entitlement = AppInstallManager;
  v11 = v33[0];
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)AppInstallManager);
    goto LABEL_37;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetCachedFeatureEnabledState();
  LODWORD(v35) = 0;
  BYTE4(v35) = 3;
  v29[0] = 0;
  LOWORD(v29[1]) = WORD2(v35);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data,
    0x312BB7u,
    (const struct FEATURE_LOGGED_TRAITS *)v29,
    1,
    3u);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v13 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v12);
  Entitlement = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v13);
LABEL_36:
    WindowsDeleteString(string);
    goto LABEL_37;
  }
  v30 = 0LL;
  v14 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v11)(
          v11,
          &GUID_260a2a16_5a9e_4ebd_b944_f2ba75c31159,
          &v30);
  Entitlement = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v14);
LABEL_34:
    v27 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
    }
    goto LABEL_36;
  }
  *(_QWORD *)v29 = 0LL;
  v15 = *v30;
  if ( a6 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v15 + 64))(v30, string, a7, a5, v29);
    Entitlement = v16;
    if ( v16 < 0 )
    {
      v17 = 394LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v16);
LABEL_32:
      v26 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 )
      {
        *(_QWORD *)v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      goto LABEL_34;
    }
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v15 + 48))(v30, string, a7, a5, v29);
    Entitlement = v16;
    if ( v16 < 0 )
    {
      v17 = 398LL;
      goto LABEL_14;
    }
  }
  v31 = 0LL;
  v18 = *(_QWORD *)v29;
  Entitlement = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>>(*(_QWORD *)v29);
  if ( Entitlement < 0
    || (Entitlement = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v31), Entitlement < 0) )
  {
    v21 = 402LL;
    goto LABEL_29;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v31 + 48LL))(v31, &v35);
  Entitlement = v19;
  if ( v19 < 0 )
  {
    v20 = (unsigned int)v19;
    v21 = 405LL;
    goto LABEL_30;
  }
  if ( (_DWORD)v35 )
  {
    Entitlement = -2147467259;
    v21 = 406LL;
LABEL_29:
    v20 = (unsigned int)Entitlement;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v20);
    v25 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_32;
  }
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *(_QWORD *)v29;
  if ( *(_QWORD *)v29 )
  {
    *(_QWORD *)v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
  }
  WindowsDeleteString(string);
  Entitlement = 0;
LABEL_37:
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)Entitlement;
}

/*
 * XREFs of ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CortanaOasis@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009E174 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CortanaOasis@@@wil@@CA-AW4wi.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AE530 (-Release@-$RuntimeClass@U-$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800BA138 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 *     ??1?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800BE4B8 (--1-$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U-$default_delete@VCortanaPositionerS.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800BE5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE6A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICortanaExperienceManager@Experience@Shell@Inte.c)
 *     ??$Make@VCortanaExperienceManagerNotification@@QEAVCortanaSharedExperienceManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCortanaExperienceManagerNotification@@@12@$$QEBQEAVCortanaSharedExperienceManager@@@Z @ 0x1800BEDB8 (--$Make@VCortanaExperienceManagerNotification@@QEAVCortanaSharedExperienceManager@@@Details@WRL@.c)
 *     ??$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVCortanaExperienceManagerNotification@@@wil@@YA?AV?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@$$QEAPEAVCortanaExperienceManagerNotification@@@Z @ 0x1800BEE94 (--$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVC.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x1800BF738 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CortanaExperienceManagerFactory::GetExperienceManager(
        CortanaExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  __int64 v5; // rcx
  wil::details_abi *v6; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v8; // rsi
  __int64 v9; // rax
  CortanaSharedExperienceManager *v10; // rax
  int Interface; // edi
  CortanaSharedExperienceManager *v12; // r14
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  __int16 v18; // [rsp+3Ch] [rbp-55h]
  __int16 v19; // [rsp+48h] [rbp-49h]
  int v20[2]; // [rsp+50h] [rbp-41h] BYREF
  int v21; // [rsp+58h] [rbp-39h]
  int v22; // [rsp+5Ch] [rbp-35h]
  __int64 v23; // [rsp+60h] [rbp-31h]
  CortanaSharedExperienceManager *v24; // [rsp+68h] [rbp-29h] BYREF
  __int64 v25; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+78h] [rbp-19h] BYREF
  struct IServiceProvider *v27; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v28[8]; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v29[2]; // [rsp+90h] [rbp-1h] BYREF
  const char *v30; // [rsp+98h] [rbp+7h]
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  __int16 v32; // [rsp+A8h] [rbp+17h]
  __int64 v33; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  int v35; // [rsp+108h] [rbp+77h] BYREF
  __int16 v36; // [rsp+10Ch] [rbp+7Bh]
  int v37; // [rsp+110h] [rbp+7Fh] BYREF
  __int16 v38; // [rsp+114h] [rbp+83h]

  v33 = -2LL;
  *a3 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CortanaOasis>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CortanaOasis>::GetCachedFeatureEnabledState(this);
  LOBYTE(v18) = 3;
  v35 = 0;
  v36 = v18;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CortanaOasis>::GetFeaturePropertyCache'::`2'::data,
    0x80ABE4u,
    (const struct FEATURE_LOGGED_TRAITS *)&v35,
    1,
    3);
  *(_QWORD *)v29 = retaddr;
  v30 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanaexperiencemanager.cpp";
  v31 = 0LL;
  v32 = 3556;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CortanaOasis>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CortanaOasis>::GetCachedFeatureEnabledState(v5);
  LOBYTE(v19) = 3;
  v37 = 0;
  v38 = v19;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CortanaOasis>::GetFeaturePropertyCache'::`2'::data,
    0x80ABE4u,
    (const struct FEATURE_LOGGED_TRAITS *)&v37,
    1,
    3);
  LOBYTE(v6) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v6);
  v8 = ThreadLocalDataCache;
  *(_QWORD *)v20 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v22 = *((_DWORD *)ThreadLocalDataCache + 4);
    v21 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v21;
    v8 = *(struct wil::details_abi::ThreadLocalData **)v20;
  }
  v9 = 2LL;
  do
  {
    *a3 = 0LL;
    --v9;
  }
  while ( v9 );
  v10 = (CortanaSharedExperienceManager *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v10 )
  {
    Interface = -2147024882;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x645,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)Interface);
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)Interface,
      (__int64)v20,
      (struct wil::ThreadErrorContext *)0x80ABE4,
      (__int64)v29);
    goto LABEL_23;
  }
  v12 = CortanaSharedExperienceManager::CortanaSharedExperienceManager(v10);
  v27 = a2;
  v24 = v12;
  Microsoft::WRL::Details::Make<CortanaExperienceManagerNotification,CortanaSharedExperienceManager * const>(&v25, &v24);
  v13 = v25;
  v26 = v25;
  v14 = (__int64 *)wil::make_unique_nothrow<TwinUI::Cortana::CortanaPositionerSelector,IServiceProvider * &,CortanaExperienceManagerNotification *>(
                     v28,
                     &v27,
                     &v26);
  v15 = *v14;
  *v14 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::CortanaPositionerSelector,wistd::default_delete<TwinUI::Cortana::CortanaPositionerSelector>>::~unique_ptr<TwinUI::Cortana::CortanaPositionerSelector,wistd::default_delete<TwinUI::Cortana::CortanaPositionerSelector>>(v28);
  v23 = v15;
  v16 = CortanaSharedExperienceManager::RuntimeClassInitialize(v12);
  Interface = v16;
  if ( v16 >= 0 )
  {
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceManagerNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v13);
    Interface = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x122,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceManagerNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v13);
  }
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v12,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a3);
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v12);
  if ( Interface < 0 )
    goto LABEL_22;
LABEL_23:
  if ( v8 )
    *((_DWORD *)v8 + 4) = v22;
  if ( Interface >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xDE4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaexperiencemanager.cpp",
    (const char *)(unsigned int)Interface);
  return (unsigned int)Interface;
}

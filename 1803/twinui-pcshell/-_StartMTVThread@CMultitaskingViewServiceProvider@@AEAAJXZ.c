/*
 * XREFs of ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802685F4
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x180267570 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C584 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C5E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4Repor.c)
 *     ??0INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x180266CC0 (--0INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x1802671A0 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802671C0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1802671C0.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_StartMTVThread(IUnknown **this)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v2; // rax
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v3; // rbx
  __int64 *v4; // rsi
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v5; // rbx
  unsigned int LastError; // edi
  IUnknown *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  IUnknown *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  IUnknown *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  IUnknown *EventW; // rax
  const char *v54; // r9
  IUnknown *v55; // rcx
  IUnknown *v56; // rdi
  __int64 v57; // rdx
  void *v59; // [rsp+20h] [rbp-69h] BYREF
  void *v60; // [rsp+28h] [rbp-61h] BYREF
  void *v61; // [rsp+30h] [rbp-59h] BYREF
  void *v62; // [rsp+38h] [rbp-51h] BYREF
  void *v63; // [rsp+40h] [rbp-49h] BYREF
  void *v64; // [rsp+48h] [rbp-41h] BYREF
  void *v65; // [rsp+50h] [rbp-39h] BYREF
  void *v66; // [rsp+58h] [rbp-31h] BYREF
  void *v67; // [rsp+60h] [rbp-29h] BYREF
  void *v68; // [rsp+68h] [rbp-21h] BYREF
  void *v69; // [rsp+70h] [rbp-19h] BYREF
  void *v70; // [rsp+78h] [rbp-11h] BYREF
  void *v71; // [rsp+80h] [rbp-9h] BYREF
  void *v72; // [rsp+88h] [rbp-1h] BYREF
  void *v73; // [rsp+90h] [rbp+7h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+Fh] BYREF
  IUnknown *v75[8]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  int v77; // [rsp+F8h] [rbp+6Fh] BYREF
  CMultitaskingViewServiceProvider *v78; // [rsp+100h] [rbp+77h] BYREF
  void *v79; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)operator new(
                                                               0xC0uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xC0uLL);
    v4 = (__int64 *)CMultitaskingViewServiceProvider::INIT_THREAD_DATA::INIT_THREAD_DATA(v3);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v4;
  if ( !v4 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_128;
  }
  v78 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v78);
  v78 = 0LL;
  if ( InlineIsEqualGUID(&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v78 = (CMultitaskingViewServiceProvider *)this;
    v7 = *this;
  }
  else
  {
    if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::CanCastTo(
                (__int64)this,
                &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                &v78) < 0 )
      goto LABEL_11;
    v7 = *(IUnknown **)v78;
  }
  ((void (*)(void))v7[1].lpVtbl)();
LABEL_11:
  v77 = 2;
  v79 = v78;
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         v4,
         &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
         (IUnknown **)&v79,
         &v77);
  LastError = v8;
  if ( v8 >= 0 )
  {
    v10 = this[28];
    v77 = 2;
    v79 = v10;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 1);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 1);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v4 + 1,
           &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
           (IUnknown **)&v79,
           &v77);
    LastError = v8;
    if ( v8 < 0 )
    {
      v9 = 268LL;
      goto LABEL_15;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v11 = IUnknown_QueryService(
            this[2],
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            &ppvOut);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 271LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11);
LABEL_126:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_127;
    }
    v77 = 2;
    v79 = ppvOut;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 3);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 3);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 3,
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            (IUnknown **)&v79,
            &v77);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 272LL;
      goto LABEL_20;
    }
    v73 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v73);
    v13 = IUnknown_QueryService(
            this[2],
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v73);
    LastError = v13;
    if ( v13 < 0 )
    {
      v14 = 275LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13);
LABEL_125:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v73);
      goto LABEL_126;
    }
    v77 = 2;
    v79 = v73;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 2);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 2);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 2,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            (IUnknown **)&v79,
            &v77);
    LastError = v13;
    if ( v13 < 0 )
    {
      v14 = 276LL;
      goto LABEL_25;
    }
    v72 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
    v15 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_VirtualDesktopManager,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            &v72);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 279LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15);
LABEL_124:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
      goto LABEL_125;
    }
    v77 = 2;
    v79 = v72;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 4);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 4);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 4,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            (IUnknown **)&v79,
            &v77);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 280LL;
      goto LABEL_30;
    }
    v71 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
    v17 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_VirtualDesktopPinnedApps,
            &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
            &v71);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 283LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v17);
LABEL_123:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
      goto LABEL_124;
    }
    v77 = 2;
    v79 = v71;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 5);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 5);
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 5,
            &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
            (IUnknown **)&v79,
            &v77);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 284LL;
      goto LABEL_35;
    }
    v70 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    v19 = IUnknown_QueryService(
            this[2],
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v70);
    LastError = v19;
    if ( v19 < 0 )
    {
      v20 = 287LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v19);
LABEL_122:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
      goto LABEL_123;
    }
    v77 = 2;
    v79 = v70;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 6);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 6);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 6,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            (IUnknown **)&v79,
            &v77);
    LastError = v19;
    if ( v19 < 0 )
    {
      v20 = 288LL;
      goto LABEL_40;
    }
    v69 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
    v21 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_VirtualDesktopNotificationService,
            &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            &v69);
    LastError = v21;
    if ( v21 < 0 )
    {
      v22 = 291LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v21);
LABEL_121:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
      goto LABEL_122;
    }
    v77 = 2;
    v79 = v69;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 7);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 7);
    v21 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 7,
            &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            (IUnknown **)&v79,
            &v77);
    LastError = v21;
    if ( v21 < 0 )
    {
      v22 = 292LL;
      goto LABEL_45;
    }
    v68 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v68);
    v23 = IUnknown_QueryService(this[2], &stru_1803B0C48, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &v68);
    LastError = v23;
    if ( v23 < 0 )
    {
      v24 = 295LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v23);
LABEL_120:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v68);
      goto LABEL_121;
    }
    v77 = 2;
    v79 = v68;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 8);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 8);
    v23 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 8,
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            (IUnknown **)&v79,
            &v77);
    LastError = v23;
    if ( v23 < 0 )
    {
      v24 = 296LL;
      goto LABEL_50;
    }
    v67 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
    ((void (__fastcall *)(IUnknown *, GUID *, void **))this[25]->lpVtbl->QueryInterface)(
      this[25],
      &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
      &v67);
    v79 = v67;
    v77 = 2;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 9);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 9);
    v25 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 9,
            &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            (IUnknown **)&v79,
            &v77);
    LastError = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v25);
LABEL_119:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
      goto LABEL_120;
    }
    v26 = this[22];
    v66 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
    v27 = ((__int64 (__fastcall *)(IUnknown *, void **))v26->lpVtbl[2].QueryInterface)(v26, &v66);
    LastError = v27;
    if ( v27 < 0 )
    {
      v28 = 303LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v27);
LABEL_118:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
      goto LABEL_119;
    }
    v77 = 2;
    v79 = v66;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 10);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 10);
    v27 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 10,
            &GUID_ddc50c84_64c9_4fa3_9109_d8e7645b7ebc,
            (IUnknown **)&v79,
            &v77);
    LastError = v27;
    if ( v27 < 0 )
    {
      v28 = 304LL;
      goto LABEL_57;
    }
    v65 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v65);
    v29 = IUnknown_QueryService(this[2], &stru_1803B0C38, &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7, &v65);
    LastError = v29;
    if ( v29 < 0 )
    {
      v30 = 307LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v29);
LABEL_117:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v65);
      goto LABEL_118;
    }
    v77 = 2;
    v79 = v65;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 11);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 11);
    v29 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 11,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            (IUnknown **)&v79,
            &v77);
    LastError = v29;
    if ( v29 < 0 )
    {
      v30 = 308LL;
      goto LABEL_62;
    }
    v64 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
    v31 = ((__int64 (__fastcall *)(IUnknown *, GUID *, void **))this[26]->lpVtbl->QueryInterface)(
            this[26],
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v64);
    LastError = v31;
    if ( v31 < 0 )
    {
      v32 = 311LL;
LABEL_67:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v31);
LABEL_116:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
      goto LABEL_117;
    }
    v77 = 2;
    v79 = v64;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 12);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 12);
    v31 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 12,
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            (IUnknown **)&v79,
            &v77);
    LastError = v31;
    if ( v31 < 0 )
    {
      v32 = 312LL;
      goto LABEL_67;
    }
    v63 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
    v33 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v63);
    LastError = v33;
    if ( v33 < 0 )
    {
      v34 = 315LL;
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v33);
LABEL_115:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
      goto LABEL_116;
    }
    v77 = 2;
    v79 = v63;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 13);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 13);
    v33 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 13,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            (IUnknown **)&v79,
            &v77);
    LastError = v33;
    if ( v33 < 0 )
    {
      v34 = 316LL;
      goto LABEL_72;
    }
    v62 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
    v35 = IUnknown_QueryService(
            this[2],
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v62);
    LastError = v35;
    if ( v35 < 0 )
    {
      v36 = 319LL;
LABEL_77:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v36,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v35);
LABEL_114:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
      goto LABEL_115;
    }
    v77 = 2;
    v79 = v62;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 14);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 14);
    v35 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 14,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            (IUnknown **)&v79,
            &v77);
    LastError = v35;
    if ( v35 < 0 )
    {
      v36 = 320LL;
      goto LABEL_77;
    }
    v61 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    v37 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_ApplicationViewIconLoaderService,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v61);
    LastError = v37;
    if ( v37 < 0 )
    {
      v38 = 323LL;
LABEL_82:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v37);
LABEL_113:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
      goto LABEL_114;
    }
    v77 = 2;
    v79 = v61;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 15);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 15);
    v37 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 15,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            (IUnknown **)&v79,
            &v77);
    LastError = v37;
    if ( v37 < 0 )
    {
      v38 = 324LL;
      goto LABEL_82;
    }
    v60 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
    v39 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v60);
    LastError = v39;
    if ( v39 < 0 )
    {
      v40 = 327LL;
LABEL_87:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v39);
      goto LABEL_112;
    }
    v77 = 2;
    v79 = v60;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 18);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 18);
    v39 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 18,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (IUnknown **)&v79,
            &v77);
    LastError = v39;
    if ( v39 < 0 )
    {
      v40 = 328LL;
      goto LABEL_87;
    }
    wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(v41, 3u, v42);
    v79 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v79);
    v43 = IUnknown_QueryService(
            this[2],
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &v79);
    LastError = v43;
    if ( v43 < 0 )
    {
      v44 = 333LL;
LABEL_92:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v43);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v79);
      goto LABEL_112;
    }
    v77 = 2;
    v59 = v79;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 19);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 19);
    v43 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 19,
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            (IUnknown **)&v59,
            &v77);
    LastError = v43;
    if ( v43 < 0 )
    {
      v44 = 334LL;
      goto LABEL_92;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v79);
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v45, 3u, v46);
    v59 = 0LL;
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v59);
    v47 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_VirtualDesktopDataSource,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v59);
    LastError = v47;
    if ( v47 >= 0 )
    {
      v77 = 2;
      v75[0] = (IUnknown *)v59;
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 16);
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 16);
      v47 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v4 + 16,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v75,
              &v77);
      LastError = v47;
      if ( v47 >= 0 )
      {
        v79 = 0LL;
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v79);
        v49 = IUnknown_QueryService(
                this[2],
                (const GUID *const)&SID_VirtualDesktopController,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                &v79);
        LastError = v49;
        if ( v49 >= 0 )
        {
          v77 = 2;
          v75[0] = (IUnknown *)v79;
          Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 17);
          Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(v4 + 17);
          v49 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                  v4 + 17,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  v75,
                  &v77);
          LastError = v49;
          if ( v49 >= 0 )
          {
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v79);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v59);
            wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v51, 3u, v52);
            EventW = (IUnknown *)CreateEventW(0LL, 1, 0, 0LL);
            v55 = this[29];
            v56 = EventW;
            this[29] = 0LL;
            if ( (unsigned __int64)&v55[-1].lpVtbl + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v55);
            this[29] = v56;
            if ( v56 )
            {
              v4[23] = (__int64)v56;
              v5 = 0LL;
              if ( SHCreateThread(
                     CMultitaskingViewServiceProvider::s_RunMTVThread,
                     v4,
                     8u,
                     (LPTHREAD_START_ROUTINE)CActionCenterExperienceManager::IsHintSupported) )
              {
                LastError = 0;
                goto LABEL_112;
              }
              CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'((CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v4);
              v57 = 375LL;
            }
            else
            {
              v57 = 366LL;
            }
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)v57,
                          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                          v54);
LABEL_112:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
            goto LABEL_113;
          }
          v50 = 345LL;
        }
        else
        {
          v50 = 344LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v50,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v49);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v79);
LABEL_103:
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v59);
        goto LABEL_112;
      }
      v48 = 341LL;
    }
    else
    {
      v48 = 340LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v47);
    goto LABEL_103;
  }
  v9 = 266LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v8);
LABEL_127:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v78);
LABEL_128:
  if ( v5 )
    CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(v5);
  return LastError;
}

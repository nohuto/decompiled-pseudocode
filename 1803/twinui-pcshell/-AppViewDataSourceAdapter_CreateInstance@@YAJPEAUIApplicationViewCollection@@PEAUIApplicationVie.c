/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@333PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180235380
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18020BEF0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x1800A05F4 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T44@Z @ 0x180233914 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEA.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802356D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VAp.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x180236930 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter_CreateInstance(
        struct IApplicationViewCollection *a1,
        struct IAppViewDataSourceAdapter **a2,
        struct IImmersiveShellHookService *a3,
        struct IInspectable *a4,
        struct IInspectable *a5,
        struct IInspectable *a6,
        struct IInspectable *a7,
        struct IAppViewDataSourceAdapter **a8)
{
  struct IAppViewDataSourceAdapter **v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // r9
  int CanCastTo; // edi
  AppViewDataSourceAdapter *v12; // rcx
  const char *v13; // r9
  __int64 result; // rax
  struct IImmersiveShellHookService *v15; // [rsp+40h] [rbp-38h] BYREF
  struct IApplicationViewIconLoader *v16[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IApplicationViewCollection *v18; // [rsp+80h] [rbp+8h] BYREF
  struct IAppViewDataSourceAdapter **v19; // [rsp+88h] [rbp+10h] BYREF
  AppViewDataSourceAdapter *v20; // [rsp+90h] [rbp+18h] BYREF
  struct IInspectable *v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  v16[1] = (struct IApplicationViewIconLoader *)-2LL;
  v15 = 0LL;
  v16[0] = 0LL;
  try
  {
    v8 = a8;
    *a8 = 0LL;
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(&v19, &v21);
    a8 = v19;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,std::nullptr_t,std::nullptr_t,std::nullptr_t>(
      &v20,
      &v18,
      v16,
      &v15,
      (struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **)&a8);
    *v8 = 0LL;
    if ( InlineIsEqualGUID(&GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v12 = v20;
      *v8 = v20;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v20 + 8,
                    v10,
                    v8);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(struct IAppViewDataSourceAdapter *))(*(_QWORD *)*v8 + 8LL))(*v8);
    }
    if ( CanCastTo < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        205LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)CanCastTo);
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v20);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD0,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v13);
  }
  return result;
}

/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18023551C
 * Callers:
 *     _lambda_e13c9660f56a8071ad8948355737f92d_::operator() @ 0x1801FA61C (_lambda_e13c9660f56a8071ad8948355737f92d_--operator().c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180217100 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802187B0 (-Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
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
        struct IApplicationViewIconLoader *a2,
        struct IImmersiveShellHookService *a3,
        struct IInspectable *a4,
        struct IAppViewDataSourceAdapter **a5)
{
  struct IAppViewDataSourceAdapter **v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // r9
  int CanCastTo; // edi
  struct IAppViewDataSourceAdapter **v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IApplicationViewCollection *v16; // [rsp+80h] [rbp+8h] BYREF
  struct IApplicationViewIconLoader *v17; // [rsp+88h] [rbp+10h] BYREF
  struct IImmersiveShellHookService *v18; // [rsp+90h] [rbp+18h] BYREF
  struct IInspectable *v19; // [rsp+98h] [rbp+20h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v14 = -2LL;
  try
  {
    v5 = a5;
    *a5 = 0LL;
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(&v12, &v19);
    *(_QWORD *)v13 = v12;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,std::nullptr_t,std::nullptr_t,std::nullptr_t>(
      (AppViewDataSourceAdapter **)&a5,
      &v16,
      &v17,
      &v18,
      (struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **)v13);
    *v5 = 0LL;
    if ( InlineIsEqualGUID(&GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v9 = a5;
      *v5 = (struct IAppViewDataSourceAdapter *)a5;
      (*((void (__fastcall **)(struct IAppViewDataSourceAdapter **))*v9 + 1))(v9);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
                    a5 + 1,
                    v7,
                    v5);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(struct IAppViewDataSourceAdapter *))(*(_QWORD *)*v5 + 8LL))(*v5);
    }
    if ( CanCastTo < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        179LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)CanCastTo);
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&a5);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0xB6,
                    (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                    v10);
    return (unsigned int)a5;
  }
  return result;
}

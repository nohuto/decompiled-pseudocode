/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180192594
 * Callers:
 *     ?SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z @ 0x1801479BC (-SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z.c)
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180158300 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18016CE70 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18016E9F0 (-Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourceAdapter@@UIApplicationViewChangeListener@@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B95E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourc.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourceAdapter@@UIApplicationViewChangeListener@@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180192A10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDa.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180193760 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  int v6; // eax
  __int64 v7; // rax
  int Interface; // eax
  const char *v9; // r9
  volatile signed __int64 *v10; // rcx
  __int64 result; // rax
  int v12[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationViewCollection *v15; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationViewIconLoader *v16; // [rsp+58h] [rbp+10h] BYREF
  struct IImmersiveShellHookService *v17; // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v13 = -2LL;
  try
  {
    v5 = a5;
    *a5 = 0LL;
    if ( a4 )
    {
      v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a4->lpVtbl->QueryInterface)(
             a4,
             &GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84,
             &v18);
      if ( v6 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x15FD,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v6);
      v7 = v18;
    }
    else
    {
      v7 = 0LL;
      v18 = 0LL;
    }
    *(_QWORD *)v12 = v7;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
      (unsigned int)&a5,
      (unsigned int)&v15,
      (unsigned int)&v16,
      (unsigned int)&v17,
      (__int64)v12);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::QueryInterface(
                  a5,
                  &GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223,
                  v5);
    if ( Interface < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x19A,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)Interface);
    v10 = (volatile signed __int64 *)a5;
    if ( a5 )
    {
      a5 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v10);
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x19D,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v9);
  }
  return result;
}

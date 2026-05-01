/*
 * XREFs of ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180193760
 * Callers:
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180192594 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourceAdapter@@UIApplicationViewChangeListener@@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B95E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourc.c)
 *     ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x180190FF0 (--0AppViewDataSourceAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x1801912A8 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIAppl.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int64 **__fastcall wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
        volatile signed __int64 **a1,
        struct IApplicationViewCollection **a2,
        struct IApplicationViewIconLoader **a3,
        struct IImmersiveShellHookService **a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **a5)
{
  AppViewDataSourceAdapter *v9; // rax
  int v10; // edi
  volatile signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a1 = 0LL;
  v9 = (AppViewDataSourceAdapter *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    v10 = -2147024882;
    goto LABEL_16;
  }
  v11 = (volatile signed __int64 *)AppViewDataSourceAdapter::AppViewDataSourceAdapter(v9);
  v10 = AppViewDataSourceAdapter::RuntimeClassInitialize((AppViewDataSourceAdapter *)v11, *a2, *a3, *a4, *a5);
  if ( v10 >= 0 )
  {
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 11);
      while ( v12 >= 0 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64(v11 + 11, v12 + 1, v12);
        if ( v13 == v12 )
          goto LABEL_12;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
    }
LABEL_12:
    *a1 = v11;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v11);
    v10 = 0;
  }
  else if ( v11 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v11);
  }
  if ( v10 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"internal\\sdk\\inc\\wil/wrl.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  return a1;
}

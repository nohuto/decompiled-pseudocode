/*
 * XREFs of ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIInspectable@@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@55@Z @ 0x1802334EC
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T44@Z @ 0x180233914 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x180234794 (--0AppViewDataSourceAdapter@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAAXPEAVAppViewDataSourceAdapter@@@Z @ 0x1802356A8 (-Attach@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAAXPEAVAppViewDataSourceAdapter@@@.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x180236930 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@44@Z @ 0x1802378E8 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIAppl.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewDataSourceAdapter,AppViewDataSourceAdapter,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,IInspectable * &,IInspectable * &,IInspectable * &>(
        AppViewDataSourceAdapter **a1,
        struct IApplicationViewCollection **a2,
        struct IApplicationViewIconLoader **a3,
        struct IImmersiveShellHookService **a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **a5,
        AppViewDataSourceAdapter *a6)
{
  AppViewDataSourceAdapter *v10; // rax
  int v11; // edi
  AppViewDataSourceAdapter *v12; // rax
  struct IImmersiveShellHookService *v13; // r9
  AppViewDataSourceAdapter *v14; // rbx
  volatile int *v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  struct IInspectable *v19; // [rsp+28h] [rbp-20h]
  struct IInspectable *v20; // [rsp+30h] [rbp-18h]
  struct IInspectable *v21; // [rsp+38h] [rbp-10h]
  AppViewDataSourceAdapter *v22; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (AppViewDataSourceAdapter *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  a6 = v10;
  if ( v10 )
  {
    v12 = AppViewDataSourceAdapter::AppViewDataSourceAdapter(v10);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::Attach(&v22, v12);
    v13 = *a4;
    v14 = v22;
    v11 = AppViewDataSourceAdapter::RuntimeClassInitialize(v22, *a2, *a3, v13, *a5, v19, v20, v21);
    if ( v11 >= 0 )
    {
      if ( v14 )
      {
        v16 = *((_QWORD *)v14 + 30);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 30, v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v16 + 16),
          v15);
LABEL_11:
        v14 = v22;
      }
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v22);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}

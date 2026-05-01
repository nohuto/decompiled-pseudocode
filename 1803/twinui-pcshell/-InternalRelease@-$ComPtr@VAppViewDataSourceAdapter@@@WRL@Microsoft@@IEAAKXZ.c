/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x180236930
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIInspectable@@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@55@Z @ 0x1802334EC (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIAp.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T44@Z @ 0x180233914 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEA.c)
 *     ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x180234BC0 (--1-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@333PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180235380 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18023551C (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIA_ea_18023551C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180237710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppV_ea_180237710.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}

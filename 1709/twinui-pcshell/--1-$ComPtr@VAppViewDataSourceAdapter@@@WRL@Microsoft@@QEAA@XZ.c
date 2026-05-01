/*
 * XREFs of ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B939C
 * Callers:
 *     _StartExperienceManagerFactory::GetExperienceManager_::_1_::dtor$2 @ 0x1801EB6A5 (_StartExperienceManagerFactory--GetExperienceManager_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1 @ 0x1801F5D2D (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64_IImmersiveShellHookService_____ptr64_&___ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64__::_1_::dtor$0 @ 0x1801F5E16 (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_-__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourceAdapter@@UIApplicationViewChangeListener@@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B95E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourc.c)
 */

int __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(
        CStartExperienceManager **a1)
{
  CStartExperienceManager *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return (int)v1;
}

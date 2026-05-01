/*
 * XREFs of ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18019E1A8
 * Callers:
 *     ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x18019E3C0 (--_GPrivilegedOperationsService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955F4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18019F5F8 (-InternalRelease@-$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18019F618 (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18019F638 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1802B4D6C (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D35A8 (-InternalRelease@-$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PrivilegedOperationsService::~PrivilegedOperationsService(PrivilegedOperationsService *this)
{
  volatile int **v1; // rbx
  volatile int *v3; // rdx

  PrivilegedOperationsService::s_this = 0LL;
  *(_QWORD *)this = &PrivilegedOperationsService::`vftable'{for `IInspectable'};
  v1 = (volatile int **)((char *)this + 168);
  *((_QWORD *)this + 1) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &PrivilegedOperationsService::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &PrivilegedOperationsService::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<CPrivilegedDesktopOperations>::InternalRelease((char *)this + 248);
  Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(v1 + 9);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 8);
  Microsoft::WRL::ComPtr<CPrivilegedDesktopOperations>::InternalRelease(v1 + 7);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 6);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 5);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 4);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 3);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 2);
  Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(v1 + 1);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(v1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v3);
}

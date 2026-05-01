/*
 * XREFs of ??1XamlLauncher@@UEAA@XZ @ 0x180225F00
 * Callers:
 *     ??_EXamlLauncher@@UEAAPEAXI@Z @ 0x180226220 (--_EXamlLauncher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1802271B8 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall XamlLauncher::~XamlLauncher(XamlLauncher *this)
{
  XamlLauncher::s_pLauncher = 0LL;
  *(_QWORD *)this = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>>>'};
  *((_QWORD *)this + 3) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>>>'};
  *((_QWORD *)this + 4) = &XamlLauncher::`vftable'{for `IImmersiveLauncherTrayNotify'};
  *((_QWORD *)this + 5) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>'};
  *((_QWORD *)this + 6) = &XamlLauncher::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 7) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>'};
  *((_QWORD *)this + 8) = &XamlLauncher::`vftable'{for `IImmersiveLauncherCortana'};
  *((_QWORD *)this + 9) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlLauncherStateCallback>'};
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((char *)this + 128);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  *((_DWORD *)this + 25) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 2);
}

/*
 * XREFs of ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x180225250
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180229EA0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIPenWorkspaceDiscoverBroker@@UIImmersiveShellComponent@@UIWindowManagementInputUsageEvents@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801EC388 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EC388.c)
 *     ??0ImmersiveMonitorHelper@@QEAA@XZ @ 0x180225AA0 (--0ImmersiveMonitorHelper@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1802271B8 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x18022B1D0 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
        ImmersiveMonitorHelper **a1,
        struct IServiceProvider **a2,
        struct IXamlLauncherState **a3)
{
  ImmersiveMonitorHelper *v6; // rax
  int v7; // ebx
  ImmersiveMonitorHelper *v8; // rdi
  volatile int *v9; // rdx
  ImmersiveMonitorHelper *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (ImmersiveMonitorHelper *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = ImmersiveMonitorHelper::ImmersiveMonitorHelper(v6);
    v11 = v8;
    v12 = 0LL;
    v7 = ImmersiveMonitorHelper::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::InternalAddRef(
          (__int64)v8,
          v9);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}

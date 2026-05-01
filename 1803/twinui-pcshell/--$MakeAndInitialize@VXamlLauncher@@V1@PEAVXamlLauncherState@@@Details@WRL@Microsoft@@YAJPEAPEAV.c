/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180225300
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x18022A980 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x180225B44 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x1802271D8 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802BAF5C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802BAF5C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        XamlLauncher **a1)
{
  unsigned int v2; // ebx
  XamlLauncher *v3; // rax
  XamlLauncher *v4; // rdi
  XamlLauncher *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (XamlLauncher *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = XamlLauncher::XamlLauncher(v3);
    v6 = v4;
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)v4 + 248);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::InternalAddRef(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}

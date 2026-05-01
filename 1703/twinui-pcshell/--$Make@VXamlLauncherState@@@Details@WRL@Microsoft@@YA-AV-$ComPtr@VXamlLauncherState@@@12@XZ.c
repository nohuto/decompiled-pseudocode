/*
 * XREFs of ??$Make@VXamlLauncherState@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VXamlLauncherState@@@12@XZ @ 0x18014F4D8
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x18014A3E0 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014DBA0 (-Release@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIXamlLauncherSta.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x18014FF70 (--0XamlLauncherState@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<XamlLauncherState>(volatile signed __int32 **a1)
{
  XamlLauncherState *v2; // rax
  XamlLauncherState *v3; // rdi

  *a1 = 0LL;
  v2 = (XamlLauncherState *)operator new(0x410uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = XamlLauncherState::XamlLauncherState(v2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<IXamlLauncherState,Microsoft::WRL::Details::InterfaceList<IImmersiveLauncherCortana,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = (volatile signed __int32 *)v3;
  }
  return a1;
}

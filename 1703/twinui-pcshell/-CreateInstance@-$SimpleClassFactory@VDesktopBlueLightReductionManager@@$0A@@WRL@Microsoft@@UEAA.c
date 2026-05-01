/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180084600
 * Callers:
 *     <none>
 * Callees:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180083184 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180084250 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$InterfaceList@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800842C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$Interfa.c)
 *     ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x1800849A4 (--0DesktopBlueLightReductionManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<DesktopBlueLightReductionManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rbx
  DesktopBlueLightReductionManager *v8; // rax
  int v9; // edi
  DesktopBlueLightReductionManager *v10; // rsi
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = (DesktopBlueLightReductionManager *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = DesktopBlueLightReductionManager::DesktopBlueLightReductionManager(v8);
      v9 = DesktopBlueLightReductionManager::RuntimeClassInitialize(v10);
      if ( v9 >= 0 )
      {
        v9 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
               (__int64)v10,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v11);
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v10);
        v7 = v11;
      }
      else if ( v10 )
      {
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v10);
      }
      if ( v9 >= 0 )
        v9 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v7)(v7, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return (unsigned int)v9;
  }
}

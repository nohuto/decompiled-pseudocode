/*
 * XREFs of ??$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180087354
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800872C0 (-CreateInstance@-$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180085DA4 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180086E50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiv.c)
 *     ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x18008740C (--0DesktopBlueLightReductionManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DesktopBlueLightReductionManager,IUnknown,>(__int64 *a1)
{
  DesktopBlueLightReductionManager *v2; // rax
  int Interface; // edi
  DesktopBlueLightReductionManager *v4; // rbx

  *a1 = 0LL;
  v2 = (DesktopBlueLightReductionManager *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = DesktopBlueLightReductionManager::DesktopBlueLightReductionManager(v2);
    Interface = DesktopBlueLightReductionManager::RuntimeClassInitialize(v4);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::QueryInterface(
                    (__int64)v4,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 43, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v4 + 5) + 64LL))((__int64)v4 + 40, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}

/*
 * XREFs of ??$Make@VApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18005B6C4
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D998C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewTitlebarConfiguration@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EAB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewTitlebarConfiguration@@U-_ea_18005EAB0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration>(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx
  _QWORD *v4; // rsi

  *a1 = 0LL;
  v2 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 8));
    *((_DWORD *)v3 + 9) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IApplicationViewTitlebarConfiguration'};
    *v4 = &ApplicationViewTitlebarConfiguration::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = &ApplicationViewTitlebarConfiguration::`vftable'{for `IApplicationViewTitlebarConfiguration'};
    *v4 = &ApplicationViewTitlebarConfiguration::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_DWORD *)v3 + 18) = 0;
    v3[76] = 0;
    *((_DWORD *)v3 + 20) = 0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewTitlebarConfiguration,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    *a1 = v3;
  }
  return a1;
}

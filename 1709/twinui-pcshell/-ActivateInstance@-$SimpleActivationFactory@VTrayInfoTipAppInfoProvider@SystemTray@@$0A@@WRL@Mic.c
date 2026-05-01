/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1801BB760
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BAEC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInf.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<SystemTray::TrayInfoTipAppInfoProvider,0>::ActivateInstance(
        __int64 a1,
        void **a2)
{
  char *v3; // rax
  char *v4; // rbx
  unsigned int Interface; // edi
  _QWORD *v6; // rdi

  *a2 = 0LL;
  v3 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v6 = v3 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 16));
    *((_QWORD *)v4 + 8) = 1LL;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v4 = &SystemTray::TrayInfoTipAppInfoProvider::`vftable';
    *((_QWORD *)v4 + 1) = &SystemTray::TrayInfoTipAppInfoProvider::`vftable'{for `IWeakReferenceSource'};
    *v6 = &SystemTray::TrayInfoTipAppInfoProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
                  v4,
                  (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}

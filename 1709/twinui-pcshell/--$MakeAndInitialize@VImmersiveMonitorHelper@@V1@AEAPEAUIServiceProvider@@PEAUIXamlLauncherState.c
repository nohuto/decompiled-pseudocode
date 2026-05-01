/*
 * XREFs of ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@@012@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1801842C4
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180180060 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x180186020 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
        volatile signed __int32 **a1,
        struct IServiceProvider **a2,
        struct IXamlLauncherState **a3)
{
  volatile signed __int32 *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // esi

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 15, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 40LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *a1 = 0LL;
  v7 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
    v7[2] = 0LL;
    *((_DWORD *)v7 + 15) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor>>::`vftable';
    v7[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor>>::`vftable'{for `IImmersiveMonitorNotification'};
    v7[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IActiveZBandNotificationForMonitor>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &ImmersiveMonitorHelper::`vftable';
    v8[3] = &ImmersiveMonitorHelper::`vftable'{for `IImmersiveMonitorNotification'};
    v8[4] = &ImmersiveMonitorHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IActiveZBandNotificationForMonitor>'};
    v8[8] = 0LL;
    v8[9] = 0LL;
    v8[10] = 0LL;
    *((_DWORD *)v8 + 22) = 0;
    *((_DWORD *)v8 + 23) = 0;
    v9 = ImmersiveMonitorHelper::RuntimeClassInitialize((ImmersiveMonitorHelper *)v8, *a2, *a3);
    if ( v9 >= 0 )
    {
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)v8 + 15);
      *a1 = (volatile signed __int32 *)v8;
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 15, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 40LL))(v8, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      return 0;
    }
    else if ( v8 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 15, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 40LL))(v8, 1LL);
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
  return (unsigned int)v9;
}

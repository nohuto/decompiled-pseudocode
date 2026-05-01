/*
 * XREFs of ??$MakeAndInitialize@VXamlTaskbarProxy@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@$$QEAPEAUIXamlTaskbarProxyHost@@@Z @ 0x1801493B4
 * Callers:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlTaskbarProxy@@QEAAJPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Z @ 0x180152C38 (-RuntimeClassInitialize@XamlTaskbarProxy@@QEAAJPEAUIImmersiveMonitor@@PEAVCreationThreadDispatch.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlTaskbarProxy,XamlTaskbarProxy,IImmersiveMonitor * &,CreationThreadDispatcher * &,IXamlTaskbarProxyHost *>(
        volatile signed __int32 **a1,
        struct IImmersiveMonitor **a2,
        struct CreationThreadDispatcher **a3,
        struct IXamlTaskbarProxyHost **a4)
{
  volatile signed __int32 *v6; // rcx
  char *v9; // rbx
  int v10; // esi

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *a1 = 0LL;
  v9 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    *(_QWORD *)v9 = &Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
    *((_DWORD *)v9 + 13) = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = &XamlTaskbarProxy::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v9 + 1) = &XamlTaskbarProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    *((_QWORD *)v9 + 12) = 0LL;
    InitializeSRWLock((PSRWLOCK)v9 + 13);
    v10 = XamlTaskbarProxy::RuntimeClassInitialize((XamlTaskbarProxy *)v9, *a2, *a3, *a4);
    if ( v10 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9 + 13);
      *a1 = (volatile signed __int32 *)v9;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 72LL))(v9, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      return 0;
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 72LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}

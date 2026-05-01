/*
 * XREFs of ??0ViewManagerBridge@@QEAA@XZ @ 0x18012A9D4
 * Callers:
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@@012@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129078 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

ViewManagerBridge *__fastcall ViewManagerBridge::ViewManagerBridge(ViewManagerBridge *this)
{
  _QWORD *v1; // rdi
  ViewManagerBridge *result; // rax

  v1 = (_QWORD *)((char *)this + 40);
  Microsoft::WRL::FtmBase::FtmBase((ViewManagerBridge *)((char *)this + 40));
  *((_DWORD *)this + 21) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `IViewManagerBridge'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `Navigation::Server::IShellViewManagerListener'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewManagerBridge::`vftable'{for `IViewManagerBridge'};
  *((_QWORD *)this + 1) = &ViewManagerBridge::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &ViewManagerBridge::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 3) = &ViewManagerBridge::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &ViewManagerBridge::`vftable'{for `Navigation::Server::IShellViewManagerListener'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_WORD *)this + 76) = 256;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}

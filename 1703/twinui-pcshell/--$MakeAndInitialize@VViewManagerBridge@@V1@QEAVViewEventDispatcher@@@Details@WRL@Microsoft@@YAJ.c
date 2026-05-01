/*
 * XREFs of ??$MakeAndInitialize@VViewManagerBridge@@V1@QEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@@012@$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE284
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1800F15E0 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FCBA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceList@UIMessageProxyLis.c)
 *     ??0ViewManagerBridge@@QEAA@XZ @ 0x1800FFF28 (--0ViewManagerBridge@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1801085DC (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher * const>(
        volatile signed __int32 **a1,
        struct ViewEventDispatcher **a2)
{
  volatile signed __int32 *v4; // rcx
  ViewManagerBridge *v5; // rax
  int v6; // esi
  volatile signed __int32 *v7; // rdi
  signed __int32 v8; // eax

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  *a1 = 0LL;
  v5 = (ViewManagerBridge *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = (volatile signed __int32 *)ViewManagerBridge::ViewManagerBridge(v5);
    v6 = ViewManagerBridge::RuntimeClassInitialize((ViewManagerBridge *)v7, *a2);
    if ( v6 >= 0 )
    {
      if ( v7 )
      {
        do
          v8 = *((_DWORD *)v7 + 17);
        while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v7 + 17, v8 + 1, v8) );
      }
      *a1 = v7;
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
      return 0;
    }
    else if ( v7 )
    {
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}

/*
 * XREFs of ??$MakeAndInitializeOrThrow@VXamlTaskbarProxy@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@wil@@YA?AV?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@$$QEAPEAUIXamlTaskbarProxyHost@@@Z @ 0x18011E848
 * Callers:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011DBEC (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@XamlTaskbarProxy@@QEAAJPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Z @ 0x180128838 (-RuntimeClassInitialize@XamlTaskbarProxy@@QEAAJPEAUIImmersiveMonitor@@PEAVCreationThreadDispatch.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeAndInitializeOrThrow<XamlTaskbarProxy,IImmersiveMonitor * &,CreationThreadDispatcher * &,IXamlTaskbarProxyHost *>(
        _QWORD *a1,
        struct IImmersiveMonitor **a2,
        struct CreationThreadDispatcher **a3,
        struct IXamlTaskbarProxyHost **a4)
{
  char *v8; // rbx
  int v9; // edi
  signed __int32 v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v8 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    v9 = -2147024882;
    goto LABEL_12;
  }
  *(_QWORD *)v8 = &Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 8));
  *((_DWORD *)v8 + 9) = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &XamlTaskbarProxy::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)v8 + 1) = &XamlTaskbarProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 9) = 0LL;
  *((_QWORD *)v8 + 10) = 0LL;
  InitializeSRWLock((PSRWLOCK)v8 + 11);
  v9 = XamlTaskbarProxy::RuntimeClassInitialize((XamlTaskbarProxy *)v8, *a2, *a3, *a4);
  if ( v9 >= 0 )
  {
    do
      v10 = *((_DWORD *)v8 + 9);
    while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 9, v10 + 1, v10) );
    *a1 = v8;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v8);
    v9 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v8);
  }
  if ( v9 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"internal\\sdk\\inc\\wil\\wrl.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  return a1;
}

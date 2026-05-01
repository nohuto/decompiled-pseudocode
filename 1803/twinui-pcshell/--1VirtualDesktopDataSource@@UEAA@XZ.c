/*
 * XREFs of ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x18025CF6C
 * Callers:
 *     ??_EVirtualDesktopDataSource@@UEAAPEAXI@Z @ 0x18025D340 (--_EVirtualDesktopDataSource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?clear@?$list@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@QEAAXXZ @ 0x18025F998 (-clear@-$list@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopDataSource::~VirtualDesktopDataSource(VirtualDesktopDataSource *this)
{
  char *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile int *v5; // rdx
  __int64 v6; // r10
  Microsoft::WRL::Details::EventTargetArray *v7; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v8)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v9)(); // rax

  v2 = (char *)*((_QWORD *)this + 35);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*((_QWORD *)this + 37) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  std::list<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>::clear((char *)this + 264);
  std::_Deallocate(*((char **)this + 33), 1uLL, 0x20uLL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  SmartCookie::Unregister((VirtualDesktopDataSource *)((char *)this + 128));
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 128,
    v3);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 128,
    v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *((_QWORD *)this + 11) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v6 + 12), v5) )
    {
      v8 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v7 + 24LL);
      if ( v8 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v7, (const struct std::nothrow_t *)1);
      else
        v8(v7, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v9 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v9 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v9)(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v5);
}

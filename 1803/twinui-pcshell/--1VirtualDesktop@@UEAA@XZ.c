/*
 * XREFs of ??1VirtualDesktop@@UEAA@XZ @ 0x180261D3C
 * Callers:
 *     ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x180261E80 (--_GVirtualDesktop@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::~VirtualDesktop(VirtualDesktop *this)
{
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile int *v5; // rdx
  __int64 v6; // r10
  Microsoft::WRL::Details::EventTargetArray *v7; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v8)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v9)(); // rax

  v2 = (char *)this + 144;
  SmartCookie::Unregister((VirtualDesktop *)((char *)this + 144));
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v2,
    v3);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v2,
    v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
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
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v5);
}

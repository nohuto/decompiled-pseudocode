/*
 * XREFs of ??1ViewWrapperBase@@QEAA@XZ @ 0x1800EFD58
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800EFCDC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPV.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801C84B0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILega.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180090FE0 (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::~ViewWrapperBase(ViewWrapperBase *this, volatile int *a2)
{
  __int64 v3; // r10
  Microsoft::WRL::Details::EventTargetArray *v4; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v5)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v6)(); // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile int *v9; // rdx
  __int64 v10; // rcx
  volatile int *v11; // rdx
  HSTRING v12; // rcx
  HSTRING v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int64 i; // rdi
  __int64 v16; // rdx

  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    *((_QWORD *)this + 60) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v3 + 12), a2) )
    {
      v5 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v4 + 24LL);
      if ( v5 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v4, (const struct std::nothrow_t *)1);
      else
        v5(v4, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v6 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v6 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v6)(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v7 = *((_QWORD *)this + 59);
  if ( v7 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 58);
  std::_Func_class<void,bool>::_Tidy((_QWORD *)this + 49, v8);
  v10 = *((_QWORD *)this + 39);
  if ( v10 )
  {
    *((_QWORD *)this + 39) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v10, v9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 24);
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((__int64 *)this + 21, v11);
  v12 = (HSTRING)*((_QWORD *)this + 20);
  if ( v12 )
    WindowsDeleteString(v12);
  v13 = (HSTRING)*((_QWORD *)this + 19);
  if ( v13 )
    WindowsDeleteString(v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 17);
  v14 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v14 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 14); ++i )
    {
      v14 = (_QWORD *)*((_QWORD *)this + 13);
      v16 = v14[i];
      if ( v16 )
      {
        v14[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v14 = (_QWORD *)*((_QWORD *)this + 13);
      }
    }
    CoTaskMemFree(v14);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
}

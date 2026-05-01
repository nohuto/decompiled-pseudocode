/*
 * XREFs of ??1WindowWrapperBase@@QEAA@XZ @ 0x1801D2C64
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801D274C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ @ 0x18004EAB0 (-Release@-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

void __fastcall WindowWrapperBase::~WindowWrapperBase(WindowWrapperBase *this, __int64 a2)
{
  HSTRING v3; // rcx
  HSTRING v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rax
  volatile int *v10; // rdx
  __int64 v11; // r10
  Microsoft::WRL::Details::EventTargetArray *v12; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v13)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v14)(); // rax
  __int64 v15; // rcx
  HSTRING v16; // rcx
  __int64 v17; // rcx

  std::_Func_class<void,bool>::_Tidy((_QWORD *)this + 50, a2);
  v3 = (HSTRING)*((_QWORD *)this + 43);
  if ( v3 )
    WindowsDeleteString(v3);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 42);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 40);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 39);
  v4 = (HSTRING)*((_QWORD *)this + 38);
  if ( v4 )
    WindowsDeleteString(v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 35);
  v5 = (void *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 32) )
    {
      do
      {
        v7 = *((_QWORD *)this + 31);
        v8 = *(volatile signed __int32 **)(v7 + 8 * v6);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 8 * v6) = 0LL;
          v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
          if ( v9 == CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release )
            CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release(v8);
          else
            v9(v8);
        }
        ++v6;
      }
      while ( v6 < *((_QWORD *)this + 32) );
      v5 = (void *)*((_QWORD *)this + 31);
    }
    CoTaskMemFree(v5);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 30);
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    *((_QWORD *)this + 23) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                          (Microsoft::WRL::Details *)(v11 + 12),
                          v10) )
    {
      v13 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v12 + 24LL);
      if ( v13 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v12, (const struct std::nothrow_t *)1);
      else
        v13(v12, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v14 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v14 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v14)(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 20);
  v15 = *((_QWORD *)this + 19);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (HSTRING)*((_QWORD *)this + 17);
  if ( v16 )
    WindowsDeleteString(v16);
  v17 = *((_QWORD *)this + 15);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 14);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
}

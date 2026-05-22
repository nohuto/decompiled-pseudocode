/*
 * XREFs of ??0DisplayBinding@@QEAA@XZ @ 0x18001FF54
 * Callers:
 *     ?RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001C2E0 (-RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ??$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayBinding@@@WRL@Microsoft@@@012@$$QEAIAEBU_GUID@@$$QEAW4Dimension@@@Z @ 0x18001F2F4 (--$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV-$.c)
 * Callees:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
DisplayBinding *__fastcall DisplayBinding::DisplayBinding(DisplayBinding *this)
{
  *((_DWORD *)this + 9) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::`vftable'{for `IDisplayBinding'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::`vftable'{for `Input::IPropertyChangedListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDisplayOrientationListener>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &DisplayBinding::`vftable'{for `IDisplayBinding'};
  *((_QWORD *)this + 1) = &DisplayBinding::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>'};
  *((_QWORD *)this + 2) = &DisplayBinding::`vftable'{for `Input::IPropertyChangedListener'};
  *((_QWORD *)this + 3) = &DisplayBinding::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDisplayOrientationListener>'};
  Input::PropertyMap::PropertyMap((DisplayBinding *)((char *)this + 64));
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}

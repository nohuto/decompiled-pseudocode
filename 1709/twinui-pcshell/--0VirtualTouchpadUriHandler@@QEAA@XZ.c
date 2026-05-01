/*
 * XREFs of ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x18017C924
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18017C4C0 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     ??0CWRLObjectWithSite@@QEAA@XZ @ 0x18002D594 (--0CWRLObjectWithSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

VirtualTouchpadUriHandler *__fastcall VirtualTouchpadUriHandler::VirtualTouchpadUriHandler(
        VirtualTouchpadUriHandler *this)
{
  _QWORD *v1; // rsi

  v1 = (_QWORD *)((char *)this + 24);
  CWRLObjectWithSite::CWRLObjectWithSite((VirtualTouchpadUriHandler *)((char *)this + 24));
  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 2) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 9) = 0LL;
  *v1 = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  memset((char *)this + 56, 0, 4uLL);
  memset((char *)this + 64, 0, 8uLL);
  *((_DWORD *)this + 33) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &VirtualTouchpadUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IObjectWithSelection'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualTouchpadUriHandler::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &VirtualTouchpadUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IObjectWithSelection'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
  return this;
}

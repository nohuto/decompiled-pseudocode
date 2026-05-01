/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180002EC0
 * Callers:
 *     ?Release@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x180008500 (-Release@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180008510 (-Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000728C (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007D40 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::Release(Windows::System::CAppMemoryReport *this)
{
  signed __int64 v1; // rax
  unsigned __int32 v3; // edi
  signed __int64 v4; // rtt
  Windows::System::CAppMemoryReport *(__fastcall *v6)(Windows::System::CAppMemoryReport *, char); // rax
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 4);
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( v3 )
    return v3;
  if ( this )
  {
    v6 = *(Windows::System::CAppMemoryReport *(__fastcall **)(Windows::System::CAppMemoryReport *, char))(*(_QWORD *)this + 80LL);
    if ( v6 == Windows::System::CAppMemoryReport::`vector deleting destructor' )
    {
      v7 = *((_QWORD *)this + 4);
      *(_QWORD *)this = &Windows::System::CAppMemoryReport::`vftable';
      *((_QWORD *)this + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)this + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
      if ( v7 < 0 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v7);
      operator delete(this);
    }
    else
    {
      v6(this, 1);
    }
  }
  if ( !Microsoft::WRL::Details::ModuleBase::module_ )
    return v3;
  if ( *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL) != Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return 0LL;
}

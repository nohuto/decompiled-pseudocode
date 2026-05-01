/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180002E50
 * Callers:
 *     ?Release@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x180008890 (-Release@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x1800088A0 (-Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBI@EAAKXZ @ 0x1800088B0 (-Release@CAppMemoryReport@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000725C (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008120 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::Release(Windows::System::CAppMemoryReport *this)
{
  signed __int64 v1; // rax
  unsigned __int32 v3; // edi
  signed __int64 v4; // rtt
  Windows::System::CAppMemoryReport *(__fastcall *v5)(Windows::System::CAppMemoryReport *, char); // rax
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 5);
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v3 )
  {
    if ( this )
    {
      v5 = *(Windows::System::CAppMemoryReport *(__fastcall **)(Windows::System::CAppMemoryReport *, char))(*(_QWORD *)this + 80LL);
      if ( v5 == Windows::System::CAppMemoryReport::`vector deleting destructor' )
      {
        v6 = *((_QWORD *)this + 5);
        *(_QWORD *)this = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
        *((_QWORD *)this + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
        *((_QWORD *)this + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
        *((_QWORD *)this + 3) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
        if ( v6 < 0 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v6);
        operator delete(this);
      }
      else
      {
        v5(this, 1);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                            + 16LL) == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      else
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v3;
}

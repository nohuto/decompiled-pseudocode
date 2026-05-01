/*
 * XREFs of ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18007F240
 * Callers:
 *     ??$Make@VCWinRTApplicationView@@AEAPEAUIImmersiveApplication@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCWinRTApplicationView@@@12@AEAPEAUIImmersiveApplication@@@Z @ 0x180074F50 (--$Make@VCWinRTApplicationView@@AEAPEAUIImmersiveApplication@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CApplicationViewBase@@QEAA@XZ @ 0x180081944 (--0CApplicationViewBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CWinRTApplicationView *__fastcall CWinRTApplicationView::CWinRTApplicationView(
        CWinRTApplicationView *this,
        struct IImmersiveApplication *a2)
{
  CApplicationViewBase::CApplicationViewBase(this);
  Microsoft::WRL::FtmBase::FtmBase((CWinRTApplicationView *)((char *)this + 128));
  *((_DWORD *)this + 39) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 2) = &CWinRTApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewWithEnterpriseId,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 15) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWinRTApplicationView'};
  *((_QWORD *)this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CWinRTApplicationView::`vftable';
  *((_QWORD *)this + 1) = &CWinRTApplicationView::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 2) = &CWinRTApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewWithEnterpriseId,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 15) = &CWinRTApplicationView::`vftable'{for `IWinRTApplicationView'};
  *((_QWORD *)this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 20) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 168) = 0;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *((_BYTE *)this + 180) = 0;
  return this;
}

/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VThumbnailInteropFactoryBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x1801681A0
 * Callers:
 *     ??$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x1801687D8 (--$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@M.c)
 *     ??0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180168E30 (--0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = &ThumbnailInteropFactoryBase::`vftable';
  a1[1].Ptr = &ThumbnailInteropFactoryBase::`vftable'{for `IThumbnailFactoryInternal'};
  a1[2].Ptr = &ThumbnailInteropFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IThumbnailEvents,Microsoft::WRL::Details::Nil>,1,0>'};
  a1[3].Ptr = 0LL;
  a1[4].Ptr = 0LL;
  a1[5].Ptr = 0LL;
  InitializeSRWLock(a1 + 6);
  InitializeSRWLock(a1 + 7);
  a1[8].Ptr = 0LL;
  a1[9].Ptr = 0LL;
  a1[10].Ptr = 0LL;
  a1->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ThumbnailInteropFactoryBase'};
  a1[1].Ptr = &DesktopBackgroundFactory::`vftable'{for `IThumbnailFactoryInternal'};
  a1[2].Ptr = &ThumbnailInteropFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IThumbnailEvents,Microsoft::WRL::Details::Nil>,1,0>'};
  a1[11].Ptr = &ThumbnailInteropFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  a1[13].Ptr = (PVOID)1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}

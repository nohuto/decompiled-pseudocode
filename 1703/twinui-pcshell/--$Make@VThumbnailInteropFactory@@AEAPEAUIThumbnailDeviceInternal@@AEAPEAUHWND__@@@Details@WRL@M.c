/*
 * XREFs of ??$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x1801687D8
 * Callers:
 *     ??$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x180168444 (--$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@Y.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167F20 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsof.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VThumbnailInteropFactoryBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x1801681A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VThumbnailInteropFactoryBase@@VNil@Det.c)
 *     ?Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z @ 0x180168C58 (-Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<ThumbnailInteropFactory,IThumbnailDeviceInternal * &,HWND__ * &>(
        volatile signed __int64 **a1,
        struct IThumbnailDeviceInternal **a2,
        void **a3)
{
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK *v7; // rbx
  void *v8; // rbp
  struct IThumbnailDeviceInternal *v9; // r14
  PVOID Ptr; // rsi

  *a1 = 0LL;
  v6 = (RTL_SRWLOCK *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = *a3;
    v9 = *a2;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(v6);
    v7->Ptr = &ThumbnailInteropFactory::`vftable'{for `ThumbnailInteropFactoryBase'};
    v7[1].Ptr = &DesktopBackgroundFactory::`vftable'{for `IThumbnailFactoryInternal'};
    v7[2].Ptr = &ThumbnailInteropFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IThumbnailEvents,Microsoft::WRL::Details::Nil>,1,0>'};
    v7[11].Ptr = &ThumbnailInteropFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
    v7[14].Ptr = &v7[2];
    v7[15].Ptr = 0LL;
    ThumbnailEventListener::Register((ThumbnailEventListener *)&v7[14], v9);
    Ptr = v7[3].Ptr;
    v7[3].Ptr = v9;
    if ( v9 )
      (*(void (__fastcall **)(struct IThumbnailDeviceInternal *))(*(_QWORD *)v9 + 8LL))(v9);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v7[4].Ptr = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(*a1);
    *a1 = (volatile signed __int64 *)v7;
    v7 = 0LL;
  }
  if ( v7 )
    operator delete(v7);
  return a1;
}

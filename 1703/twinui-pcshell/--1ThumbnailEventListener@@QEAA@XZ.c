/*
 * XREFs of ??1ThumbnailEventListener@@QEAA@XZ @ 0x180168DA8
 * Callers:
 *     ??_GThumbnailInteropFactory@@UEAAPEAXI@Z @ 0x180167C20 (--_GThumbnailInteropFactory@@UEAAPEAXI@Z.c)
 *     ??_GDesktopBackgroundFactory@@UEAAPEAXI@Z @ 0x180168FA0 (--_GDesktopBackgroundFactory@@UEAAPEAXI@Z.c)
 *     _Microsoft::WRL::Details::Make_ThumbnailInteropFactory_IThumbnailDeviceInternal_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64__::_1_::dtor$4 @ 0x1801A4A73 (_Microsoft--WRL--Details--Make_ThumbnailInteropFactory_IThumbnailDeviceInternal_____ea_1801A4A73.c)
 *     _DesktopBackgroundFactory::DesktopBackgroundFactory_::_1_::dtor$1 @ 0x1801A4A9B (_DesktopBackgroundFactory--DesktopBackgroundFactory_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ThumbnailEventListener::~ThumbnailEventListener(ThumbnailEventListener *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v6; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, v2);
      v4 = *(_QWORD *)(v2 + 24);
      *(_QWORD *)(v2 + 24) = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = (volatile signed __int32 *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = 0LL;
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
}

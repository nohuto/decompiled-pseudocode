/*
 * XREFs of ??0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180168E30
 * Callers:
 *     ??$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169460 (--$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Mi.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VThumbnailInteropFactoryBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x1801681A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VThumbnailInteropFactoryBase@@VNil@Det.c)
 *     ?Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z @ 0x180168C58 (-Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z.c)
 *     ??$make_unique@VHideBackgroundIcons@@$$V@std@@YA?AV?$unique_ptr@VHideBackgroundIcons@@U?$default_delete@VHideBackgroundIcons@@@std@@@0@XZ @ 0x1801692C0 (--$make_unique@VHideBackgroundIcons@@$$V@std@@YA-AV-$unique_ptr@VHideBackgroundIcons@@U-$default.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
DesktopBackgroundFactory *__fastcall DesktopBackgroundFactory::DesktopBackgroundFactory(
        DesktopBackgroundFactory *this,
        struct IThumbnailDeviceInternal *a2,
        struct tagRECT *a3)
{
  _BYTE **v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _BYTE *v9; // rcx
  _BYTE *v10; // rbx
  HWND ShellWindow; // rax
  void *v12; // rbx
  HWND v13; // rax
  void *Block; // [rsp+58h] [rbp+10h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((RTL_SRWLOCK *)this);
  *(_QWORD *)this = &DesktopBackgroundFactory::`vftable'{for `ThumbnailInteropFactoryBase'};
  *((_QWORD *)this + 1) = &DesktopBackgroundFactory::`vftable'{for `IThumbnailFactoryInternal'};
  *((_QWORD *)this + 2) = &ThumbnailInteropFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IThumbnailEvents,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 11) = &ThumbnailInteropFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 14) = (char *)this + 16;
  *((_QWORD *)this + 15) = 0LL;
  v6 = (_BYTE **)((char *)this + 128);
  *((_QWORD *)this + 16) = 0LL;
  *(struct tagRECT *)((char *)this + 136) = *a3;
  ThumbnailEventListener::Register((DesktopBackgroundFactory *)((char *)this + 112), a2);
  v7 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IThumbnailDeviceInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 4) = GetShellWindow();
  v8 = (_QWORD *)std::make_unique<HideBackgroundIcons,>(&Block);
  if ( v6 != v8 )
  {
    v9 = (_BYTE *)*v8;
    *v8 = 0LL;
    v10 = *v6;
    *v6 = v9;
    if ( v10 )
    {
      if ( *v10 )
      {
        ShellWindow = GetShellWindow();
        PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 0LL);
      }
      operator delete(v10);
    }
  }
  v12 = Block;
  if ( Block )
  {
    if ( *(_BYTE *)Block )
    {
      v13 = GetShellWindow();
      PostMessageW(v13, 0x52Cu, 0xDuLL, 0LL);
    }
    operator delete(v12);
  }
  return this;
}

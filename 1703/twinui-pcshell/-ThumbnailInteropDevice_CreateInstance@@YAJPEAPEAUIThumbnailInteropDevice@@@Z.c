/*
 * XREFs of ?ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z @ 0x180166F60
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18012CE50 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18013ED30 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180140650 (-Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ThumbnailInteropDevice@@QEAAJXZ @ 0x180166980 (-RuntimeClassInitialize@ThumbnailInteropDevice@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ThumbnailInteropDevice_CreateInstance(struct IThumbnailInteropDevice **a1)
{
  ThumbnailInteropDevice *v2; // rax
  ThumbnailInteropDevice *v3; // rbx
  int v4; // edi
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ThumbnailInteropDevice *v8; // [rsp+38h] [rbp+10h]

  v8 = 0LL;
  v2 = (ThumbnailInteropDevice *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCD,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  *((_QWORD *)v2 + 1) = &IThumbnailDeviceInternal::`vftable';
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IThumbnailInteropDevice,IThumbnailDeviceInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IThumbnailInteropDevice'};
  *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IThumbnailInteropDevice,IThumbnailDeviceInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IThumbnailDeviceInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_DWORD *)v2 + 5) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v3 = &ThumbnailInteropDevice::`vftable'{for `IThumbnailInteropDevice'};
  *((_QWORD *)v3 + 1) = &ThumbnailInteropDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IThumbnailDeviceInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  v4 = ThumbnailInteropDevice::RuntimeClassInitialize(v3);
  v5 = *(_QWORD *)v3;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(ThumbnailInteropDevice *))(v5 + 8))(v3);
    v8 = v3;
    (*(void (__fastcall **)(ThumbnailInteropDevice *))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = 0;
  }
  else
  {
    (*(void (__fastcall **)(ThumbnailInteropDevice *))(v5 + 16))(v3);
  }
  if ( v4 < 0 )
    goto LABEL_9;
  v4 = (**(__int64 (__fastcall ***)(ThumbnailInteropDevice *, GUID *, struct IThumbnailInteropDevice **))v8)(
         v8,
         &GUID_8a56ebe9_cf36_4dd5_9789_1a7c95f10d61,
         a1);
LABEL_11:
  if ( v8 )
    (*(void (__fastcall **)(ThumbnailInteropDevice *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v4;
}

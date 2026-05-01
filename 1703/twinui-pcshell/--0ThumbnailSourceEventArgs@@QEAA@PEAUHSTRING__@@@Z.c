/*
 * XREFs of ??0ThumbnailSourceEventArgs@@QEAA@PEAUHSTRING__@@@Z @ 0x18016764C
 * Callers:
 *     ??$Make@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@12@$$QEAPEAUHSTRING__@@@Z @ 0x180168748 (--$Make@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VThumbna.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
ThumbnailSourceEventArgs *__fastcall ThumbnailSourceEventArgs::ThumbnailSourceEventArgs(
        ThumbnailSourceEventArgs *this,
        HSTRING a2)
{
  _QWORD *v4; // rdi
  HSTRING *v5; // rdi
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((ThumbnailSourceEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 6) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ThumbnailSourceEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v5 = (HSTRING *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  v6 = 0;
  if ( !a2 || a2 != *v5 )
  {
    WindowsDeleteString(*v5);
    *v5 = 0LL;
    v6 = WindowsDuplicateString(a2, (HSTRING *)this + 7);
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
      (const char *)(unsigned int)v6);
  return this;
}

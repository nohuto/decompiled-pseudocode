/*
 * XREFs of ??$MakeAndInitializeOrThrow@VThumbnailInteropWindow@ThumbnailInteropDevice@@QEAV2@@wil@@YA?AV?$ComPtr@VThumbnailInteropWindow@ThumbnailInteropDevice@@@WRL@Microsoft@@$$QEBQEAVThumbnailInteropDevice@@@Z @ 0x1801674D4
 * Callers:
 *     ?RuntimeClassInitialize@ThumbnailInteropDevice@@QEAAJXZ @ 0x180166980 (-RuntimeClassInitialize@ThumbnailInteropDevice@@QEAAJXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ThumbnailInteropWindow@ThumbnailInteropDevice@@QEAAJPEAV2@@Z @ 0x180166D30 (-RuntimeClassInitialize@ThumbnailInteropWindow@ThumbnailInteropDevice@@QEAAJPEAV2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ThumbnailInteropDevice::ThumbnailInteropWindow **__fastcall wil::MakeAndInitializeOrThrow<ThumbnailInteropDevice::ThumbnailInteropWindow,ThumbnailInteropDevice * const>(
        ThumbnailInteropDevice::ThumbnailInteropWindow **a1,
        struct ThumbnailInteropDevice **a2)
{
  ThumbnailInteropDevice::ThumbnailInteropWindow *v4; // rax
  ThumbnailInteropDevice::ThumbnailInteropWindow *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ThumbnailInteropDevice::ThumbnailInteropWindow *)operator new(
                                                           0x28uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    goto LABEL_9;
  }
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v5 + 3) = 0LL;
  *(_QWORD *)v5 = &ThumbnailInteropDevice::ThumbnailInteropWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)v5 + 2) = &ThumbnailInteropDevice::ThumbnailInteropWindow::`vftable'{for `CWRLImpWndProc<ThumbnailInteropDevice::ThumbnailInteropWindow>'};
  *((_QWORD *)v5 + 4) = 0LL;
  v6 = ThumbnailInteropDevice::ThumbnailInteropWindow::RuntimeClassInitialize(v5, *a2);
  v7 = *(_QWORD *)v5;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(ThumbnailInteropDevice::ThumbnailInteropWindow *))(v7 + 8))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(ThumbnailInteropDevice::ThumbnailInteropWindow *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    (*(void (__fastcall **)(ThumbnailInteropDevice::ThumbnailInteropWindow *))(v7 + 16))(v5);
  }
  if ( v6 < 0 )
  {
LABEL_9:
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"internal\\sdk\\inc\\wil/wrl.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  return a1;
}

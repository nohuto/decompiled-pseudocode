/*
 * XREFs of ??_GThumbnailInteropDevice@@EEAAPEAXI@Z @ 0x180166880
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

ThumbnailInteropDevice *__fastcall ThumbnailInteropDevice::`scalar deleting destructor'(
        ThumbnailInteropDevice *this,
        char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &ThumbnailInteropDevice::`vftable'{for `IThumbnailInteropDevice'};
  *((_QWORD *)this + 1) = &ThumbnailInteropDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IThumbnailDeviceInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v2 )
  {
    DestroyWindow(*(HWND *)(v2 + 24));
    *(_QWORD *)(v2 + 32) = 0LL;
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 5);
    while ( v6 != v7 )
    {
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
      ++v6;
    }
    std::_Deallocate(*((char **)this + 4), (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) >> 3, 8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

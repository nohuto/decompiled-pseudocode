/*
 * XREFs of ??_ECImmersiveApplicationWindow@@EEAAPEAXI@Z @ 0x180065890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveApplicationWindow *__fastcall CImmersiveApplicationWindow::`vector deleting destructor'(
        CImmersiveApplicationWindow *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationWindow,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_DWORD *)this + 9) = -1073741823;
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

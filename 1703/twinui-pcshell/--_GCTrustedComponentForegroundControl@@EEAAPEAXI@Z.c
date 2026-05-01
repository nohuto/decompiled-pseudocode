/*
 * XREFs of ??_GCTrustedComponentForegroundControl@@EEAAPEAXI@Z @ 0x18002C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CTrustedComponentForegroundControl *__fastcall CTrustedComponentForegroundControl::`scalar deleting destructor'(
        CTrustedComponentForegroundControl *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ITrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 9) = -1073741823;
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

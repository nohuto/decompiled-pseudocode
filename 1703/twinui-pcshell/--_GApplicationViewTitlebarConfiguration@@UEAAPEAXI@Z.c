/*
 * XREFs of ??_GApplicationViewTitlebarConfiguration@@UEAAPEAXI@Z @ 0x18005C120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

ApplicationViewTitlebarConfiguration *__fastcall ApplicationViewTitlebarConfiguration::`scalar deleting destructor'(
        ApplicationViewTitlebarConfiguration *this,
        char a2)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 9) = -1073741823;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

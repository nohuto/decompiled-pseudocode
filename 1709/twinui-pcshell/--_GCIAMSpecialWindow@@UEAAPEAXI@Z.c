/*
 * XREFs of ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x18002F730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CIAMSpecialWindow *__fastcall CIAMSpecialWindow::`scalar deleting destructor'(CIAMSpecialWindow *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_DWORD *)this + 13) = -1073741823;
  *(_QWORD *)this = &CIAMSpecialWindowBase::`vftable';
  DestroyWindow(*((HWND *)this + 2));
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

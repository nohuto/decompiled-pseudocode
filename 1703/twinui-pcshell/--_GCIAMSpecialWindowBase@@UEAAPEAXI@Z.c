/*
 * XREFs of ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x18002C830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HWND *__fastcall CIAMSpecialWindowBase::`scalar deleting destructor'(HWND *this, char a2)
{
  HWND v4; // rcx
  HWND v5; // rcx

  *this = (HWND)&CIAMSpecialWindowBase::`vftable';
  DestroyWindow(this[1]);
  v4 = this[4];
  if ( v4 )
  {
    this[4] = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = this[3];
  if ( v5 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

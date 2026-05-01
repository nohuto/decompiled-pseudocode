/*
 * XREFs of ??_EThumbnailEventRegistration@ThumbnailEventListener@@UEAAPEAXI@Z @ 0x180168B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

ThumbnailEventListener::ThumbnailEventRegistration *__fastcall ThumbnailEventListener::ThumbnailEventRegistration::`vector deleting destructor'(
        ThumbnailEventListener::ThumbnailEventRegistration *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

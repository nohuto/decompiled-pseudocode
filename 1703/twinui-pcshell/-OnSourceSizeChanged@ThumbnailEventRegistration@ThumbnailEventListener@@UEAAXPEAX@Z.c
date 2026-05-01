/*
 * XREFs of ?OnSourceSizeChanged@ThumbnailEventRegistration@ThumbnailEventListener@@UEAAXPEAX@Z @ 0x180168B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ThumbnailEventListener::ThumbnailEventRegistration::OnSourceSizeChanged(
        ThumbnailEventListener::ThumbnailEventRegistration *this,
        void *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v2 + 24LL))(v2, a2);
}

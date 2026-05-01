/*
 * XREFs of ??1ThumbnailData@@QEAA@XZ @ 0x1801698DC
 * Callers:
 *     _ThumbnailInteropVisual::ThumbnailInteropVisual_::_1_::dtor$1 @ 0x1801A4B66 (_ThumbnailInteropVisual--ThumbnailInteropVisual_--_1_--dtor$1.c)
 *     _ThumbnailInteropVisual::ThumbnailInteropVisual_::_1_::dtor$5 @ 0x1801A4BA6 (_ThumbnailInteropVisual--ThumbnailInteropVisual_--_1_--dtor$5.c)
 *     _ThumbnailInteropVisual::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1801A4BD6 (_ThumbnailInteropVisual--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _ThumbnailInteropVisual::CreateThumbnail_::_1_::dtor$1 @ 0x1801A4CBB (_ThumbnailInteropVisual--CreateThumbnail_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ThumbnailData::~ThumbnailData(ThumbnailData *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    DwmUnregisterThumbnail(*(HTHUMBNAIL *)this);
}

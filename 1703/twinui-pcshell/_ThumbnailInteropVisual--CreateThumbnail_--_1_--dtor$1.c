/*
 * XREFs of _ThumbnailInteropVisual::CreateThumbnail_::_1_::dtor$1 @ 0x1801A4CBB
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThumbnailData@@QEAA@XZ @ 0x1801698DC (--1ThumbnailData@@QEAA@XZ.c)
 */

void __fastcall ThumbnailInteropVisual::CreateThumbnail_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    ThumbnailData::~ThumbnailData(*(ThumbnailData **)(a2 + 104));
  }
}

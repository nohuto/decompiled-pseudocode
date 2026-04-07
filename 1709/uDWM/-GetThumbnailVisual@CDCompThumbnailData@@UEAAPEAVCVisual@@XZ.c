/*
 * XREFs of ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18000CBA0
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B780 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CDCompThumbnailData::GetThumbnailVisual(CDCompThumbnailData *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *((_DWORD *)this + 28);
  v2 = 0LL;
  if ( !v1 )
    return (struct CVisual *)*((_QWORD *)this + 11);
  if ( (unsigned int)(v1 - 1) <= 1 )
    return (struct CVisual *)*((_QWORD *)this + 13);
  return (struct CVisual *)v2;
}

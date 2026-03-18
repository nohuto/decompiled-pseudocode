/*
 * XREFs of ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x180027F08
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DBF0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     <none>
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::AllocatedStorage::FindSlot(
        CSparseStorage::AllocatedStorage *this,
        int a2)
{
  unsigned int *v2; // r8
  unsigned int v3; // r9d

  v2 = (unsigned int *)((char *)this + 12);
  v3 = *((_DWORD *)this + 3);
  if ( (HIBYTE(v3) & 0x7F) != a2 )
  {
    do
    {
      v2 = (unsigned int *)((char *)v2 + (v3 & 0xFFFFFF) + 4);
      v3 = *v2;
    }
    while ( (HIBYTE(*v2) & 0x7F) != a2 );
  }
  return (struct CSparseStorage::DataInfo *)v2;
}

/*
 * XREFs of ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x1800330B8
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     <none>
 */

char __fastcall CDirtyRegion::IsDisabled(CDirtyRegion *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 2722) || *((_DWORD *)this + 674) )
    return 1;
  return result;
}

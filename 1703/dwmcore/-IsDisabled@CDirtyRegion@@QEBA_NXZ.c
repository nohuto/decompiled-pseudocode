/*
 * XREFs of ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x18001DEB0
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001DE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDirtyRegion::IsDisabled(CDirtyRegion *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 2724) || *((_DWORD *)this + 676) )
    return 1LL;
  return result;
}

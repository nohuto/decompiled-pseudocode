/*
 * XREFs of ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18013E378
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017B394 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18009BE3C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 */

void __fastcall CDrawListCache::Invalidate(CDrawListCache *this)
{
  int v2; // ecx

  if ( *((_QWORD *)this + 3) )
  {
    v2 = *((_DWORD *)this + 4) - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
        ++dword_1802D634C;
    }
    else
    {
      ++dword_1802D6340;
    }
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    CDrawListCache::ReleaseDrawListEntries(this);
    *((_BYTE *)this + 108) = 0;
  }
}

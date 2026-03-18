/*
 * XREFs of ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180170710
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::SetRedrawRects(CDirtyRegion *this)
{
  __int64 v1; // r8
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1

  v1 = 0LL;
  if ( !*((_BYTE *)this + 2880) )
  {
    v3 = *((_DWORD *)this + 319);
    if ( v3 )
    {
      do
      {
        v4 = *((unsigned int *)this + v1 + 311);
        *((_DWORD *)this + v1 + 239) = v4;
        v5 = (unsigned int)v1;
        v1 = (unsigned int)(v1 + 1);
        v5 *= 2LL;
        v6 = *(_OWORD *)((char *)this + 8 * v5 + 1116);
        *(_OWORD *)((char *)this + 8 * v5 + 988) = *(_OWORD *)((char *)this + 16 * v4 + 152);
        *(_OWORD *)((char *)this + 8 * v5 + 824) = v6;
        v3 = *((_DWORD *)this + 319);
      }
      while ( (unsigned int)v1 < v3 );
    }
    *((_DWORD *)this + 238) = v3;
    *((_BYTE *)this + 2880) = 1;
  }
}

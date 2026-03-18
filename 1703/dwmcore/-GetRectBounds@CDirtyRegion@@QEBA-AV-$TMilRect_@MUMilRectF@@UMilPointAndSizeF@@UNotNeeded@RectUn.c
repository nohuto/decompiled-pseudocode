/*
 * XREFs of ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18001DDF0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

_QWORD *__fastcall CDirtyRegion::GetRectBounds(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  _QWORD *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v9; // r9d

  v2 = 0;
  v3 = a2;
  a2[1] = 0LL;
  v4 = a1;
  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 2726) )
  {
    if ( *(_DWORD *)(a1 + 1120) )
    {
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, v4 + 16 * (v2 + 60LL));
        v2 = v9 + 1;
      }
      while ( v2 < *(_DWORD *)(v4 + 1120) );
    }
  }
  else
  {
    v5 = a1 + 24;
    do
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, v5);
      v5 = v6 + 16;
    }
    while ( v7 != 1 );
  }
  return v3;
}

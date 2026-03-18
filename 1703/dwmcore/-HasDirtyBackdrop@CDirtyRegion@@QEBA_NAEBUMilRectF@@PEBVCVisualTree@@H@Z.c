/*
 * XREFs of ?HasDirtyBackdrop@CDirtyRegion@@QEBA_NAEBUMilRectF@@PEBVCVisualTree@@H@Z @ 0x18001DECC
 * Callers:
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18001E0D4 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 */

char __fastcall CDirtyRegion::HasDirtyBackdrop(
        CDirtyRegion *this,
        const struct MilRectF *a2,
        const struct CVisualTree *a3,
        int a4)
{
  unsigned int v4; // ebp
  char *v9; // rdi
  float v10; // xmm8_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float *i; // rbx
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm1_4

  v4 = 0;
  if ( *((_BYTE *)this + 2724) )
    return 1;
  v9 = (char *)this + 32;
  do
  {
    v10 = *(float *)a2;
    v11 = *(float *)a2;
    v12 = *((float *)a2 + 1);
    v13 = *((float *)a2 + 2);
    v14 = v12;
    v15 = *((float *)a2 + 3);
    v16 = v13;
    v17 = v15;
    if ( *((float *)v9 - 2) > *(float *)a2 )
      v11 = *((float *)v9 - 2);
    if ( *((float *)v9 - 1) > v12 )
      v14 = *((float *)v9 - 1);
    if ( v13 > *(float *)v9 )
      v16 = *(float *)v9;
    if ( v15 > *((float *)v9 + 1) )
      v17 = *((float *)v9 + 1);
    if ( v16 > v11 && v17 > v14 )
    {
      if ( *((float *)v9 + 30) > v10 )
        v10 = *((float *)v9 + 30);
      if ( *((float *)v9 + 31) > v12 )
        v12 = *((float *)v9 + 31);
      if ( v13 > *((float *)v9 + 32) )
        v13 = *((float *)v9 + 32);
      if ( v15 > *((float *)v9 + 33) )
        v15 = *((float *)v9 + 33);
      if ( v13 > v10 && v15 > v12 )
        return 1;
      for ( i = (float *)*((_QWORD *)v9 + 31); i != (float *)((char *)this + 16 * v4 + 280); i = *(float **)i )
      {
        if ( (int)CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)i, a3, 0) > a4 )
        {
          v19 = *(float *)a2;
          v20 = *((float *)a2 + 1);
          v21 = *((float *)a2 + 2);
          v22 = *((float *)a2 + 3);
          if ( i[7] > *(float *)a2 )
            v19 = i[7];
          if ( i[8] > v20 )
            v20 = i[8];
          if ( v21 > i[9] )
            v21 = i[9];
          if ( v22 > i[10] )
            v22 = i[10];
          if ( v21 > v19 && v22 > v20 )
            return 1;
        }
      }
    }
    ++v4;
    v9 += 16;
  }
  while ( v4 < 8 );
  return 0;
}

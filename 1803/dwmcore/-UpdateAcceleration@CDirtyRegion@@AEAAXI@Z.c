/*
 * XREFs of ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x18009E0C0
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18009E29C (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009E3A0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::UpdateAcceleration(CDirtyRegion *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r11
  float *v5; // r10
  float *v6; // rax
  float v7; // xmm1_4
  char v8; // r9
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  __int64 v12; // r11
  float *v13; // rdx
  float *v14; // rcx
  __int64 v15; // r11
  float v16; // xmm1_4
  char v17; // al
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm2_4

  v3 = a2;
  if ( a2 )
  {
    v4 = a2;
    v5 = (float *)((char *)this + 32 * a2 + 536);
    v6 = (float *)((char *)this + 412);
    do
    {
      v7 = 0.0;
      v8 = *((_BYTE *)this + 16 * a2 + 420);
      if ( *((_BYTE *)v6 + 8) )
      {
        if ( !v8 )
          v7 = FLOAT_3_4028235e38;
      }
      else if ( !v8 )
      {
        v9 = *v6 - *((float *)this + 4 * a2 + 103);
        v10 = *(v6 - 1) - *((float *)this + 4 * a2 + 102);
        v11 = (float)(v9 * v9) + (float)(v10 * v10);
        if ( v11 != 0.0 )
          v7 = (float)(v6[1] + *((float *)this + 4 * a2 + 104)) / v11;
      }
      *v5 = v7;
      v6 += 4;
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  v12 = a2 + 1;
  if ( (unsigned int)v12 < 8 )
  {
    v13 = (float *)((char *)this + 16 * (unsigned int)v12 + 412);
    v14 = (float *)((char *)this + 32 * v12 + 4 * v3 + 536);
    v15 = (unsigned int)(8 - v12);
    do
    {
      v16 = 0.0;
      v17 = *((_BYTE *)this + 16 * v3 + 420);
      if ( *((_BYTE *)v13 + 8) )
      {
        if ( !v17 )
          v16 = FLOAT_3_4028235e38;
      }
      else if ( !v17 )
      {
        v18 = *v13 - *((float *)this + 4 * v3 + 103);
        v19 = *(v13 - 1) - *((float *)this + 4 * v3 + 102);
        v20 = (float)(v18 * v18) + (float)(v19 * v19);
        if ( v20 != 0.0 )
          v16 = (float)(v13[1] + *((float *)this + 4 * v3 + 104)) / v20;
      }
      *v14 = v16;
      v13 += 4;
      v14 += 8;
      --v15;
    }
    while ( v15 );
  }
}

/*
 * XREFs of ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180033118
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180033300 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033400 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::UpdateAcceleration(CDirtyRegion *this, __int64 a2)
{
  __int64 v3; // r9
  float *v4; // r11
  float *v5; // rax
  float v6; // xmm1_4
  char v7; // r10
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r11
  float *v14; // r9
  __int64 v15; // rdx
  float *v16; // rcx
  float v17; // xmm1_4
  char v18; // al
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm2_4

  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)a2;
    v4 = (float *)((char *)this + 32 * (unsigned int)a2 + 536);
    v5 = (float *)((char *)this + 412);
    do
    {
      v6 = 0.0;
      v7 = *((_BYTE *)this + 16 * (unsigned int)v3 + 420);
      if ( *((_BYTE *)v5 + 8) )
      {
        if ( !v7 )
          v6 = FLOAT_3_4028235e38;
      }
      else if ( !v7 )
      {
        v8 = *v5 - *((float *)this + 4 * (unsigned int)v3 + 103);
        v9 = *(v5 - 1) - *((float *)this + 4 * (unsigned int)v3 + 102);
        v10 = (float)(v8 * v8) + (float)(v9 * v9);
        if ( v10 != 0.0 )
          v6 = (float)(v5[1] + *((float *)this + 4 * (unsigned int)v3 + 104)) / v10;
      }
      *v4 = v6;
      v5 += 4;
      ++v4;
      --a2;
    }
    while ( a2 );
  }
  v11 = (unsigned int)(v3 + 1);
  if ( (unsigned int)v11 < 8 )
  {
    v12 = v3;
    v13 = 2 * v3;
    v14 = (float *)((char *)this + 16 * (unsigned int)v11 + 412);
    v15 = (unsigned int)(8 - v11);
    v16 = (float *)((char *)this + 32 * v11 + 4 * v12 + 536);
    do
    {
      v17 = 0.0;
      v18 = *((_BYTE *)this + 8 * v13 + 420);
      if ( *((_BYTE *)v14 + 8) )
      {
        if ( !v18 )
          v17 = FLOAT_3_4028235e38;
      }
      else if ( !v18 )
      {
        v19 = *v14 - *((float *)this + 2 * v13 + 103);
        v20 = *(v14 - 1) - *((float *)this + 2 * v13 + 102);
        v21 = (float)(v19 * v19) + (float)(v20 * v20);
        if ( v21 != 0.0 )
          v17 = (float)(v14[1] + *((float *)this + 2 * v13 + 104)) / v21;
      }
      *v16 = v17;
      v14 += 4;
      v16 += 8;
      --v15;
    }
    while ( v15 );
  }
}

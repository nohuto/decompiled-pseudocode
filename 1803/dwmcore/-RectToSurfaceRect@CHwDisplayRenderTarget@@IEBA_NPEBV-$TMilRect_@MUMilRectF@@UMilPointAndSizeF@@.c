/*
 * XREFs of ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18013D5EC
 * Callers:
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801F0FF0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800292D8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800464C0 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 */

bool __fastcall CHwDisplayRenderTarget::RectToSurfaceRect(_DWORD *a1, float *a2, int *a3)
{
  float v6; // xmm0_4
  int v7; // edx
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  float v16; // [rsp+40h] [rbp+18h]

  *a3 = 0;
  a3[2] = 0;
  a3[1] = 0;
  a3[3] = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)a1) >= 0 )
  {
    if ( a2 )
    {
      v6 = *a2 + 6291456.25;
      v7 = (int)(LODWORD(v6) << 10) >> 11;
      *a3 = v7;
      v8 = a2[2] + 6291456.25;
      a3[2] = (int)(LODWORD(v8) << 10) >> 11;
      v9 = a2[1] + 6291456.25;
      v10 = (int)(LODWORD(v9) << 10) >> 11;
      a3[1] = v10;
      v16 = a2[3] + 6291456.25;
      a3[3] = (int)(LODWORD(v16) << 10) >> 11;
      if ( a1[21] > v7 )
        v7 = a1[21];
      *a3 = v7;
      if ( a1[22] > v10 )
        v10 = a1[22];
      a3[1] = v10;
      v11 = a1[23];
      v12 = a3[2];
      if ( v11 < v12 )
      {
        a3[2] = v11;
        v12 = v11;
      }
      v13 = a1[24];
      v14 = a3[3];
      if ( v13 < v14 )
      {
        a3[3] = v13;
        v14 = v13;
        v12 = a3[2];
      }
      if ( v12 <= *a3 || v14 <= a3[1] )
      {
        a3[3] = 0;
        a3[2] = 0;
        a3[1] = 0;
        *a3 = 0;
      }
    }
    else
    {
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 21);
    }
  }
  return !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a3);
}

/*
 * XREFs of ?GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054720
 * Callers:
 *     ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054690 (-GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?GetBounds@CGdiSpriteBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5C30 (-GetBounds@CGdiSpriteBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetBounds@CGdiSpriteBitmap@@WFA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5C40 (-GetBounds@CGdiSpriteBitmap@@WFA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4

  if ( *(_QWORD *)(a1 + 376) )
  {
    v4 = (float)*(int *)(a1 + 124);
    *a4 = v4;
    v5 = (float)*(int *)(a1 + 132);
    a4[1] = v5;
    a4[2] = fmaxf(v4, (float)(*(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 128)));
    a4[3] = fmaxf(v5, (float)(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 136)));
  }
  else
  {
    *(_QWORD *)a4 = 0LL;
    a4[2] = (float)*(int *)(a1 + 64);
    a4[3] = (float)*(int *)(a1 + 68);
  }
  return 0LL;
}

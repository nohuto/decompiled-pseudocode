/*
 * XREFs of ?DoGetTransform@CDeviceTextureImageSource@@AEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D478C
 * Callers:
 *     ?GetBounds@CDeviceTextureImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4800 (-GetBounds@CDeviceTextureImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?GetTransform@CDeviceTextureImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4960 (-GetTransform@CDeviceTextureImageSource@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetTransform@CDeviceTextureImageSource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4970 (-GetTransform@CDeviceTextureImageSource@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 * Callees:
 *     <none>
 */

char __fastcall CDeviceTextureImageSource::DoGetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    *(_DWORD *)a3 = 0;
    v3 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(a3 + 4) = 0;
    *(float *)(a3 + 8) = (float)*(int *)(v3 + 140);
    *(float *)(a3 + 12) = (float)*(int *)(v3 + 144);
  }
  *(_WORD *)(a2 + 64) = 32085;
  result = 1;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  return result;
}

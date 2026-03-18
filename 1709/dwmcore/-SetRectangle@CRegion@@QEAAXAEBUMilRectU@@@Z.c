/*
 * XREFs of ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180088FA4
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180088A20 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ @ 0x180088B10 (-MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRegion::SetRectangle(CRegion *this, const struct MilRectU *a2)
{
  int v2; // r9d
  __int64 v3; // kr00_8
  __int64 v4; // rax
  _DWORD *v5; // rdx

  v2 = *(_DWORD *)a2;
  v3 = *((_QWORD *)a2 + 1);
  v4 = HIDWORD(*(_QWORD *)a2);
  if ( *(_DWORD *)a2 >= (int)v3 || (int)v4 >= SHIDWORD(v3) )
  {
    **(_DWORD **)this = 0;
  }
  else
  {
    v5 = *(_DWORD **)this;
    *v5 = 2;
    v5[1] = v2;
    v5[2] = v3;
    v5[3] = v4;
    v5[4] = 16;
    v5[7] = v2;
    v5[8] = v3;
    v5[5] = HIDWORD(v3);
    v5[6] = 16;
  }
}

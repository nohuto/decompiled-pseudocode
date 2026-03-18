/*
 * XREFs of ?GetRotatedDisplayRectAtOrigin@CDisplay@@QEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1801AE3B0
 * Callers:
 *     ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18002BE90 (-GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetRotatedDisplayRectAtOrigin(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  _DWORD *result; // rax

  if ( ((a1[73] - 1) & 0xFFFFFFFD) != 0 )
  {
    *a2 = a1[25];
    a2[1] = a1[24];
    a2[2] = a1[27];
    a2[3] = a1[26];
  }
  else
  {
    *(_OWORD *)a2 = *((_OWORD *)a1 + 6);
  }
  v2 = a2[1];
  a2[2] -= *a2;
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  a2[3] -= v2;
  return result;
}

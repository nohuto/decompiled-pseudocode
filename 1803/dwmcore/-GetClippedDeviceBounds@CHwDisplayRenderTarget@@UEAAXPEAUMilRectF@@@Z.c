/*
 * XREFs of ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800468C0
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800602F0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetRotatedDisplayRectAtOrigin@CDisplay@@QEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1801E7518 (-GetRotatedDisplayRectAtOrigin@CDisplay@@QEBA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMIL.c)
 */

void __fastcall CHwDisplayRenderTarget::GetClippedDeviceBounds(CHwDisplayRenderTarget *this, struct MilRectF *a2)
{
  float *v2; // r11
  __int128 v3; // xmm0
  __int64 v4; // rcx
  char *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = (float *)a2;
  if ( *((_BYTE *)this + 16) || (*((_DWORD *)this + 31) & 0x4000) != 0 )
    v3 = *(_OWORD *)CDisplay::GetRotatedDisplayRectAtOrigin(*((_QWORD *)this + 3), &v6);
  else
    v3 = *(_OWORD *)(*((_QWORD *)this + 3) + 104LL);
  v4 = 4LL;
  v5 = (char *)((char *)&v6 - (char *)v2);
  v6 = v3;
  do
  {
    *v2 = (float)*(int *)((char *)v2 + (_QWORD)v5);
    ++v2;
    --v4;
  }
  while ( v4 );
}

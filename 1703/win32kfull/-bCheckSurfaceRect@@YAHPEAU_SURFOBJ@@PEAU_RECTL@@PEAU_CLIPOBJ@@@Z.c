/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C0096EB0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiEngCopyBits @ 0x1C012EC40 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0290F40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02914C0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngLineTo @ 0x1C0291C30 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0291E30 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C0291FC0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0292950 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v5; // edi
  BOOL v6; // eax
  _DWORD *v7; // rdx
  int v8; // eax
  int v9; // eax
  HDEV hdev; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+28h] [rbp-18h] BYREF

  v5 = 1;
  if ( a1 )
  {
    if ( a3 )
      v6 = a3->iDComplexity == 0;
    else
      v6 = 1;
    if ( !v6 )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v5 = 0;
      v12 = (__int128)*p_rclBounds;
      if ( *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0 )
      {
        hdev = a1->hdev;
        if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)&hdev) && (v7[8] & 0x20000) != 0 )
        {
          v8 = v7[650];
          p_rclBounds = (struct _RECTL *)&v12;
          LODWORD(v12) = v12 - v8;
          DWORD2(v12) -= v8;
          v9 = v7[651];
          DWORD1(v12) -= v9;
          HIDWORD(v12) -= v9;
        }
      }
      if ( v5
        && (p_rclBounds->right > a1->sizlBitmap.cx
         || p_rclBounds->left < 0
         || p_rclBounds->bottom > a1->sizlBitmap.cy
         || p_rclBounds->top < 0) )
      {
        return 0;
      }
    }
  }
  return v5;
}

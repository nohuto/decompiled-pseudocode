/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C00F3CA0
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0131F00 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0132370 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngPlgBlt @ 0x1C028E6C0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ?bValid@PDEVOBJ@@QEAAHXZ @ 0x1C008A1D8 (-bValid@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  int left; // r12d
  LONG top; // ebp
  LONG right; // r15d
  LONG bottom; // r14d
  RECTL *p_rclBounds; // rsi
  BOOL v13; // eax
  RECTL *v14; // rax
  _DWORD *v15; // rdx
  int v16; // eax
  int v17; // eax
  LONG v18; // r9d
  LONG v19; // r8d
  LONG v20; // ecx
  LONG v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  HDEV hdev; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v29; // [rsp+78h] [rbp+20h]

  v29 = a4;
  v5 = 0;
  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1;
  if ( a3 )
    v13 = a3->iDComplexity == 0;
  else
    v13 = 1;
  if ( !v13 )
  {
    p_rclBounds = &a3->rclBounds;
    top = a3->rclBounds.top;
    v14 = &a3->rclBounds;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
LABEL_9:
    left = v14->left;
    if ( v14->left > right || top > bottom )
      return v5;
    goto LABEL_11;
  }
  if ( a2 )
  {
    top = a2->top;
    v14 = a2;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_9;
  }
LABEL_11:
  if ( *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0 )
  {
    hdev = a1->hdev;
    if ( PDEVOBJ::bValid((PDEVOBJ *)&hdev) && (v15[8] & 0x20000) != 0 )
    {
      v16 = v15[650];
      left -= v16;
      right -= v16;
      v17 = v15[651];
      top -= v17;
      bottom -= v17;
    }
  }
  if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
  {
    if ( p_rclBounds )
    {
      if ( a2 )
      {
        v18 = a2->left;
        v19 = a2->right;
        v20 = a2->top;
        if ( p_rclBounds->left > a2->left )
          v18 = p_rclBounds->left;
        v21 = a2->bottom;
        if ( p_rclBounds->right < v19 )
          v19 = p_rclBounds->right;
        if ( p_rclBounds->top > v20 )
          v20 = p_rclBounds->top;
        if ( p_rclBounds->bottom < v21 )
          v21 = p_rclBounds->bottom;
        v22 = v19 - v18;
        if ( v22 <= 0 )
          v22 = 0;
        v23 = v21 - v20;
        *v29 = v22;
        if ( v23 <= 0 )
          v23 = 0;
        *a5 = v23;
        return 1;
      }
      v24 = p_rclBounds->right - p_rclBounds->left;
      if ( v24 <= 0 )
        v24 = 0;
      *v29 = v24;
      v25 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_41:
      if ( v25 <= 0 )
        v25 = 0;
      *a5 = v25;
      return 1;
    }
    if ( a2 )
    {
      v26 = a2->right - a2->left;
      if ( v26 <= 0 )
        v26 = 0;
      *v29 = v26;
      v25 = a2->bottom - a2->top;
      goto LABEL_41;
    }
    return 1;
  }
  return v5;
}

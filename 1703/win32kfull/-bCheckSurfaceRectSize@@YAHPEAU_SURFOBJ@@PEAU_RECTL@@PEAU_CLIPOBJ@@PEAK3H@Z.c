/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012F2C4
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C0096EB0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C012EC40 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngPlgBlt @ 0x1C0291FC0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  RECTL *p_rclBounds; // rsi
  BOOL v8; // eax
  LONG bottom; // eax
  int v10; // r15d
  LONG v11; // r14d
  int v12; // r12d
  LONG v13; // r13d
  __int64 v14; // rax
  struct _SURFOBJ *v15; // r8
  _DWORD *v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  LONG v20; // r8d
  LONG left; // r9d
  LONG top; // edx
  LONG v23; // ecx
  int v24; // r8d
  int v25; // ecx
  int v26; // eax
  __int64 v28; // [rsp+20h] [rbp-10h]
  LONG right; // [rsp+28h] [rbp-8h]
  struct _SURFOBJ *v30; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v31; // [rsp+88h] [rbp+58h]

  v31 = a4;
  v30 = a1;
  v5 = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1;
  if ( a3 )
    v8 = a3->iDComplexity == 0;
  else
    v8 = 1;
  if ( !v8 )
  {
    p_rclBounds = &a3->rclBounds;
    v28 = *(_QWORD *)&a3->rclBounds.left;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
LABEL_9:
    v10 = v28;
    v11 = right;
    if ( (int)v28 > right )
      return v5;
    v12 = HIDWORD(v28);
    v13 = bottom;
    if ( SHIDWORD(v28) > bottom )
      return v5;
    goto LABEL_13;
  }
  if ( a2 )
  {
    v28 = *(_QWORD *)&a2->left;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_9;
  }
  v13 = 0;
  v11 = 0;
  v12 = 0;
  v10 = 0;
LABEL_13:
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
  v15 = v30;
  if ( *(int *)(v14 + 112) < 0 )
  {
    v30 = (struct _SURFOBJ *)v30->hdev;
    if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)&v30) && (v16[8] & 0x20000) != 0 )
    {
      v17 = v16[650];
      v10 -= v17;
      v11 -= v17;
      v18 = v16[651];
      v12 -= v18;
      v13 -= v18;
    }
  }
  if ( v11 <= v15->sizlBitmap.cx && v10 >= 0 && v13 <= v15->sizlBitmap.cy && v12 >= 0 )
  {
    if ( p_rclBounds )
    {
      v19 = 0;
      if ( a2 )
      {
        v20 = a2->right;
        left = a2->left;
        top = a2->top;
        if ( p_rclBounds->left > a2->left )
          left = p_rclBounds->left;
        v23 = a2->bottom;
        if ( p_rclBounds->right < v20 )
          v20 = p_rclBounds->right;
        if ( p_rclBounds->top > top )
          top = p_rclBounds->top;
        if ( p_rclBounds->bottom < v23 )
          v23 = p_rclBounds->bottom;
        v24 = v20 - left;
        if ( v24 > 0 )
          v19 = v24;
        v25 = v23 - top;
        *v31 = v19;
      }
      else
      {
        if ( p_rclBounds->right - p_rclBounds->left > 0 )
          v19 = p_rclBounds->right - p_rclBounds->left;
        *v31 = v19;
        v25 = p_rclBounds->bottom - p_rclBounds->top;
      }
LABEL_41:
      if ( v25 > 0 )
        v5 = v25;
      *a5 = v5;
      return 1;
    }
    if ( a2 )
    {
      v26 = 0;
      if ( a2->right - a2->left > 0 )
        v26 = a2->right - a2->left;
      *v31 = v26;
      v25 = a2->bottom - a2->top;
      goto LABEL_41;
    }
    return 1;
  }
  return v5;
}

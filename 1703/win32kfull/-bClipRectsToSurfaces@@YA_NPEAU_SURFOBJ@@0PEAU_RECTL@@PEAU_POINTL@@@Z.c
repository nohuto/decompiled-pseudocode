/*
 * XREFs of ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C013FB74
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C013FC54 (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

bool __fastcall bClipRectsToSurfaces(struct _SURFOBJ *a1, struct _SURFOBJ *a2, struct tagRECT *a3, struct _POINTL *a4)
{
  int v5; // esi
  int v7; // edi
  LONG top; // eax
  LONG left; // ecx
  struct tagRECT v12; // [rsp+20h] [rbp-48h] BYREF
  struct _RECTL v13; // [rsp+30h] [rbp-38h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-28h] BYREF

  v5 = a4->x - a3->left;
  v7 = a4->y - a3->top;
  vGetSurfaceBoundsRect(a1, &v13);
  vGetSurfaceBoundsRect(a2, &v14);
  v12 = *a3;
  ERECTL::operator*=(&v12, &v13);
  v12.left += v5;
  v12.right += v5;
  v12.top += v7;
  v12.bottom += v7;
  ERECTL::operator*=(&v12, &v14);
  top = v12.top;
  left = v12.left;
  v12.right -= v5;
  v12.bottom -= v7;
  a4->y = v12.top;
  a4->x = left;
  v12.left = left - v5;
  v12.top = top - v7;
  *a3 = v12;
  return !IsRectEmptyInl(&v12);
}

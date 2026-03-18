/*
 * XREFs of ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C013FC54
 * Callers:
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C013FB74 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vGetSurfaceBoundsRect(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  HDEV hdev; // rax

  a2->left = 0;
  a2->top = 0;
  if ( *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[8] & 0x20000) != 0 )
      {
        LODWORD(a2->left) = hdev[650];
        a2->top = (int)hdev[651];
      }
    }
  }
  a2->right = a2->left + a1->sizlBitmap.cx;
  a2->bottom = a2->top + a1->sizlBitmap.cy;
}

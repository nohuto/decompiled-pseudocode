/*
 * XREFs of ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x180156B1C
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18015711C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ClipPlaneIterator::HasMoreClipPlanes(ClipPlaneIterator *this)
{
  return *((_DWORD *)this + 2) < *((_DWORD *)this + 12) || *((_DWORD *)this + 3) < *((_DWORD *)this + 28);
}

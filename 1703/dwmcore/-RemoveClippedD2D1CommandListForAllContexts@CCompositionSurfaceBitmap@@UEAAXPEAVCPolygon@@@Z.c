/*
 * XREFs of ?RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z @ 0x180164600
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x18019B9C8 (-RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::RemoveClippedD2D1CommandListForAllContexts(
        CCompositionSurfaceBitmap *this,
        struct CPolygon *a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
    CD2DCommandList::RemoveID2DCommandList(*(CD2DCommandList **)(*((_QWORD *)this + 50) + 16LL * i), a2);
}

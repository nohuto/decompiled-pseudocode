/*
 * XREFs of ?RemoveClippedD2D1CommandListForAllContexts@CAtlasedRectsGroup@@UEAAXPEAVCPolygon@@@Z @ 0x180178890
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x18019B9C8 (-RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CAtlasedRectsGroup::RemoveClippedD2D1CommandListForAllContexts(
        CAtlasedRectsGroup *this,
        struct CPolygon *a2)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    CD2DCommandList::RemoveID2DCommandList(*(CD2DCommandList **)(*((_QWORD *)this + 11) + 8 * i), a2);
}

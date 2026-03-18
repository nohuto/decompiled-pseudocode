/*
 * XREFs of ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x18001A250
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18001A19C (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CBrushRenderingGraph::~CBrushRenderingGraph(this, a2);
  if ( (v2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

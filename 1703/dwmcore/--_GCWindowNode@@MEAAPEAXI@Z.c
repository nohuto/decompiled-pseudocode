/*
 * XREFs of ??_GCWindowNode@@MEAAPEAXI@Z @ 0x18004FE70
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800538D0 (--1CWindowNode@@MEAA@XZ.c)
 */

CWindowNode *__fastcall CWindowNode::`scalar deleting destructor'(CWindowNode *this, char a2)
{
  CWindowNode::~CWindowNode(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

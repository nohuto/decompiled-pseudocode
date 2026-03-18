/*
 * XREFs of ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180098AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18009C498 (--1CWindowNode@@MEAA@XZ.c)
 */

CWindowNode *__fastcall CWindowNode::`scalar deleting destructor'(CWindowNode *this, char a2)
{
  CWindowNode::~CWindowNode(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

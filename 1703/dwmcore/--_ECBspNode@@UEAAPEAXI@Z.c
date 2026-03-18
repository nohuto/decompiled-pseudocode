/*
 * XREFs of ??_ECBspNode@@UEAAPEAXI@Z @ 0x1801BFE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x1801BFDDC (--1CBspNode@@UEAA@XZ.c)
 */

CBspNode *__fastcall CBspNode::`vector deleting destructor'(CBspNode *this, char a2)
{
  CBspNode::~CBspNode(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

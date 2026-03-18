/*
 * XREFs of ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800C190C
 * Callers:
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800C16B4 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180144640 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800BBCC0 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 */

CWindowAssociationMapEntry *__fastcall CWindowAssociationMapEntry::`scalar deleting destructor'(
        CWindowAssociationMapEntry *this)
{
  CPtrArrayBase::Clear((CWindowAssociationMapEntry *)((char *)this + 16));
  WPF::ProcessHeapImpl::Free(this);
  return this;
}

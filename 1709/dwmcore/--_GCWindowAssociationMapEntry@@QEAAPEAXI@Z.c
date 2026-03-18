/*
 * XREFs of ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800B6A9C
 * Callers:
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800B68A4 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180130290 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B2130 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 */

CWindowAssociationMapEntry *__fastcall CWindowAssociationMapEntry::`scalar deleting destructor'(
        CWindowAssociationMapEntry *this)
{
  CPtrArrayBase::Clear((CWindowAssociationMapEntry *)((char *)this + 16));
  WPF::ProcessHeapImpl::Free(this);
  return this;
}

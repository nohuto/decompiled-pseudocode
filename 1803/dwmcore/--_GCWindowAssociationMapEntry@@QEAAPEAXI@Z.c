/*
 * XREFs of ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800C0134
 * Callers:
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800BFEEC (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180151E80 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B951C (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 */

CWindowAssociationMapEntry *__fastcall CWindowAssociationMapEntry::`scalar deleting destructor'(
        CWindowAssociationMapEntry *this)
{
  CPtrArrayBase::Clear((CWindowAssociationMapEntry *)((char *)this + 16));
  operator delete(this);
  return this;
}

/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800BBCC0
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800889B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800C190C (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??_GCThreadContext@@AEAAPEAXI@Z @ 0x180185FDC (--_GCThreadContext@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    WPF::ProcessHeapImpl::Free((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}

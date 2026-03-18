/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B2130
 * Callers:
 *     ?RemoveAllLights@CVisual@@QEAAXXZ @ 0x180050288 (-RemoveAllLights@CVisual@@QEAAXXZ.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800B6A9C (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??_GCThreadContext@@AEAAPEAXI@Z @ 0x18018ED6C (--_GCThreadContext@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    WPF::ProcessHeapImpl::Free((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}

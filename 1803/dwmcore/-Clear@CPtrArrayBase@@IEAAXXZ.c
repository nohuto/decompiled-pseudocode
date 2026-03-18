/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B951C
 * Callers:
 *     ?RemoveAllLights@CVisual@@QEAAXXZ @ 0x18004E184 (-RemoveAllLights@CVisual@@QEAAXXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E20C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800C0134 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x1801C6950 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    operator delete((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}

/*
 * XREFs of ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18004F1B0
 * Callers:
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004F630 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetInteractionInternal(CVisual *this, struct CInteraction *a2)
{
  struct CInteraction *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CInteraction *)`CVisual::SetInteractionInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x2000000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 7u, 8u, &v2);
}

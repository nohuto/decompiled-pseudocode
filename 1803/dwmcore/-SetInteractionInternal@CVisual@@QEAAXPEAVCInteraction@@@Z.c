/*
 * XREFs of ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18004D064
 * Callers:
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004D604 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004D868 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetInteractionInternal(CVisual *this, struct CInteraction *a2)
{
  char **v2; // rcx
  struct CInteraction *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CInteraction *)`CVisual::SetInteractionInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x2000000u;
  else
    CSparseStorage::SetData(v2, 7, 8u, &v3);
}

/*
 * XREFs of ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x180085680
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetInteractionInternal(CVisual *this, struct CInteraction *a2)
{
  struct CInteraction *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CInteraction *)`CVisual::SetInteractionInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x2000000u;
  else
    CSparseStorage::SetData((char **)this + 26, 7, 8u, &v2);
}

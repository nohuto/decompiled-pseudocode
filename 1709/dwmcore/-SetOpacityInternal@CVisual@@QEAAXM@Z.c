/*
 * XREFs of ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18004EDF0
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004F95C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetOpacityInternal(CVisual *this, float a2)
{
  float v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( LODWORD(a2) == `CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x100000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 0xCu, 4u, &v2);
}

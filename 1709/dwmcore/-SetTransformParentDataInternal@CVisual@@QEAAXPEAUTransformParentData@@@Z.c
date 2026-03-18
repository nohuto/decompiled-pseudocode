/*
 * XREFs of ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004EB84
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180052890 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTransformParentDataInternal(CVisual *this, struct TransformParentData *a2)
{
  struct TransformParentData *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct TransformParentData *)`CVisual::SetTransformParentDataInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x10000000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 4u, 8u, &v2);
}

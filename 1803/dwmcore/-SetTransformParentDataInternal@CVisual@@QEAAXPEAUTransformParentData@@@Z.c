/*
 * XREFs of ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004CB9C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180050B88 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTransformParentDataInternal(CVisual *this, struct TransformParentData *a2)
{
  char **v2; // rcx
  struct TransformParentData *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct TransformParentData *)`CVisual::SetTransformParentDataInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x10000000u;
  else
    CSparseStorage::SetData(v2, 4, 8u, &v3);
}

/*
 * XREFs of ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180010510
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x18000318C (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EE14 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccent::SetClipRegion(CBaseObject **this, struct CResource *a2)
{
  void (__fastcall *v4)(CVisual *__hidden, unsigned int); // rax
  CBaseObject *v5; // rcx

  if ( a2 != this[49] )
  {
    v4 = (void (__fastcall *)(CVisual *__hidden, unsigned int))*((_QWORD *)*this + 3);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags((CVisual *)this, 0x8000u);
    else
      v4((CVisual *)this, 0x8000u);
    v5 = this[49];
    if ( v5 )
      CBaseObject::Release(v5);
    this[49] = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
}

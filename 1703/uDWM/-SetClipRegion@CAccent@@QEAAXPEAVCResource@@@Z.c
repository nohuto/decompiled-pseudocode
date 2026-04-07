/*
 * XREFs of ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x18001D308
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180006958 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A500 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAccent::SetClipRegion(CBaseObject **this, struct CResource *a2)
{
  CBaseObject *v4; // rcx

  if ( a2 != this[48] )
  {
    CVisual::SetDirtyFlags((CVisual *)this, 0x8000u);
    v4 = this[48];
    if ( v4 )
      CBaseObject::Release(v4);
    this[48] = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
}

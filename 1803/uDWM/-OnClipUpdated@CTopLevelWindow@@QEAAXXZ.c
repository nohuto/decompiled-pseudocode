/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EE14
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029840 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180010510 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006C3A0 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnClipUpdated(CBaseObject ***this)
{
  CBaseObject **v2; // rcx
  CBaseObject **v3; // rdx

  if ( (*((_BYTE *)this[90] + 593) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[33];
  if ( v2 )
  {
    v3 = this[90];
    if ( (*((_BYTE *)v3 + 156) & 0x10) != 0 )
      CAccent::SetClipRegion(v2, v3[45]);
  }
}

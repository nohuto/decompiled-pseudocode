/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EC8C
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029DB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180012480 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001ECD4 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
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
    if ( (*((_BYTE *)v3 + 156) & 0x10) != 0 && (unsigned int)(*((_DWORD *)v3 + 38) - 2) <= 1 )
      CAccent::SetClipRegion(v2, v3[46]);
  }
}

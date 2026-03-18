/*
 * XREFs of ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800B8DC4
 * Callers:
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000BDD0 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800B9014 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18009CCF0 (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CSpriteVisualContent **this, __int64 a2)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  char v4; // dl

  BrushGraph = CSpriteVisualContent::GetBrushGraph(this[8], a2);
  v4 = 0;
  *((_BYTE *)this + 360) = 0;
  if ( BrushGraph )
  {
    if ( this != (CSpriteVisualContent **)-360LL )
      *((_BYTE *)this + 360) = *((_BYTE *)BrushGraph + 193);
    if ( *((_BYTE *)BrushGraph + 192) )
      v4 = 1;
  }
  *((_BYTE *)this + 359) = v4;
}

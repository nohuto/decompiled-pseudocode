/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18004B390
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18004B464 (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z @ 0x180034524 (--$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800C1D18 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 */

void __fastcall CInteraction::UnRegisterNotifiers(struct CResource **this)
{
  ReleaseInterface<CWeakReference<CVisual>>(this + 14);
  CResource::UnRegisterNotifier<CHoverPointerSource *>((CResource *)this, this + 34);
  CResource::UnRegisterNotifier<CHoverPointerSource *>((CResource *)this, this + 35);
}

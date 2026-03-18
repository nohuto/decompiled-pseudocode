/*
 * XREFs of ??1CHolographicExclusiveView@@EEAA@XZ @ 0x1801F9BE8
 * Callers:
 *     ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x1801F9C20 (--_GCHolographicExclusiveView@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CHolographicExclusiveView::~CHolographicExclusiveView(CHolographicExclusiveView *this)
{
  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 14));
  CResource::~CResource(this);
}

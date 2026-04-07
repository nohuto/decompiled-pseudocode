/*
 * XREFs of ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009D010
 * Callers:
 *     ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x18009D040 (--_ECTouchPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x18009D600 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::~CTouchPressHoldVisual(CTouchPressHoldVisual *this)
{
  *(_QWORD *)this = &CTouchPressHoldVisual::`vftable';
  CTouchPressHoldVisual::Stop(this);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}

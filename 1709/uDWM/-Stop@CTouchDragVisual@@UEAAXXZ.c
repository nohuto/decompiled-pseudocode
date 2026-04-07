/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800877A0
 * Callers:
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x180086DC8 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180087268 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180039F70 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 441) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTouchDragVisual_End);
    *((_BYTE *)this + 441) = 1;
  }
}

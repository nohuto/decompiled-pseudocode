/*
 * XREFs of ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x180095848
 * Callers:
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F3EC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F56C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F75C (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180095540 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x180095890 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

void __fastcall CIndirectTouchVisual::UpdateOpacityAndSource(CImage **this)
{
  CVisual::SetOpacity((CVisual *)this, *((float *)this + 85));
  CImage::SetBitmapSource(this[47], *((struct CBitmapSource **)this[48] + *((unsigned int *)this + 86)));
}

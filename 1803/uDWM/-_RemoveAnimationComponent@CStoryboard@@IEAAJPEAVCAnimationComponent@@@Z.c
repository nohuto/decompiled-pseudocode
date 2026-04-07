/*
 * XREFs of ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18009E648
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000996C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x18009E800 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18009EA04 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009EC58 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180006BB0 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180007AD4 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CStoryboard::_RemoveAnimationComponent(CStoryboard *this, struct CVisual **a2)
{
  struct CVisual **v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CAnimationComponent *,0>::Remove((__int64 *)this + 11, &v4);
  CTransitionVisualController::RemoveAnimationComponent(
    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
    a2);
  if ( a2 )
    CBaseObject::Release((CBaseObject *)a2);
  return 0LL;
}

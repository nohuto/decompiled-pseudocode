/*
 * XREFs of ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@@@Z @ 0x180093EA8
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180096F58 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetCVIBrush(
        CAnimatedTransitionVisual *this,
        struct CCachedVisualImageBrushResource *a2,
        struct CResource *a3)
{
  CBaseObject *v5; // rcx
  CBaseObject *v7; // rcx

  v5 = (CBaseObject *)*((_QWORD *)this + 74);
  if ( v5 )
    CBaseObject::Release(v5);
  *((_QWORD *)this + 74) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v7 = (CBaseObject *)*((_QWORD *)this + 73);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 73) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  return 0LL;
}

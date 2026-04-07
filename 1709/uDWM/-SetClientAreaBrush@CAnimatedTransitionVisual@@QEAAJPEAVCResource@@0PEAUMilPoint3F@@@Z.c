/*
 * XREFs of ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x18000AA38
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180006C7C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetClientAreaBrush(
        CAnimatedTransitionVisual *this,
        struct CResource *a2,
        struct CResource *a3,
        struct MilPoint3F *a4)
{
  CBaseObject *v6; // rcx
  CBaseObject *v9; // rcx
  int v10; // eax

  v6 = (CBaseObject *)*((_QWORD *)this + 76);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 76) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v9 = (CBaseObject *)*((_QWORD *)this + 73);
  if ( v9 )
    CBaseObject::Release(v9);
  *((_QWORD *)this + 73) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v10 = *((_DWORD *)a4 + 2);
  *(_QWORD *)((char *)this + 812) = *(_QWORD *)a4;
  *((_DWORD *)this + 205) = v10;
  return 0LL;
}

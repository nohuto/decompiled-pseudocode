/*
 * XREFs of ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008AD34
 * Callers:
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E154 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x18008F57C (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E9E4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x18002EB38 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetBitmap(CBaseObject **this, struct CResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int updated; // eax
  CBaseObject *v7; // rcx
  struct CResource *v8; // rax

  v4 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, a2[2]);
    v5 = updated;
    if ( updated >= 0 )
    {
      v7 = this[75];
      if ( v7 )
        CBaseObject::Release(v7);
      this[75] = a2[2];
      v8 = a2[2];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x32Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x329u);
  }
  return v5;
}

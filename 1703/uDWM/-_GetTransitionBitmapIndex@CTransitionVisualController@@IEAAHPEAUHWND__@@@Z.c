/*
 * XREFs of ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180093638
 * Callers:
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180092038 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x180092DCC (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x180092FF4 (-HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::_GetTransitionBitmapIndex(CTransitionVisualController *this, HWND a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  unsigned int v4; // r8d

  v2 = *((_DWORD *)this + 44);
  v3 = -1;
  v4 = 0;
  if ( v2 )
  {
    while ( *(HWND *)(56LL * v4 + *((_QWORD *)this + 19)) != a2 )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    return v4;
  }
  return v3;
}

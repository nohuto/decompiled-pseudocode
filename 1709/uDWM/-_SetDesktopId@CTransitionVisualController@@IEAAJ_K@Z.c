/*
 * XREFs of ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180004F80
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180006C7C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006EE0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E32C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E944 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetDesktopId(CTransitionVisualController *this, __int64 a2)
{
  unsigned int v2; // ebx
  signed int LastError; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 12) == -1LL )
  {
    SetLastError(0);
    if ( !(unsigned int)GetDesktopID(1LL, &v9) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v8 = 3077;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v2 = LastError;
      v7 = LastError;
      goto LABEL_15;
    }
    if ( v9 == a2 )
    {
      *((_QWORD *)this + 12) = a2;
      return v2;
    }
    v8 = 3086;
LABEL_14:
    v7 = -2003304443;
    v2 = -2003304443;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v7,
      v8);
    return v2;
  }
  if ( *((_QWORD *)this + 12) != a2 )
  {
    v8 = 3092;
    goto LABEL_14;
  }
  return v2;
}

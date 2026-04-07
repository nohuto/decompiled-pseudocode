/*
 * XREFs of ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x180092DCC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800997E0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A2C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009B830 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180093638 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetBitmapRects(
        CTransitionVisualController *this,
        HWND a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  unsigned int v7; // ebx
  int TransitionBitmapIndex; // eax

  v7 = 0;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(this, a2);
  if ( TransitionBitmapIndex >= 0 )
  {
    if ( a3 )
      *a3 = *(struct tagRECT *)(56LL * (unsigned int)TransitionBitmapIndex + *((_QWORD *)this + 19) + 12);
    if ( a4 )
      *a4 = *(struct tagRECT *)(56LL * (unsigned int)TransitionBitmapIndex + *((_QWORD *)this + 19) + 28);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v7;
}

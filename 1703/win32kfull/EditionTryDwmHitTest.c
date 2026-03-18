/*
 * XREFs of EditionTryDwmHitTest @ 0x1C005F960
 * Callers:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAI@Z @ 0x1C01CFDC0 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 *     xxxTouchTargetWindow @ 0x1C01D2798 (xxxTouchTargetWindow.c)
 * Callees:
 *     ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C019DC2C (-WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall EditionTryDwmHitTest(struct tagWND *a1)
{
  return !gbNoMoreDITHitTest
      && (unsigned int)IsDwmInputThread()
      && ((gdwMitConfig & 4) == 0 || (unsigned __int8)IsInputProcessingActivated())
      && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0
      && (!a1 || (unsigned int)WindowHasAnyCompositionTargetWithInputSink(a1));
}

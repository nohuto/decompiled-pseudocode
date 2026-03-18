/*
 * XREFs of EditionTryDwmHitTest @ 0x1C005DF50
 * Callers:
 *     xxxSpeedHitTest @ 0x1C005DC7C (xxxSpeedHitTest.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 * Callees:
 *     ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C01BA18C (-WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall EditionTryDwmHitTest(struct tagWND *a1)
{
  return !gbNoMoreDITHitTest
      && (unsigned int)IsDwmInputThread()
      && ((gdwMitConfig & 4) == 0 || (unsigned __int8)IsInputProcessingActivated())
      && (*(_DWORD *)(gptiCurrent + 464LL) & 1) == 0
      && (!a1 || (unsigned int)WindowHasAnyCompositionTargetWithInputSink(a1));
}

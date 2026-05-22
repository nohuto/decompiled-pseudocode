/*
 * XREFs of ?GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1800DBDEC
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800B3F20 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1800DE3F4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

__int64 __fastcall GestureRecognizerReadConfigValue(int a1, __int64 a2)
{
  int v4; // ecx
  unsigned __int16 v5; // ax
  __int64 result; // rax

  if ( a1 <= 27 && a2 )
  {
    *(_DWORD *)a2 = a1;
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 1:
        v5 = ClickRecognizer::s_doubleTapTimeThreshold;
        goto LABEL_55;
      case 2:
        v5 = ClickRecognizer::s_doubleTapDistanceThreshold;
        goto LABEL_55;
      case 3:
        v5 = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
        goto LABEL_55;
      case 4:
        v5 = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
        goto LABEL_55;
      case 5:
        v5 = ClickRecognizer::s_tapAndHoldDurationThreshold;
        goto LABEL_55;
      case 6:
        v5 = ClickRecognizer::s_tapAndLongHoldTimeThreshold;
        goto LABEL_55;
      case 7:
        v5 = ClickRecognizer::s_tapAndHoldDistanceThreshold;
        goto LABEL_55;
    }
    GestureRecognizer::StaticInitConfig();
    v4 = 18;
    if ( a1 == 18 )
    {
      v5 = PinchStretchRecognizer::s_minimumUpdateThreshold;
LABEL_56:
      *(_WORD *)(a2 + 4) = v5;
      result = 0LL;
      *(_DWORD *)a2 = v4;
      return result;
    }
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 8:
        v5 = DragRecognizer::s_initialDragThreshold;
        goto LABEL_55;
      case 9:
        v5 = DragRecognizer::s_orientationBias;
        goto LABEL_55;
      case 10:
        v5 = DragRecognizer::s_directionLockThreshold;
        goto LABEL_55;
      case 11:
        v5 = DragRecognizer::s_directionLockMinorThreshold;
        goto LABEL_55;
      case 12:
        v5 = DragRecognizer::s_minimumUpdateThreshold;
        goto LABEL_55;
      case 13:
        v5 = DragRecognizer::s_jitterDeadZoneThreshold;
        goto LABEL_55;
    }
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 14:
        v5 = FlickRecognizer::s_minimumFlickSpeed;
        goto LABEL_55;
      case 15:
        v5 = FlickRecognizer::s_minimumFlickDelta;
        goto LABEL_55;
      case 16:
        v5 = FlickRecognizer::s_maximumFlickTail;
        goto LABEL_55;
      case 17:
        v5 = FlickRecognizer::s_maximumFlickUp;
        goto LABEL_55;
    }
    GestureRecognizer::StaticInitConfig();
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 19:
        v5 = TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold;
        goto LABEL_55;
      case 20:
        v5 = TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold;
        goto LABEL_55;
      case 21:
        v5 = TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold;
        goto LABEL_55;
      case 22:
        v5 = TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold;
        goto LABEL_55;
      case 23:
        v5 = TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold;
        goto LABEL_55;
      case 24:
        v5 = TwoFingerClickRecognizer::s_twoFingerDistanceThreshold;
        goto LABEL_55;
    }
    GestureRecognizer::StaticInitConfig();
    if ( a1 == 25 )
    {
      v5 = TwoFingerDragRecognizer::s_initialDragThreshold;
      goto LABEL_55;
    }
    if ( a1 == 26 )
    {
      v5 = TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold;
LABEL_55:
      v4 = a1;
      goto LABEL_56;
    }
  }
  return 2147942487LL;
}

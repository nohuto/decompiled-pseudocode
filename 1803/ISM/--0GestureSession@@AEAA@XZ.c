/*
 * XREFs of ??0GestureSession@@AEAA@XZ @ 0x1800DAFEC
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3864 (-Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?Reset@GestureSession@@UEAAJXZ @ 0x1800DB680 (-Reset@GestureSession@@UEAAJXZ.c)
 *     ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x1800DD940 (-ResetConfigValues@DragRecognizer@@UEAAXXZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1800DE3F4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
GestureSession *__fastcall GestureSession::GestureSession(GestureSession *this)
{
  char *v2; // r15

  *(_QWORD *)this = &GestureSession::`vftable';
  v2 = (char *)this + 32;
  *((_DWORD *)this + 10) = 527;
  *((_QWORD *)this + 4) = &ClickRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)v2 + 13) = ClickRecognizer::s_doubleTapTimeThreshold;
  *((_WORD *)v2 + 12) = ClickRecognizer::s_doubleTapDistanceThreshold;
  *((_WORD *)v2 + 14) = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
  *((_WORD *)v2 + 17) = ClickRecognizer::s_tapAndLongHoldTimeThreshold;
  *((_WORD *)v2 + 15) = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
  *((_WORD *)v2 + 16) = ClickRecognizer::s_tapAndHoldDurationThreshold;
  *((_WORD *)v2 + 18) = ClickRecognizer::s_tapAndHoldDistanceThreshold;
  *((_WORD *)v2 + 8) &= 0x80u;
  *((_WORD *)v2 + 8) |= 2u;
  *((_QWORD *)v2 + 14) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_QWORD *)v2 + 13) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_DWORD *)v2 + 12) = 0;
  *((_DWORD *)v2 + 10) = 12;
  *(_QWORD *)(v2 + 52) = 0LL;
  *((_DWORD *)v2 + 15) = 0;
  *((_DWORD *)v2 + 13) = 12;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 9) = 0LL;
  *((_DWORD *)v2 + 16) = 16;
  *((_QWORD *)v2 + 10) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_DWORD *)v2 + 20) = 16;
  *((_DWORD *)this + 44) = 112;
  *((_QWORD *)this + 21) = &DragRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  DragRecognizer::ResetConfigValues((GestureSession *)((char *)this + 168));
  *((_DWORD *)this + 64) = 256;
  *((_QWORD *)this + 31) = &FlickRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 202) = FlickRecognizer::s_minimumFlickSpeed;
  *((_WORD *)this + 203) = FlickRecognizer::s_minimumFlickDelta;
  *((_WORD *)this + 204) = FlickRecognizer::s_maximumFlickTail;
  *((_WORD *)this + 205) = FlickRecognizer::s_maximumFlickUp;
  *((_DWORD *)this + 106) = 128;
  *((_QWORD *)this + 52) = &PinchStretchRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 237) = PinchStretchRecognizer::s_minimumUpdateThreshold;
  *((_DWORD *)this + 122) = 31744;
  *((_QWORD *)this + 60) = &TwoFingerGestureRecognizer::`vftable';
  *((_DWORD *)this + 126) = 23552;
  *((_QWORD *)this + 62) = &TwoFingerClickRecognizer::`vftable';
  *((_DWORD *)this + 130) = 0;
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 278) = TwoFingerClickRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 279) = TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 280) = TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold;
  *((_WORD *)this + 281) = TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold;
  *((_WORD *)this + 283) = TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold;
  *((_WORD *)this + 282) = TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold;
  *((_WORD *)this + 256) &= 0x14u;
  *(_QWORD *)((char *)this + 532) = 0LL;
  *(_QWORD *)((char *)this + 540) = 0LL;
  *(_QWORD *)((char *)this + 548) = 0LL;
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 144) = 25600;
  *((_QWORD *)this + 71) = &TwoFingerDragRecognizer::`vftable';
  *((_DWORD *)this + 148) = 0;
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 322) = TwoFingerDragRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 323) = TwoFingerDragRecognizer::s_initialDragThreshold;
  *((_WORD *)this + 326) = TwoFingerDragRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 327) = TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold;
  *((_WORD *)this + 292) = 0;
  *(_QWORD *)((char *)this + 596) = 0LL;
  *(_QWORD *)((char *)this + 604) = 0LL;
  *(_QWORD *)((char *)this + 612) = 0LL;
  *((_DWORD *)this + 147) = 0;
  *((_WORD *)this + 328) = 0;
  *((_DWORD *)this + 165) = 12;
  *((_DWORD *)this + 168) = 28;
  *((_WORD *)this + 577) = -1;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 88) = v2;
  *((_QWORD *)this + 89) = (char *)this + 168;
  *((_QWORD *)this + 90) = (char *)this + 248;
  *((_QWORD *)this + 91) = (char *)this + 416;
  *((_QWORD *)this + 92) = (char *)this + 480;
  GestureSession::Reset(this);
  return this;
}

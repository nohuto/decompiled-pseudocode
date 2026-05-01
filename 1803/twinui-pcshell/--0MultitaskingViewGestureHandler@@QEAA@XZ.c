/*
 * XREFs of ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x18026BE8C
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x18026BBCC (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@@WRL@Microsoft@@QEAA@XZ @ 0x18026BE44 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITo.c)
 */

MultitaskingViewGestureHandler *__fastcall MultitaskingViewGestureHandler::MultitaskingViewGestureHandler(
        MultitaskingViewGestureHandler *this)
{
  MultitaskingViewGestureHandler *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture>(this);
  *(_QWORD *)this = &MultitaskingViewGestureHandler::`vftable'{for `IMultitaskingViewGestureHandler'};
  *((_QWORD *)this + 1) = &MultitaskingViewGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITouchpadGesture>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 7500;
  *((_DWORD *)this + 21) = 5000;
  *((_QWORD *)this + 11) = 0x3F947AE147AE147BLL;
  *((_QWORD *)this + 12) = 0x3F947AE147AE147BLL;
  *((_QWORD *)this + 16) = 300000LL;
  *((_QWORD *)this + 17) = 300000LL;
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}

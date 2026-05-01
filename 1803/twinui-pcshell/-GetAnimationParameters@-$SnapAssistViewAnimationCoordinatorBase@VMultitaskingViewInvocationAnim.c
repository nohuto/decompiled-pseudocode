/*
 * XREFs of ?GetAnimationParameters@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x180285120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewInvocationAnimationCoordinator>::GetAnimationParameters(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = xmmword_180437450;
  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  v4 = xmmword_180437460;
  a2[1] = v3;
  v5 = xmmword_180437470;
  a2[2] = v4;
  a2[3] = v5;
  v6 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 168LL))(a1, v8);
  result = a2;
  *a2 = v6;
  return result;
}

/*
 * XREFs of ?ShouldTreatItemAsMinimized@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAA_NPEAUISwitchItemElement@@@Z @ 0x180285790
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x180299060 (-ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemEleme.c)
 */

char __fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::ShouldTreatItemAsMinimized(
        MultitaskingViewAnimationCoordinatorBase *a1,
        struct ISwitchItemElement *a2)
{
  char v4; // bl
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( MultitaskingViewAnimationCoordinatorBase::ShouldTreatItemAsMinimized(a1, a2) )
    return 1;
  v5 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      30LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\SnapAssistViewAnimationCoordinatorBase.h",
      (const char *)(unsigned int)v5);
    return 1;
  }
  if ( v8 != *((_QWORD *)a1 + 27) )
    return 1;
  return v4;
}

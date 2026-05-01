/*
 * XREFs of _lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator() @ 0x1802DA35C
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1802DA8D0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InvokeCallback @ 0x1802DEA70 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_InvokeCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x1802DADDC (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator()(WindowArrangementView **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WindowArrangementView::EndDrag(*a1, 0);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}

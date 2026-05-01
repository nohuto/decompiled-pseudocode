/*
 * XREFs of ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x1802DDE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1802DA8D0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 */

__int64 __fastcall WindowArrangementView::TryInvokeBack(WindowArrangementView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WindowArrangementView::CancelPlacement((WindowArrangementView *)((char *)this - 8));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}

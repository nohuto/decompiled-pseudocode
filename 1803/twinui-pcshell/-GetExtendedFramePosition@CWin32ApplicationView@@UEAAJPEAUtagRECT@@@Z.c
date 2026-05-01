/*
 * XREFs of ?GetExtendedFramePosition@CWin32ApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x18013FD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180142EF8 (-_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetExtendedFramePosition(CWin32ApplicationView *this, struct tagRECT *a2)
{
  HWND v4; // rax
  CApplicationViewBase *v5; // rcx
  int ExtendedFramePosition; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SetRectEmpty(a2);
  v4 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26));
  if ( !v4 )
    return 1400LL;
  ExtendedFramePosition = CApplicationViewBase::_GetExtendedFramePosition(v5, v4, a2);
  v8 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ExtendedFramePosition);
  return v8;
}

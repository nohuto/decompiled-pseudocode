/*
 * XREFs of ?GetGestureState@MultitaskingViewGestureHandler@@UEAAJPEAPEAUIMultitaskingViewGestureState@@@Z @ 0x18026C740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::GetGestureState(
        MultitaskingViewGestureHandler *this,
        struct IMultitaskingViewGestureState **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMultitaskingViewGestureState **))this + 7))(
         *((_QWORD *)this + 7),
         &GUID_ddc50c84_64c9_4fa3_9109_d8e7645b7ebc,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}

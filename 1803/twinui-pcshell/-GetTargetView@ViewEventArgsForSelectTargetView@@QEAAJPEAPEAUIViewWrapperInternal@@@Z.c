/*
 * XREFs of ?GetTargetView@ViewEventArgsForSelectTargetView@@QEAAJPEAPEAUIViewWrapperInternal@@@Z @ 0x180004628
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForSelectTargetView::GetTargetView(
        ViewEventArgsForSelectTargetView *this,
        struct IViewWrapperInternal **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( !*((_BYTE *)this + 96) )
    return 2147943568LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IViewWrapperInternal **))*((_QWORD *)this + 13);
  if ( !v2 )
    return 0LL;
  v3 = (**v2)(v2, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x133,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}

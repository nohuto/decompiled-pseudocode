/*
 * XREFs of ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x180122220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1801203E4 (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::IncrementPopupCount(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  struct IViewWrapperInternal *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewWrapperInternal *v10; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h]

  v4 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  v11 = v4;
  v10 = 0LL;
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-26], a2, &v10) < 0
    || (v5 = ViewEventDispatcher::_ChangePopupUIShowingCount((__int64)&this[-26], (__int64)v10, 0), v6 = v5, v5 >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8E6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}

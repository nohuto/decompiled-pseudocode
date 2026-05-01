/*
 * XREFs of ?GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1801223C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::GetCanShowPopups(RTL_SRWLOCK *this, unsigned int a2, bool *a3)
{
  RTL_SRWLOCK *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  struct IViewWrapperInternal *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v12; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h]

  *a3 = 0;
  v6 = this + 11;
  AcquireSRWLockShared(this + 11);
  v13 = v6;
  v12 = 0LL;
  v7 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-26], a2, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a3 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v12 + 824LL))(v12) == 0;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x906,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}

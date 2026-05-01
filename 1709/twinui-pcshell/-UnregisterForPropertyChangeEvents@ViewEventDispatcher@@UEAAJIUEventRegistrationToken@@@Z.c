/*
 * XREFs of ?UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1801225A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnregisterForPropertyChangeEvents(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct IViewWrapperInternal *v7; // rcx
  struct IViewWrapperInternal *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h]

  v13 = 0LL;
  v6 = this + 11;
  AcquireSRWLockShared(this + 11);
  v14 = v6;
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-26], a2, &v13);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  v8 = v13;
  if ( v13 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v13 + 800LL))(v13, a3.value);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x93F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
      v8 = v13;
      goto LABEL_10;
    }
    v8 = v13;
  }
  v10 = 0;
LABEL_10:
  if ( v8 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v10;
}

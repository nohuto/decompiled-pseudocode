/*
 * XREFs of ?DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x180120B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1801209C0 (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::DisconnectComponent(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)this[42].Ptr + 192LL))(this[42].Ptr, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ViewEventDispatcher::_UnregisterComponent((ViewEventDispatcher *)&this[-24], a2);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6DF,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}

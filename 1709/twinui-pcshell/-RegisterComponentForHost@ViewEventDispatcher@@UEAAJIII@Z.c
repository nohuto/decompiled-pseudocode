/*
 * XREFs of ?RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z @ 0x180120EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x18012081C (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this[42].Ptr + 144LL))(
         this[42].Ptr,
         a2,
         a3,
         a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    ViewEventDispatcher::_PropagateNewRegistration((ViewEventDispatcher *)&this[-24], 0, a3, a2);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x722,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v10;
}

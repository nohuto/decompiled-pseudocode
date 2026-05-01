/*
 * XREFs of ?RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z @ 0x1800F5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x1800F5944 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 10, &SRWLock);
  v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this[39].Ptr + 144LL))(
         this[39].Ptr,
         a2,
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    ViewEventDispatcher::_PropagateNewRegistration((ViewEventDispatcher *)&this[-18], 0, a3, a2);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x70B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v9;
}

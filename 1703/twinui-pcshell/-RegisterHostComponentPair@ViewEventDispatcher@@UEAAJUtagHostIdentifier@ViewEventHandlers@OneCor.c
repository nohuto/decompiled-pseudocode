/*
 * XREFs of ?RegisterHostComponentPair@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IIPEAUIInspectable@@@Z @ 0x1800F5410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x1800F5944 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RegisterHostComponentPair(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 80), &SRWLock);
  v12 = *(_QWORD *)a2;
  v13 = a2[2];
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 312) + 48LL))(
         *(_QWORD *)(a1 + 312),
         &v12,
         a3,
         a4,
         a5);
  v10 = v9;
  if ( v9 >= 0 )
  {
    ViewEventDispatcher::_PropagateNewRegistration(a1 - 144, *a2, a2[1], a4);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x636,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v10;
}

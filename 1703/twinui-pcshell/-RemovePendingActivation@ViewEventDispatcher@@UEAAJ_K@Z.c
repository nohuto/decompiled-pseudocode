/*
 * XREFs of ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x1800F6880
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09d8618cc3129835da6ee2c10407f66c___::Run @ 0x1801008D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_09d8618cc3129835da6ee2c10407f66c___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FA95C (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FACC8 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v3; // rsi
  int PendingActivation; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  v3 = this - 2;
  wil::srwlock::lock_exclusive(this + 26, &SRWLock);
  PendingActivation = ViewEventDispatcher::_FindPendingActivation(v3, a2, &v8);
  v5 = PendingActivation;
  if ( PendingActivation >= 0 )
  {
    ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(v3, v8);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7C7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PendingActivation);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v5;
}

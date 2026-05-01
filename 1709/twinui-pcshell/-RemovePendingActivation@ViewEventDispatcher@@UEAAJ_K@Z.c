/*
 * XREFs of ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180121AC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09d8618cc3129835da6ee2c10407f66c___::Run @ 0x18012B240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_09d8618cc3129835da6ee2c10407f66c___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180125C94 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180126078 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v3; // rbp
  RTL_SRWLOCK *v4; // rsi
  int PendingActivation; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+18h]

  v3 = this - 2;
  v4 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v10 = v4;
  PendingActivation = ViewEventDispatcher::_FindPendingActivation(v3, a2, &v9);
  v6 = PendingActivation;
  if ( PendingActivation >= 0 )
  {
    ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(v3, v9);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x803,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PendingActivation);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}

/*
 * XREFs of ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180033D90
 * Callers:
 *     ?_CompletePendingActivation@CAppViewManager@@AEAAJ_K@Z @ 0x1800093D8 (-_CompletePendingActivation@CAppViewManager@@AEAAJ_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___::Run @ 0x1801CCE90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___--Run.c)
 * Callees:
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800319A4 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180031A34 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v3; // rbp
  RTL_SRWLOCK *v4; // rsi
  int PendingActivation; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+18h]

  v3 = this - 2;
  v4 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v8 = v4;
  PendingActivation = ViewEventDispatcher::_FindPendingActivation((__int64)v3, a2, &v7);
  if ( PendingActivation >= 0 )
  {
    ViewEventDispatcher::_QueuePendingActivationNodeForDestruction((__int64)v3, v7);
    PendingActivation = 0;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return (unsigned int)PendingActivation;
}

/*
 * XREFs of ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1801D83F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_281168bc4fef0a369225048757561f78___::Run @ 0x1801D84A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_281168bc4fef0a369225048757561f78___--Run.c)
 * Callees:
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1801D7550 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = this + 55;
    AcquireSRWLockExclusive(this + 55);
    WindowEventDispatcher::QueuePendingActivationForDestruction((WindowEventDispatcher *)&this[-3], a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4C7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v5);
  }
  return 0LL;
}

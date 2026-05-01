/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18007CF50
 * Callers:
 *     <none>
 * Callees:
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18007CBC0 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 120LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 184);
  if ( v4 )
  {
    *(_QWORD *)(v3 + 184) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  v7[0] = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 76));
  v7[1] = v5;
  NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
    *(NotificationDispatcher **)(*(_QWORD *)(a1 + 16) + 112LL),
    (__int64)v7);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

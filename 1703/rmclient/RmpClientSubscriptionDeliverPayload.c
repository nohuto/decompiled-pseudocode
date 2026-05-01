/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x180007E28
 * Callers:
 *     RmpClientWnfMessageQueueWorker @ 0x180004360 (RmpClientWnfMessageQueueWorker.c)
 *     RmpClientSubscriptionWnfCallback @ 0x180005F40 (RmpClientSubscriptionWnfCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     RmpClientSubscriptionRemoveCallback @ 0x18000BF40 (RmpClientSubscriptionRemoveCallback.c)
 */

__int64 __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64); // rax
  BOOL v4; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8

  v3 = (__int64 (__fastcall *)(__int64))a2[6];
  v4 = 1;
  if ( *(_DWORD *)a3 == 1 )
  {
    *(_QWORD *)(a3 + 24) = a2[7];
    result = v3(a3 + 8);
    v4 = *(_DWORD *)(a3 + 32) == 0;
  }
  else
  {
    *(_QWORD *)(a3 + 16) = a2[7];
    result = v3(a3 + 8);
    if ( *(_DWORD *)(a3 + 24) )
      return result;
  }
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8, v9, v10);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    if ( a2[4] != -1LL )
      RmpClientSubscriptionRemoveCallback(a1, a2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
    *(_DWORD *)(a1 + 16) = 0;
    return RtlReleaseSRWLockExclusive(a1 + 8);
  }
  return result;
}

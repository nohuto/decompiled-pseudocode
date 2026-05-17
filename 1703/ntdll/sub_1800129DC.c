/*
 * XREFs of sub_1800129DC @ 0x1800129DC
 * Callers:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwUnsubscribeWnfStateChange @ 0x1800A8AD0 (ZwUnsubscribeWnfStateChange.c)
 *     sub_1800DF3A8 @ 0x1800DF3A8 (sub_1800DF3A8.c)
 */

__int64 __fastcall sub_1800129DC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  RtlAcquireSRWLockExclusive(qword_18015C008 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v3, v2, v4, v5) )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      sub_1800DF3A8(*(_QWORD *)(a1 + 16), a1);
    ZwUnsubscribeWnfStateChange(a1 + 16);
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v8 + 8) != a1 + 32 || *v9 != a1 + 32 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    RtlReleaseSRWLockExclusive(a1 + 56);
    if ( *(_QWORD *)(a1 + 120) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  }
  else
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
  }
  return RtlReleaseSRWLockExclusive(qword_18015C008 + 8);
}

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

void __fastcall sub_1800129DC(char *BaseAddress)
{
  __int64 v2; // rcx
  char **v3; // rcx
  PVOID *v4; // rdx
  void *v5; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 27, 0xFFFFFFFF) == 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
    else
      v2 = 2147353486LL;
    if ( *(_BYTE *)v2 )
      sub_1800DF3A8(*((_QWORD *)BaseAddress + 2), BaseAddress);
    ZwUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    v3 = (char **)*((_QWORD *)BaseAddress + 4);
    v4 = (PVOID *)*((_QWORD *)BaseAddress + 5);
    if ( v3[1] != BaseAddress + 32 || *v4 != BaseAddress + 32 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    v5 = (void *)*((_QWORD *)BaseAddress + 15);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 8));
}

/*
 * XREFs of sub_18004A750 @ 0x18004A750
 * Callers:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwUnsubscribeWnfStateChange @ 0x18009E350 (ZwUnsubscribeWnfStateChange.c)
 *     sub_1800D8C28 @ 0x1800D8C28 (sub_1800D8C28.c)
 */

void __fastcall sub_18004A750(char *BaseAddress)
{
  __int64 v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx
  void *v5; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_18015D058 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 27, 0xFFFFFFFF) == 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
    else
      v2 = 2147353486LL;
    if ( *(_BYTE *)v2 )
      sub_1800D8C28(*((_QWORD *)BaseAddress + 2), BaseAddress);
    ZwUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    v3 = (char **)*((_QWORD *)BaseAddress + 4);
    if ( v3[1] != BaseAddress + 32 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 5), *v4 != BaseAddress + 32) )
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
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015D058 + 8));
}

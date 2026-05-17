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

signed __int64 __fastcall sub_18004A750(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r8

  RtlAcquireSRWLockExclusive(qword_18015D058 + 8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v5, v6, v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
    else
      v9 = 2147353486LL;
    if ( *(_BYTE *)v9 )
      sub_1800D8C28(*(_QWORD *)(a1 + 16), a1);
    ZwUnsubscribeWnfStateChange(a1 + 16);
    v10 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v10 + 8) != a1 + 32 || (v11 = *(_QWORD **)(a1 + 40), *v11 != a1 + 32) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    v12 = *(_QWORD *)(a1 + 120);
    if ( v12 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015D058 + 8));
}

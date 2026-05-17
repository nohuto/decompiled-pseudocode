/*
 * XREFs of sub_18007E8A0 @ 0x18007E8A0
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180047138 @ 0x180047138 (sub_180047138.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007E9AC @ 0x18007E9AC (sub_18007E9AC.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_18007E8A0(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 **v7; // rdx

  v2 = a1[7];
  if ( v2 )
  {
    ZwClose(v2);
    a1[7] = 0LL;
  }
  sub_18007E9AC(a1 + 15);
  sub_18007E9AC(a1 + 30);
  ZwClose(a1[8]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, a1[2]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, a1[5]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, a1[6]);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D398, v3, v4, v5);
  v6 = a1[48];
  v7 = (unsigned __int64 **)a1[49];
  if ( *(unsigned __int64 **)(v6 + 8) != a1 + 48 || *v7 != a1 + 48 )
    __fastfail(3u);
  *v7 = (unsigned __int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&qword_18015D398);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, (unsigned __int64)a1);
}

/*
 * XREFs of sub_18005D6F8 @ 0x18005D6F8
 * Callers:
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800FC6F0 @ 0x1800FC6F0 (sub_1800FC6F0.c)
 */

signed __int64 __fastcall sub_18005D6F8(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2E0, a2, a3, a4);
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
  {
    v6 = 352LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v6 = 368LL;
    sub_1800FC6F0(a1 + v6, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&qword_18015D2E0);
}

/*
 * XREFs of sub_18005D6F8 @ 0x18005D6F8
 * Callers:
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800FC6F0 @ 0x1800FC6F0 (sub_1800FC6F0.c)
 */

void __fastcall sub_18005D6F8(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&stru_18015D2E0);
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
  {
    v2 = 352LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v2 = 368LL;
    sub_1800FC6F0(a1 + v2, 0LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2E0);
}

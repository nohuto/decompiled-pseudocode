/*
 * XREFs of sub_18000ABAC @ 0x18000ABAC
 * Callers:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800FE028 @ 0x1800FE028 (sub_1800FE028.c)
 */

__int64 __fastcall sub_18000ABAC(__int64 a1)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive(&unk_18015C2A0);
  if ( (dword_18015C2A8 & 1) != 0 && (dword_18015C2A8 & 2) != 0 )
  {
    v3 = 368LL;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      v3 = 136LL;
    sub_1800FE028(a1 + v3, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&unk_18015C2A0);
}

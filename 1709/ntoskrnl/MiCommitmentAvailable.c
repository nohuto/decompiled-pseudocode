/*
 * XREFs of MiCommitmentAvailable @ 0x1400F504C
 * Callers:
 *     MiPrefetchNormally @ 0x1400F4FCC (MiPrefetchNormally.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 6440);
  v2 = *(_QWORD *)(a1 + 6320);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}

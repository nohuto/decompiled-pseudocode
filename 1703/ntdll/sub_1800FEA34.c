/*
 * XREFs of sub_1800FEA34 @ 0x1800FEA34
 * Callers:
 *     sub_18008A7B4 @ 0x18008A7B4 (sub_18008A7B4.c)
 *     sub_1800FE980 @ 0x1800FE980 (sub_1800FE980.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800FE228 @ 0x1800FE228 (sub_1800FE228.c)
 */

__int64 sub_1800FEA34()
{
  unsigned int v0; // ebx

  RtlAcquireSRWLockExclusive(&stru_18015C2A0);
  if ( (dword_18015C2A8 & 1) != 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = sub_1800FE228();
    if ( v0 )
      dword_18015C2A8 |= 1u;
  }
  RtlReleaseSRWLockExclusive(&stru_18015C2A0);
  return v0;
}

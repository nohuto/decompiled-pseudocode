/*
 * XREFs of RtlpHpLfhContextCompact @ 0x18004954C
 * Callers:
 *     RtlpHpHeapCompact @ 0x180012BF8 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800495E4 (RtlpHpLfhOwnerCompact.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(_RTL_SRWLOCK *a1, unsigned int a2)
{
  int v4; // esi
  unsigned __int64 *v5; // rdi
  __int64 v6; // r14

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 9);
  v5 = (unsigned __int64 *)&a1[26];
  v6 = 129LL;
  do
  {
    if ( (*v5 & 1) == 0 )
      RtlpHpLfhOwnerCompact(a1, *v5, a2 | 1);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
    RtlReleaseSRWLockShared(a1 + 9);
  return RtlpHpLfhCacheEmpty(&a1[12], a1, a2);
}

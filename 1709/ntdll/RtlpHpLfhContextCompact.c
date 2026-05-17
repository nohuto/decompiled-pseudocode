/*
 * XREFs of RtlpHpLfhContextCompact @ 0x18004954C
 * Callers:
 *     RtlpHpHeapCompact @ 0x180012BF8 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800495E4 (RtlpHpLfhOwnerCompact.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v6; // esi
  _QWORD *v7; // rdi
  __int64 v8; // r14

  v4 = (unsigned int)a2;
  v6 = (unsigned __int8)a2 & 1;
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  v7 = (_QWORD *)(a1 + 208);
  v8 = 129LL;
  do
  {
    if ( (*v7 & 1) == 0 )
      RtlpHpLfhOwnerCompact(a1, *v7, v4 | 1);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v6 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return RtlpHpLfhCacheEmpty(a1 + 96, a1, v4);
}

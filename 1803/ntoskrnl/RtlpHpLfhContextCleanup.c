/*
 * XREFs of RtlpHpLfhContextCleanup @ 0x14029A4F8
 * Callers:
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhCacheEmpty @ 0x14029A380 (RtlpHpLfhCacheEmpty.c)
 *     RtlpHpLfhOwnerCleanup @ 0x14029A6FC (RtlpHpLfhOwnerCleanup.c)
 */

PSLIST_ENTRY __fastcall RtlpHpLfhContextCleanup(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15

  v2 = a1 + 224;
  v3 = 129LL;
  do
  {
    if ( (*(_QWORD *)v2 & 1) == 0 )
    {
      v4 = *(_QWORD *)v2;
      if ( *(_BYTE *)(*(_QWORD *)v2 + 2LL) )
      {
        v5 = 0LL;
        v6 = *(unsigned __int8 *)(*(_QWORD *)v2 + 2LL);
        do
        {
          RtlpHpLfhOwnerCleanup(a1, *(_QWORD *)(v5 + *(_QWORD *)(v4 + 96)));
          v5 += 8LL;
          --v6;
        }
        while ( v6 );
      }
      RtlpHpLfhOwnerCleanup(a1, v4);
    }
    v2 += 8LL;
    --v3;
  }
  while ( v3 );
  return RtlpHpLfhCacheEmpty(a1 + 112, a1);
}

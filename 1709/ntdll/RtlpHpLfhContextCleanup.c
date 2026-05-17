/*
 * XREFs of RtlpHpLfhContextCleanup @ 0x180061780
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhOwnerCleanup @ 0x18006246C (RtlpHpLfhOwnerCleanup.c)
 */

__int64 __fastcall RtlpHpLfhContextCleanup(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15

  v2 = (__int64 *)(a1 + 208);
  v3 = 129LL;
  do
  {
    if ( (*v2 & 1) == 0 )
    {
      v5 = *v2;
      if ( *(_BYTE *)(*v2 + 2) )
      {
        v6 = 0LL;
        v7 = *(unsigned __int8 *)(*v2 + 2);
        do
        {
          RtlpHpLfhOwnerCleanup(a1, *(_QWORD *)(v6 + *(_QWORD *)(v5 + 96)));
          v6 += 8LL;
          --v7;
        }
        while ( v7 );
      }
      RtlpHpLfhOwnerCleanup(a1, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return RtlpHpLfhCacheEmpty(a1 + 96, a1, 1LL);
}

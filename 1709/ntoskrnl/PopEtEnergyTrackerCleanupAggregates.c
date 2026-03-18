/*
 * XREFs of PopEtEnergyTrackerCleanupAggregates @ 0x140446800
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140445B34 (PopEtEnergyTrackerQuery.c)
 *     PopEtEnergyTrackerCleanup @ 0x1407086A8 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x14045876C (PopEtAggregateKeyCleanup.c)
 */

char *__fastcall PopEtEnergyTrackerCleanupAggregates(__int64 a1)
{
  char **v1; // rbp
  char *v3; // rbx
  char *result; // rax
  char **i; // rdx
  char *v6; // rsi
  char *j; // rcx

  v1 = *(char ***)(a1 + 56);
  v3 = (char *)v1;
  while ( 1 )
  {
    if ( v3 && (result = *(char **)v3, (*(_QWORD *)v3 & 1) == 0) )
    {
      v3 = *(char **)v3;
    }
    else
    {
      for ( i = v1 + 1;
            (unsigned __int64)i < *(_QWORD *)(a1 + 56) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5);
            ++i )
      {
        if ( (*(_DWORD *)i & 1) == 0 )
        {
          v3 = *i;
          v1 = i;
          result = *i;
          goto LABEL_8;
        }
      }
      result = 0LL;
    }
LABEL_8:
    if ( !result )
      return result;
    v6 = v3;
    for ( j = (char *)v1; (*(_QWORD *)j & 1) == 0; j = *(char **)j )
    {
      if ( *(char **)j == v3 )
      {
        *(_QWORD *)j = *(_QWORD *)v3;
        --*(_DWORD *)(a1 + 48);
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        v3 = j;
        goto LABEL_13;
      }
    }
    v6 = 0LL;
LABEL_13:
    if ( v6 == (char *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 636) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x1C8uLL);
    }
    else
    {
      PopEtAggregateKeyCleanup(v6 + 16);
      ExFreePoolWithTag(v6, 0x54456F50u);
    }
  }
}

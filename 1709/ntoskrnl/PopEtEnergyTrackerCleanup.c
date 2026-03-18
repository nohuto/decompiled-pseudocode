/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x1407086A8
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x140708B20 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140446800 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtAggregateKeyCleanup @ 0x14045876C (PopEtAggregateKeyCleanup.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  void *v4; // rcx
  _DWORD *v5; // rbp
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _DWORD *i; // rdx
  _QWORD *v9; // rsi
  _QWORD *j; // rcx
  void *v11; // rcx

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  PopReleaseRwLock(PopEtGlobals + 16);
  PopEtEnergyTrackerCleanupAggregates(a1);
  v4 = *(void **)(a1 + 56);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54456F50u);
  v5 = *(_DWORD **)(a1 + 72);
  v6 = v5;
  while ( 1 )
  {
    if ( !v6 || (v7 = (_QWORD *)*v6, (*v6 & 1) != 0) )
    {
      for ( i = v5 + 2; ; i += 2 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 68) >> 5) )
        {
          v7 = 0LL;
          goto LABEL_14;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v6 = *(_QWORD **)i;
      v5 = i;
      v7 = *(_QWORD **)i;
    }
    else
    {
      v6 = (_QWORD *)*v6;
    }
LABEL_14:
    if ( !v7 )
      break;
    v9 = v6;
    for ( j = v5; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v6 )
      {
        *j = *v6;
        --*(_DWORD *)(a1 + 64);
        *v6 |= 0x8000000000000002uLL;
        v6 = j;
        goto LABEL_22;
      }
    }
    v9 = 0LL;
LABEL_22:
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  v11 = *(void **)(a1 + 72);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x54456F50u);
  return PopEtAggregateKeyCleanup((_QWORD *)(a1 + 96));
}

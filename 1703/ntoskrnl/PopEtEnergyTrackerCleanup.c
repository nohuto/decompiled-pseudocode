/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x1406D1100
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x1406D1710 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406D12B8 (PopEtEnergyTrackerCleanupAggregates.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  void *v4; // rcx
  _DWORD *v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _DWORD *i; // rdx
  _QWORD *v9; // r14
  _QWORD *j; // rcx
  void *v11; // rcx
  _QWORD *v13; // [rsp+28h] [rbp-18h]
  _DWORD *v14; // [rsp+30h] [rbp-10h]

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = (__int64 *)*a1;
  v3 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = (__int64)v3;
  PopReleaseRwLock(PopEtGlobals + 16);
  PopEtEnergyTrackerCleanupAggregates(a1);
  v4 = (void *)a1[7];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54456F50u);
  v5 = (_DWORD *)a1[9];
  v6 = v5;
  v14 = v5;
  v13 = v5;
  while ( 1 )
  {
    if ( !v6 )
      goto LABEL_11;
    if ( (*v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v5 = v14;
      v6 = v13;
    }
    v7 = (_QWORD *)*v6;
    if ( (*v6 & 1) != 0 )
    {
LABEL_11:
      for ( i = v5 + 2; ; i += 2 )
      {
        if ( (unsigned __int64)i >= a1[9] + 8 * ((unsigned __int64)*((unsigned int *)a1 + 17) >> 5) )
        {
          v7 = 0LL;
          goto LABEL_16;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v6 = *(_QWORD **)i;
      v5 = i;
      v13 = *(_QWORD **)i;
      v7 = *(_QWORD **)i;
      v14 = i;
    }
    else
    {
      v6 = (_QWORD *)*v6;
      v13 = v7;
    }
LABEL_16:
    if ( !v7 )
      break;
    v9 = v6;
    if ( (*v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v5 = v14;
      v6 = v13;
    }
    for ( j = v5; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v6 )
      {
        *j = *v6;
        --*((_DWORD *)a1 + 16);
        *v6 |= 0x8000000000000002uLL;
        v6 = j;
        v13 = j;
        goto LABEL_26;
      }
    }
    v9 = 0LL;
    v5 = v14;
    v6 = v13;
LABEL_26:
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  v11 = (void *)a1[9];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x54456F50u);
  return PopEtAggregateKeyCleanup(a1 + 12);
}

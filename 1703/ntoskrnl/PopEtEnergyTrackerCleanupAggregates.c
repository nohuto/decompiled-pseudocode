/*
 * XREFs of PopEtEnergyTrackerCleanupAggregates @ 0x1406D12B8
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x1406D1100 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1406D1744 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 */

_QWORD *__fastcall PopEtEnergyTrackerCleanupAggregates(__int64 a1)
{
  _DWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  _DWORD *i; // rdx
  _QWORD *v6; // r14
  _QWORD *j; // rcx
  _QWORD *v8; // [rsp+28h] [rbp-18h]
  _DWORD *v9; // [rsp+30h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 56);
  v3 = v1;
  v9 = v1;
  v8 = v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v1 = v9;
      v3 = v8;
    }
    result = (_QWORD *)*v3;
    if ( (*v3 & 1) != 0 )
    {
LABEL_7:
      for ( i = v1 + 2; ; i += 2 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 56) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5) )
        {
          result = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)i;
      v1 = i;
      v8 = *(_QWORD **)i;
      result = *(_QWORD **)i;
      v9 = i;
    }
    else
    {
      v3 = (_QWORD *)*v3;
      v8 = result;
    }
LABEL_12:
    if ( !result )
      return result;
    v6 = v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v1 = v9;
      v3 = v8;
    }
    for ( j = v1; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v3 )
      {
        *j = *v3;
        --*(_DWORD *)(a1 + 48);
        *v3 |= 0x8000000000000002uLL;
        v3 = j;
        v8 = j;
        goto LABEL_22;
      }
    }
    v6 = 0LL;
    v1 = v9;
    v3 = v8;
LABEL_22:
    if ( v6 == (_QWORD *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 548) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x170uLL);
    }
    else
    {
      PopEtAggregateKeyCleanup(v6 + 2);
      ExFreePoolWithTag(v6, 0x54456F50u);
    }
  }
}

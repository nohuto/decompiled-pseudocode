/*
 * XREFs of ArbAddOrdering @ 0x1C00934DC
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C0093B00 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int16 v7; // ax
  PVOID PoolWithTag; // rax
  PVOID v9; // rbp
  const void *v10; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  v7 = *a1;
  if ( *a1 == a1[1] )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * ((unsigned int)v7 + 8), 0x4C627241u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v10 = (const void *)*((_QWORD *)a1 + 1);
    if ( v10 )
    {
      memmove(PoolWithTag, v10, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    v7 = *a1;
    *((_QWORD *)a1 + 1) = v9;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * v7) = a2;
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
  return 0LL;
}

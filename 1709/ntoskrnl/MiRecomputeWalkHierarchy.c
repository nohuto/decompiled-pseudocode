/*
 * XREFs of MiRecomputeWalkHierarchy @ 0x14021596C
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRecomputeWalkHierarchy(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // r10

  if ( a3 < 4 )
  {
    v3 = (unsigned __int64 *)(a1 + 56 + 16LL * a3);
    v4 = 4 - a3;
    do
    {
      *v3 = a2;
      a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  if ( a3 == 3 )
    return *(_QWORD *)(a1 + 104);
  else
    return 0LL;
}

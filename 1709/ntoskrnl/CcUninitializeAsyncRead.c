/*
 * XREFs of CcUninitializeAsyncRead @ 0x1401E2EA8
 * Callers:
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcUninitializeAsyncRead(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( a1[97] )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = a1[97] + 16LL * v2;
        if ( *(_QWORD *)v3 == v3 )
          break;
        v4 = *(__int64 **)v3;
        if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
          __fastfail(3u);
        *(_QWORD *)v3 = v5;
        *(_QWORD *)(v5 + 8) = v3;
        ExFreePoolWithTag(v4, 0x71576343u);
      }
      ++v2;
    }
    while ( v2 <= CcMaxNestingLevel );
  }
  v6 = (void *)a1[100];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x71576343u);
    a1[100] = 0LL;
  }
  v7 = (void *)a1[101];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x71576343u);
    a1[101] = 0LL;
  }
  v8 = (void *)a1[103];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x71576343u);
    a1[103] = 0LL;
  }
  v9 = (void *)a1[102];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x71576343u);
    a1[102] = 0LL;
  }
  v10 = (void *)a1[98];
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x71576343u);
    a1[98] = 0LL;
  }
  v11 = (void *)a1[99];
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x71576343u);
    a1[99] = 0LL;
  }
}

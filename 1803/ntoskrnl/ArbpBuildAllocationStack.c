/*
 * XREFs of ArbpBuildAllocationStack @ 0x1406194A8
 * Callers:
 *     ArbTestAllocation @ 0x140618580 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ArbpBuildAlternative @ 0x140619790 (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 *v5; // r8
  int v8; // ecx
  unsigned int v9; // edi
  PVOID PoolWithTag; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 i; // rax
  __int64 result; // rax

  v3 = (unsigned int)(a3 + 1);
  v4 = 0;
  v5 = (__int64 *)*a2;
  while ( a2 != v5 )
  {
    v8 = *((_DWORD *)v5 + 4);
    if ( v8 )
      v4 += v8 << 6;
    v5 = (__int64 *)*v5;
    if ( !v8 )
      v3 = (unsigned int)(v3 - 1);
  }
  v9 = 80 * v3 + v4;
  if ( *(_DWORD *)(a1 + 104) < v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x41627241u);
    if ( !PoolWithTag )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = PoolWithTag;
    *(_DWORD *)(a1 + 104) = v9;
  }
  else
  {
    PoolWithTag = *(PVOID *)(a1 + 112);
  }
  memset(PoolWithTag, 0, v9);
  v11 = *(_QWORD *)(a1 + 112);
  v12 = 5 * v3;
  v13 = (__int64 *)*a2;
  v14 = v11 + 16 * v12;
  while ( a2 != v13 )
  {
    if ( *((_DWORD *)v13 + 4) )
    {
      *(_QWORD *)(v11 + 32) = v13;
      *(_DWORD *)(v11 + 48) = *((_DWORD *)v13 + 4);
      *(_QWORD *)(v11 + 56) = v14;
      *(_QWORD *)v11 = 1LL;
      v15 = v13[3];
      for ( i = v15 + 32LL * *((unsigned int *)v13 + 4); v15 < i; i = v13[3] + 32LL * *((unsigned int *)v13 + 4) )
      {
        result = ArbpBuildAlternative(a1, v15, v14);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v14 + 32) = 0;
        v15 += 32LL;
        v14 += 64LL;
      }
      v11 += 80LL;
    }
    v13 = (__int64 *)*v13;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  return 0LL;
}

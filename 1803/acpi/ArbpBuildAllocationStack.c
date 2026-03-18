/*
 * XREFs of ArbpBuildAllocationStack @ 0x1C0095428
 * Callers:
 *     ArbTestAllocation @ 0x1C0095290 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ArbpBuildAlternative @ 0x1C0095574 (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 *v5; // r8
  int v8; // ecx
  unsigned int v9; // edi
  PVOID PoolWithTag; // rsi
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 i; // rax

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
  if ( *(_DWORD *)(a1 + 104) >= v9 )
  {
    PoolWithTag = *(PVOID *)(a1 + 112);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x41627241u);
    if ( !PoolWithTag )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = PoolWithTag;
    *(_DWORD *)(a1 + 104) = v9;
  }
  memset(PoolWithTag, 0, v9);
  v12 = *(_QWORD *)(a1 + 112);
  v13 = 5 * v3;
  v14 = (__int64 *)*a2;
  v15 = v12 + 16 * v13;
  while ( a2 != v14 )
  {
    if ( *((_DWORD *)v14 + 4) )
    {
      *(_QWORD *)(v12 + 32) = v14;
      *(_DWORD *)(v12 + 48) = *((_DWORD *)v14 + 4);
      *(_QWORD *)(v12 + 56) = v15;
      *(_QWORD *)v12 = 1LL;
      v16 = v14[3];
      for ( i = v16 + 32LL * *((unsigned int *)v14 + 4); v16 < i; i = v14[3] + 32LL * *((unsigned int *)v14 + 4) )
      {
        result = ArbpBuildAlternative(a1, v16, v15);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v15 + 32) = 0;
        v16 += 32LL;
        v15 += 64LL;
      }
      v12 += 80LL;
    }
    v14 = (__int64 *)*v14;
  }
  *(_QWORD *)(v12 + 32) = 0LL;
  return 0LL;
}

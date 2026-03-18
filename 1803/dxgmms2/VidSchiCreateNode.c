/*
 * XREFs of VidSchiCreateNode @ 0x1C007BF28
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C007B520 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

char *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  size_t v9; // rbp
  char *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  char *v14; // rbx
  BOOL v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  struct _KEVENT *v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // ecx
  char *result; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v5 = a4;
  v6 = a3;
  v7 = (unsigned int)a2;
  v8 = 224 * *(_DWORD *)(a1 + 2476) + 6288;
  v9 = v8;
  if ( (unsigned __int64)v8 < 0x1970 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v26);
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x68536956u);
  v13 = 0;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v27 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v27);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *(_DWORD *)v14 = 1685016150;
  *((_QWORD *)v14 + 3) = a1;
  *((_WORD *)v14 + 2) = v5;
  *((_WORD *)v14 + 3) = v7;
  *((_WORD *)v14 + 4) = v6;
  v15 = *(_DWORD *)(a1 + 64) == 1
     || *(_WORD *)(352LL * (unsigned __int16)v7 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2360LL) + 2) == (unsigned __int16)v6;
  v16 = v15 | *((_DWORD *)v14 + 3) & 0xFFFFFFFE;
  *((_DWORD *)v14 + 3) = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2360LL) + 352 * v7 + 24);
  if ( v17 )
    v18 = 2 * (*(_BYTE *)(74 * v6 + v17 + 68) & 1);
  else
    v18 = 0;
  *((_DWORD *)v14 + 3) = v18 | v16 & 0xFFFFFFFD;
  KeInitializeEvent((PRKEVENT)(v14 + 6232), SynchronizationEvent, 0);
  v19 = v14 + 2008;
  v20 = 32LL;
  do
  {
    v19[1] = v19;
    *v19 = v19;
    v19 += 2;
    --v20;
  }
  while ( v20 );
  *((_QWORD *)v14 + 316) = v14 + 2520;
  v21 = (struct _KEVENT *)(v14 + 240);
  *((_QWORD *)v14 + 315) = v14 + 2520;
  v22 = 3LL;
  *((_QWORD *)v14 + 318) = v14 + 2536;
  *((_QWORD *)v14 + 317) = v14 + 2536;
  *((_QWORD *)v14 + 320) = v14 + 2552;
  *((_QWORD *)v14 + 319) = v14 + 2552;
  *((_QWORD *)v14 + 322) = v14 + 2568;
  *((_QWORD *)v14 + 321) = v14 + 2568;
  do
  {
    memset(v21, 0, 0x38uLL);
    KeInitializeEvent(v21, SynchronizationEvent, 0);
    v21 = (struct _KEVENT *)((char *)v21 + 56);
    --v22;
  }
  while ( v22 );
  *((_QWORD *)v14 + 52) = v14 + 408;
  *((_QWORD *)v14 + 51) = v14 + 408;
  *((_QWORD *)v14 + 54) = v14 + 424;
  *((_QWORD *)v14 + 53) = v14 + 424;
  *((_QWORD *)v14 + 212) = v14 + 1688;
  *((_QWORD *)v14 + 211) = v14 + 1688;
  *((_QWORD *)v14 + 784) = v14 + 6264;
  *((_QWORD *)v14 + 783) = v14 + 6264;
  if ( *(_DWORD *)(a1 + 2476) )
  {
    do
    {
      v23 = 224LL * v13;
      *(_DWORD *)&v14[v23 + 6288] = 1953189956;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1912), (__int64)(v14 + 6264), &v14[v23 + 6304], 0LL);
      ++v13;
    }
    while ( v13 < *(_DWORD *)(a1 + 2476) );
  }
  v24 = *(_DWORD *)(a1 + 4 * v5 + 2216);
  result = v14;
  *((_DWORD *)v14 + 1564) = -1;
  *((_DWORD *)v14 + 702) = v24;
  v14[6260] = 1;
  return result;
}

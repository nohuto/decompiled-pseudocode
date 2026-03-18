/*
 * XREFs of VidSchiCreateNode @ 0x1C00771B0
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0076950 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

char *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v5; // r12
  unsigned __int16 v7; // r15
  int v8; // eax
  size_t v9; // rsi
  char *PoolWithTag; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebp
  char *v13; // rbx
  BOOL v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _KEVENT *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // ecx
  char *result; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v5 = a4;
  v7 = a2;
  v8 = 224 * *(_DWORD *)(a1 + 2448) + 5936;
  v9 = v8;
  if ( (unsigned __int64)v8 < 0x1810 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v23);
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x68536956u);
  v12 = 0;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v24 = WdLogNewEntry5_WdWarning(v11);
    WdLogEvent5_WdWarning(v24);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *(_DWORD *)v13 = 1685016150;
  *((_QWORD *)v13 + 3) = a1;
  *((_WORD *)v13 + 2) = v5;
  *((_WORD *)v13 + 3) = v7;
  *((_WORD *)v13 + 4) = a3;
  v14 = *(_DWORD *)(a1 + 60) == 1 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2216LL) + 48LL * v7 + 2) == a3;
  v15 = v14 | *((_DWORD *)v13 + 3) & 0xFFFFFFFE;
  v16 = 32LL;
  *((_DWORD *)v13 + 3) = v15;
  v17 = v13 + 1976;
  do
  {
    v17[1] = v17;
    *v17 = v17;
    v17 += 2;
    --v16;
  }
  while ( v16 );
  *((_QWORD *)v13 + 312) = v13 + 2488;
  v18 = (struct _KEVENT *)(v13 + 240);
  *((_QWORD *)v13 + 311) = v13 + 2488;
  v19 = 3LL;
  *((_QWORD *)v13 + 314) = v13 + 2504;
  *((_QWORD *)v13 + 313) = v13 + 2504;
  *((_QWORD *)v13 + 316) = v13 + 2520;
  *((_QWORD *)v13 + 315) = v13 + 2520;
  *((_QWORD *)v13 + 318) = v13 + 2536;
  *((_QWORD *)v13 + 317) = v13 + 2536;
  do
  {
    memset(v18, 0, 0x38uLL);
    KeInitializeEvent(v18, SynchronizationEvent, 0);
    v18 = (struct _KEVENT *)((char *)v18 + 56);
    --v19;
  }
  while ( v19 );
  *((_QWORD *)v13 + 52) = v13 + 408;
  *((_QWORD *)v13 + 51) = v13 + 408;
  *((_QWORD *)v13 + 54) = v13 + 424;
  *((_QWORD *)v13 + 53) = v13 + 424;
  *((_QWORD *)v13 + 212) = v13 + 1688;
  *((_QWORD *)v13 + 211) = v13 + 1688;
  *((_QWORD *)v13 + 740) = v13 + 5912;
  *((_QWORD *)v13 + 739) = v13 + 5912;
  if ( *(_DWORD *)(a1 + 2448) )
  {
    do
    {
      v20 = 224LL * v12;
      *(_DWORD *)&v13[v20 + 5936] = 1953189956;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1896), (__int64)(v13 + 5912), &v13[v20 + 5952], 0LL);
      ++v12;
    }
    while ( v12 < *(_DWORD *)(a1 + 2448) );
  }
  v21 = *(_DWORD *)(a1 + 4 * v5 + 2188);
  result = v13;
  *((_DWORD *)v13 + 1476) = -1;
  *((_DWORD *)v13 + 694) = v21;
  v13[5908] = 1;
  return result;
}

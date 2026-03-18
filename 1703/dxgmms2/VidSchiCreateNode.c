/*
 * XREFs of VidSchiCreateNode @ 0x1C0071134
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00708F0 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

char *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v5; // r12
  unsigned __int16 v7; // r15
  int v8; // eax
  size_t v9; // rsi
  char *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  char *v14; // rbx
  BOOL v15; // r8d
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
  v8 = 224 * *(_DWORD *)(a1 + 2436) + 2816;
  if ( (unsigned int)v8 < 0xBE0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v23);
    return 0LL;
  }
  v9 = v8;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x68536956u);
  v13 = 0;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v24 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v24);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *(_DWORD *)v14 = 1685016150;
  *((_QWORD *)v14 + 3) = a1;
  *((_WORD *)v14 + 2) = v5;
  *((_WORD *)v14 + 3) = v7;
  *((_WORD *)v14 + 4) = a3;
  v15 = *(_DWORD *)(a1 + 60) == 1 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2192LL) + 48LL * v7 + 2) == a3;
  v16 = 32LL;
  *((_DWORD *)v14 + 3) = v15 | *((_DWORD *)v14 + 3) & 0xFFFFFFFE;
  v17 = v14 + 1960;
  do
  {
    v17[1] = v17;
    *v17 = v17;
    v17 += 2;
    --v16;
  }
  while ( v16 );
  *((_QWORD *)v14 + 310) = v14 + 2472;
  v18 = (struct _KEVENT *)(v14 + 240);
  *((_QWORD *)v14 + 309) = v14 + 2472;
  v19 = 3LL;
  *((_QWORD *)v14 + 312) = v14 + 2488;
  *((_QWORD *)v14 + 311) = v14 + 2488;
  *((_QWORD *)v14 + 314) = v14 + 2504;
  *((_QWORD *)v14 + 313) = v14 + 2504;
  *((_QWORD *)v14 + 316) = v14 + 2520;
  *((_QWORD *)v14 + 315) = v14 + 2520;
  do
  {
    memset(v18, 0, 0x38uLL);
    KeInitializeEvent(v18, SynchronizationEvent, 0);
    v18 = (struct _KEVENT *)((char *)v18 + 56);
    --v19;
  }
  while ( v19 );
  *((_QWORD *)v14 + 52) = v14 + 408;
  *((_QWORD *)v14 + 51) = v14 + 408;
  *((_QWORD *)v14 + 54) = v14 + 424;
  *((_QWORD *)v14 + 53) = v14 + 424;
  *((_QWORD *)v14 + 351) = v14 + 2800;
  *((_QWORD *)v14 + 350) = v14 + 2800;
  if ( *(_DWORD *)(a1 + 2436) )
  {
    do
    {
      v20 = 224LL * v13;
      *(_DWORD *)&v14[v20 + 2816] = 1953189956;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1888), (__int64)(v14 + 2800), &v14[v20 + 2832], 0LL);
      ++v13;
    }
    while ( v13 < *(_DWORD *)(a1 + 2436) );
  }
  v21 = *(_DWORD *)(a1 + 4 * v5 + 2176);
  result = v14;
  *((_DWORD *)v14 + 698) = -1;
  *((_DWORD *)v14 + 688) = v21;
  v14[2796] = 1;
  return result;
}

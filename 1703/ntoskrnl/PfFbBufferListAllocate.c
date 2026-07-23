/*
 * XREFs of PfFbBufferListAllocate @ 0x140168A5C
 * Callers:
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14005F1F8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocate(_SLIST_ENTRY *RunRef, signed int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  char *PoolWithTag; // rax
  char *v8; // rsi
  _SLIST_ENTRY *v9; // rax
  _SLIST_ENTRY *v10; // r14
  _SLIST_ENTRY *v11; // rbx
  __int64 result; // rax

  v3 = a2;
  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, a2) > SHIDWORD(RunRef[5].Next) )
  {
    result = 3221225773LL;
LABEL_9:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -(int)v3);
    return result;
  }
  v6 = ((a2 - 32) / a3) & 0xFFFFFFF0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)&RunRef[4].Next + 2), a2, HIDWORD(RunRef[4].Next));
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_9;
  }
  memset(PoolWithTag, 0, 0x20uLL);
  v9 = (_SLIST_ENTRY *)(v8 + 32);
  *((_DWORD *)v8 + 4) = a3;
  *((_DWORD *)v8 + 6) = v3;
  v10 = (_SLIST_ENTRY *)&v8[v3];
  v11 = (_SLIST_ENTRY *)&v8[v6 + 32];
  *((_DWORD *)v8 + 5) = v6;
  while ( v11 <= v10 )
  {
    PfFbBufferListInsertInFree(RunRef, v9, v6, 0, 0);
    v9 = v11;
    v11 = (_SLIST_ENTRY *)((char *)v11 + (unsigned int)v6);
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[3], (PSLIST_ENTRY)v8);
  return 0LL;
}

/*
 * XREFs of PfFbBufferListAllocate @ 0x140239C30
 * Callers:
 *     PfTStart @ 0x1406F3FC8 (PfTStart.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140011D44 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocate(_SLIST_ENTRY *RunRef, signed int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rbp
  char *PoolWithTag; // rax
  char *v9; // rsi
  char *v10; // r15
  _SLIST_ENTRY *v11; // rbx

  v3 = a2;
  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, a2) > SHIDWORD(RunRef[5].Next) )
  {
    result = 3221225773LL;
LABEL_5:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -(int)v3);
    return result;
  }
  v7 = ((a2 - 32) / a3) & 0xFFFFFFF0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)&RunRef[4].Next + 2), a2, HIDWORD(RunRef[4].Next));
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_5;
  }
  memset(PoolWithTag, 0, 0x20uLL);
  *((_DWORD *)v9 + 4) = a3;
  v10 = &v9[v3];
  *((_DWORD *)v9 + 6) = v3;
  v11 = (_SLIST_ENTRY *)(v9 + 32);
  *((_DWORD *)v9 + 5) = v7;
  while ( (char *)v11 + v7 <= v10 )
  {
    PfFbBufferListInsertInFree(RunRef, v11, v7, 0, 0);
    v11 = (_SLIST_ENTRY *)((char *)v11 + (unsigned int)v7);
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[3], (PSLIST_ENTRY)v9);
  return 0LL;
}

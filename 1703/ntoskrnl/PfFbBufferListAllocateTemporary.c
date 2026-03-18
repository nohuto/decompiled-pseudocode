/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x14002D5E8
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x140135040 (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x1404455F0 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14005F1F8 (PfFbBufferListInsertInFree.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(PEX_RUNDOWN_REF RunRef, signed int a2)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[13], a2) > SHIDWORD(RunRef[10].Ptr) )
  {
    result = 3221225773LL;
LABEL_3:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[13], -a2);
    return result;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)LODWORD(RunRef[9].Count), a2, HIDWORD(RunRef[8].Ptr));
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  PfFbBufferListInsertInFree(RunRef, PoolWithTag, 0);
  return 0LL;
}

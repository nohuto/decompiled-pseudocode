/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14058E374
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400E0748 (EtwpDequeueBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int i; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  unsigned int UsedProcessorCount; // eax
  __int64 v7; // rbp
  __int64 v8; // r14
  volatile __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 *v12; // rcx
  unsigned __int64 v14; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rax

  v1 = *a1;
  for ( i = 0; ; ++i )
  {
    v4 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
    if ( !v4 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
    if ( !v5 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    ++i;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v5, 0);
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( UsedProcessorCount )
  {
    v7 = 0LL;
    v8 = UsedProcessorCount;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v9 = (volatile __int64 *)(a1 + 36);
      else
        v9 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 4104LL) + v7) + 8 * v1);
      v10 = _InterlockedExchange64(v9, 0LL);
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), -(v10 & 0xF));
        do
        {
          v14 = *(_QWORD *)(v11 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
          ++i;
          ExFreePoolWithTag((PVOID)v11, 0);
          v11 = v14;
        }
        while ( v14 );
      }
      v7 += 64LL;
      --v8;
    }
    while ( v8 );
  }
  if ( *((_QWORD *)a1 + 289) )
  {
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    v15 = (__int64 *)*((_QWORD *)a1 + 289);
    ++i;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v12 = (__int64 *)*((_QWORD *)a1 + 293);
    if ( !v12 )
      break;
    v16 = *v12;
    v15 = v12 - 4;
    *((_QWORD *)a1 + 293) = v16;
LABEL_21:
    ExFreePoolWithTag(v15, 0);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 282) + 4LL * (a1[79] & 1) + 4084), -(i * a1[1]));
  return 0LL;
}

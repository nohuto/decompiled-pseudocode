/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x140435B54
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x140087C00 (EtwpDequeueBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int i; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  unsigned int v6; // ebp
  unsigned int UsedProcessorCount; // r14d
  volatile __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 *v11; // rcx
  unsigned __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rax

  v1 = *a1;
  for ( i = 0; ; ++i )
  {
    v4 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
    if ( !v4 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
    if ( !v5 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
    ++i;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
    ExFreePoolWithTag(v5, 0);
  }
  v6 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( UsedProcessorCount )
  {
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v8 = (volatile __int64 *)(a1 + 32);
      else
        v8 = (volatile __int64 *)(*(_QWORD *)(*((_QWORD *)a1 + 118) + 5104LL) + 8 * (v1 + ((unsigned __int64)v6 << 7)));
      v9 = _InterlockedExchange64(v8, 0LL);
      v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), -(v9 & 0xF));
        do
        {
          v13 = *(_QWORD *)(v10 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
          ++i;
          ExFreePoolWithTag((PVOID)v10, 0);
          v10 = v13;
        }
        while ( v13 );
      }
      ++v6;
    }
    while ( v6 < UsedProcessorCount );
  }
  if ( *((_QWORD *)a1 + 125) )
  {
    _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
    v14 = (__int64 *)*((_QWORD *)a1 + 125);
    ++i;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v11 = (__int64 *)*((_QWORD *)a1 + 129);
    if ( !v11 )
      break;
    v15 = *v11;
    v14 = v11 - 4;
    *((_QWORD *)a1 + 129) = v15;
LABEL_20:
    ExFreePoolWithTag(v14, 0);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 118) + 4LL * (a1[75] & 1) + 5084), -(i * a1[1]));
  return 0LL;
}

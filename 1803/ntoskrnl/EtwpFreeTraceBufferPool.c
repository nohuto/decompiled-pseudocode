/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x140493744
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400D43F8 (EtwpDequeueBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int i; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int UsedProcessorCount; // eax
  __int64 v8; // rbp
  __int64 v9; // r14
  volatile __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 *v13; // rcx
  unsigned __int64 v15; // rbx
  __int64 *v16; // rcx
  __int64 v17; // rax

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
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v6);
  if ( UsedProcessorCount )
  {
    v8 = 0LL;
    v9 = UsedProcessorCount;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v10 = (volatile __int64 *)(a1 + 36);
      else
        v10 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4112LL) + v8) + 8 * v1);
      v11 = _InterlockedExchange64(v10, 0LL);
      v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), -(v11 & 0xF));
        do
        {
          v15 = *(_QWORD *)(v12 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
          ++i;
          ExFreePoolWithTag((PVOID)v12, 0);
          v12 = v15;
        }
        while ( v15 );
      }
      v8 += 64LL;
      --v9;
    }
    while ( v9 );
  }
  if ( *((_QWORD *)a1 + 146) )
  {
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    v16 = (__int64 *)*((_QWORD *)a1 + 146);
    ++i;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v13 = (__int64 *)*((_QWORD *)a1 + 150);
    if ( !v13 )
      break;
    v17 = *v13;
    v16 = v13 - 4;
    *((_QWORD *)a1 + 150) = v17;
LABEL_21:
    ExFreePoolWithTag(v16, 0);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 139) + 4LL * (a1[79] & 1) + 4092), -(i * a1[1]));
  return 0LL;
}

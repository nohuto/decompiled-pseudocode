/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1400D3DA0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400D43F8 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400D44D8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400D4514 (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v4; // rbx
  int UsedProcessorCount; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rbp
  __int64 v10; // rdx
  _QWORD *v11; // r8
  char i; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 16); ++v2 )
  {
    result = EtwpAcquireLoggerContextByLoggerId(a1, v2, 0LL);
    v4 = result;
    if ( result )
    {
      if ( (*(_DWORD *)(result + 12) & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(result, *(unsigned int *)(result + 244));
        if ( v6 > *(_DWORD *)(v4 + 240) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v7, &i);
          v8 = EtwpDequeueBuffer(v4, v4 + 64);
          v9 = (void *)v8;
          if ( v8 )
          {
            v10 = *(_QWORD *)(v8 + 56);
            if ( *(_QWORD *)(v10 + 8) != v8 + 56 || (v11 = *(_QWORD **)(v8 + 64), *v11 != v8 + 56) )
              __fastfail(3u);
            *v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
          }
          EtwpUnlockBufferList(v4, &i);
          if ( v9 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 248));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 244));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v4 + 1112) + 4LL * (*(_DWORD *)(v4 + 316) & 1) + 4092),
              -*(_DWORD *)(v4 + 4));
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      result = EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  return result;
}

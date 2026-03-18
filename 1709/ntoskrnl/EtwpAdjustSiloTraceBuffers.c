/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x14002441C
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1400D5060 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400E0748 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 */

volatile signed __int32 *__fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  volatile signed __int32 *result; // rax
  unsigned int v2; // edi
  volatile signed __int32 *v4; // rbx
  int UsedProcessorCount; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rbp
  __int64 v10; // rdx
  _QWORD *v11; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  char i; // [rsp+30h] [rbp+8h] BYREF

  result = (volatile signed __int32 *)&retaddr;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 8); ++v2 )
  {
    result = (volatile signed __int32 *)EtwpAcquireLoggerContextByLoggerId(a1, v2, 0LL);
    v4 = result;
    if ( result )
    {
      if ( (result[3] & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(result, *((unsigned int *)result + 61));
        if ( v6 > *((_DWORD *)v4 + 60) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v7, &i);
          v8 = EtwpDequeueBuffer(v4, v4 + 16);
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
            _InterlockedDecrement(v4 + 62);
            _InterlockedDecrement(v4 + 61);
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*((_QWORD *)v4 + 282) + 4LL * (v4[79] & 1) + 4084),
              -*((_DWORD *)v4 + 1));
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      result = (volatile signed __int32 *)EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  return result;
}

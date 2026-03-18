/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140087DD0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14011D770 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x140087C00 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x140087CE0 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140087D24 (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  unsigned int i; // edi
  __int64 result; // rax
  __int64 v4; // rbx
  int UsedProcessorCount; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned __int8 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0;
  for ( i = 0; i < 0x40; ++i )
  {
    result = EtwpAcquireLoggerContextByLoggerId(a1, i, 0LL);
    v4 = result;
    if ( result )
    {
      if ( (*(_DWORD *)(result + 12) & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(result);
        if ( v6 > *(_DWORD *)(v4 + 224) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v7, &v13);
          v8 = EtwpDequeueBuffer(v4, (_QWORD *)(v4 + 64));
          v9 = v8;
          if ( v8 )
          {
            v10 = v8 + 7;
            v11 = v8[7];
            v12 = (_QWORD *)v10[1];
            if ( *(_QWORD **)(v11 + 8) != v10 || (_QWORD *)*v12 != v10 )
              __fastfail(3u);
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
          }
          EtwpUnlockBufferList(v4, &v13);
          if ( v9 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 232));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 228));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v4 + 944) + 4LL * (*(_DWORD *)(v4 + 300) & 1) + 5084),
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

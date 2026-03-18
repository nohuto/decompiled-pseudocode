/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x14054E5D0
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14054E0CC (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x14054E168 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x14054E584 (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140550490 (EtwpRealtimeInjectEtwBuffer.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned int MaxDebugIdBufferSize; // eax
  int v4; // r14d
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rax
  __int64 *i; // rsi
  __int64 **v10; // rdi
  __int64 *j; // rax

  v1 = (volatile signed __int64 *)(a1 + 688);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
  v4 = MaxDebugIdBufferSize;
  if ( MaxDebugIdBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxDebugIdBufferSize, 0x62777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v4);
      for ( i = *(__int64 **)(a1 + 328); i != (__int64 *)(a1 + 328); i = (__int64 *)*i )
      {
        EtwpAddDebugInfoEvents(a1, (__int64)v5, v4, 0LL, (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1);
        *((_BYTE *)i + 90) |= 8u;
        if ( v5[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer(a1, i, v5);
          v5[12] = 72;
        }
      }
      v10 = (__int64 **)(a1 + 112);
      for ( j = *v10; j != (__int64 *)v10; j = (__int64 *)*j )
        *((_BYTE *)j + 16) = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
    }
  }
  else
  {
    v5 = 0LL;
    v6 = -2147483622;
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}

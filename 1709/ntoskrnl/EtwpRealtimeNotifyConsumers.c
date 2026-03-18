/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x140577AFC
 * Callers:
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140532DE0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x140577900 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x140577C5C (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140577CD4 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpAddBinaryInfoEvents @ 0x14074AE14 (EtwpAddBinaryInfoEvents.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned int MaxTrackingEventBufferSize; // eax
  unsigned int v4; // r14d
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 *k; // rax
  char v8; // al
  _DWORD *PoolWithTag; // rax
  __int64 i; // rsi
  __int64 *j; // rax
  __int64 **v13; // rbx
  unsigned int v14; // r12d

  v1 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  v4 = MaxTrackingEventBufferSize;
  if ( MaxTrackingEventBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxTrackingEventBufferSize, 0x62777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, PoolWithTag, v4);
      for ( i = *(_QWORD *)(a1 + 344); i != a1 + 344; i = *(_QWORD *)i )
      {
        v14 = (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (__int64)v5, v4, 0LL, v14);
        if ( *(_QWORD *)(a1 + 2168) != a1 + 2168 && (*(_DWORD *)(a1 + 832) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v5, v4, v14);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v5[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v5);
          v5[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 128); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v13 = (__int64 **)(a1 + 112);
      for ( k = *v13; k != (__int64 *)v13; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
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
  v8 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}

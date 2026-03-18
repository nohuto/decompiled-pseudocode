/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x140587F34
 * Callers:
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x140587C2C (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x140588040 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1405880B8 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140592504 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddBinaryInfoEvents @ 0x1407AD2C4 (EtwpAddBinaryInfoEvents.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned int MaxTrackingEventBufferSize; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r14d
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  char v10; // al
  _DWORD *PoolWithTag; // rax
  __int64 *i; // rsi
  __int64 *j; // rax
  __int64 **v15; // rbx
  __int64 *k; // rax
  unsigned int v17; // r12d

  v1 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  v7 = MaxTrackingEventBufferSize;
  if ( MaxTrackingEventBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxTrackingEventBufferSize, 0x62777445u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, PoolWithTag, v7);
      for ( i = *(__int64 **)(a1 + 344); i != (__int64 *)(a1 + 344); i = (__int64 *)*i )
      {
        v17 = (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (__int64)v8, v7, 0LL, v17);
        if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 && (*(_DWORD *)(a1 + 832) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v8, v7, v17);
        *((_BYTE *)i + 90) |= 8u;
        if ( v8[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer(a1, i, v8);
          v8[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 128); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v15 = (__int64 **)(a1 + 112);
      for ( k = *v15; k != (__int64 *)v15; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v9 = 0;
    }
    else
    {
      v9 = -1073741801;
    }
  }
  else
  {
    v8 = 0LL;
    v9 = -2147483622;
  }
  v10 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(v1, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v9;
}

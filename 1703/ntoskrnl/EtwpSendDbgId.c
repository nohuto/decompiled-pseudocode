/*
 * XREFs of EtwpSendDbgId @ 0x14070F004
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14054E0CC (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x14054E168 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x14054E584 (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpSendBufferToDebugger @ 0x14070EEEC (EtwpSendBufferToDebugger.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rsi
  unsigned int MaxDebugIdBufferSize; // eax
  int v6; // ebp
  __int128 *v7; // rdi
  __int128 *PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 820) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 820));
    v2 = *(_DWORD *)(a1 + 820);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 820), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 688);
      ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
      MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
      v6 = MaxDebugIdBufferSize;
      if ( MaxDebugIdBufferSize )
      {
        PoolWithTag = (__int128 *)ExAllocatePoolWithTag(NonPagedPoolNx, MaxDebugIdBufferSize, 0x62777445u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v6);
          EtwpAddDebugInfoEvents(a1, (__int64)v7, v6, 0LL, 0);
        }
      }
      else
      {
        v7 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
      KeAbPostRelease(a1 + 688);
      if ( v7 )
      {
        EtwpSendBufferToDebugger(v7);
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}

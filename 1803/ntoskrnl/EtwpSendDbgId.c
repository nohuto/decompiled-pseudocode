/*
 * XREFs of EtwpSendDbgId @ 0x1407AD100
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     EtwpSendTraceEvent @ 0x1402B1578 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x140587C2C (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x140588040 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1405880B8 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1407ACFE8 (EtwpSendBufferToDebugger.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebp
  __int128 *v10; // rdi
  __int128 *PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 836) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 836));
    v2 = *(_DWORD *)(a1 + 836);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 836), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 704);
      ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      v9 = MaxTrackingEventBufferSize;
      if ( MaxTrackingEventBufferSize )
      {
        PoolWithTag = (__int128 *)ExAllocatePoolWithTag(NonPagedPoolNx, MaxTrackingEventBufferSize, 0x62777445u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v9);
          EtwpAddDebugInfoEvents(a1, (__int64)v10, v9, 0LL, 0);
        }
      }
      else
      {
        v10 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704), v6, v7, v8);
      KeAbPostRelease(a1 + 704);
      if ( v10 )
      {
        EtwpSendBufferToDebugger(v10);
        ExFreePoolWithTag(v10, 0);
      }
    }
  }
}

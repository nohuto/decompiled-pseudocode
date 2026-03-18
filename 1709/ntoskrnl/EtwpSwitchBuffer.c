/*
 * XREFs of EtwpSwitchBuffer @ 0x1400E041C
 * Callers:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     EtwpAllocateFreeBuffers @ 0x1400E02E8 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1400E0608 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400E078C (EtwpEnqueueAvailableBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400E0C64 (EtwpRequestFlushTimer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1401315F4 (EtwpEnqueueOverflowBuffer.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  signed __int64 v9; // rdx
  __int64 v10; // r10
  int v11; // r14d
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx

  v10 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v10 )
  {
LABEL_2:
    v11 = *(_DWORD *)(a1 + 12) & 0x400;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v10 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v11 )
        *(_QWORD *)(v10 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v9 = (v10 | 0xF) & -(__int64)(v10 != 0);
        v13 = _InterlockedCompareExchange64(a3, v9, i);
        if ( i == v13 )
          break;
      }
      v14 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
      {
        if ( v14 )
        {
          EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), ~(i & 0xF));
          if ( !v11
            && (!*(_DWORD *)(a1 + 228)
             || (signed int)(*(_DWORD *)(a1 + 248) - EtwpQueryUsedProcessorCount(a1, v15) - *(_DWORD *)(a1 + 244)) >= *(_DWORD *)(a1 + 228)) )
          {
            if ( (a5 & 0x600) != 0 || KeGetEffectiveIrql() > 2u )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
                KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
            }
            else
            {
              KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
            }
          }
        }
        else if ( *(_DWORD *)(a1 + 224) )
        {
          LOBYTE(v9) = (a5 & 0x600) != 0;
          EtwpRequestFlushTimer(a1, v9);
        }
        return 0LL;
      }
      if ( v14 )
        break;
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFF1);
    if ( v11 )
      EtwpEnqueueOverflowBuffer(a1, v10);
    else
      EtwpEnqueueAvailableBuffer(a1, v10, 0LL);
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0 && KeGetEffectiveIrql() <= 2u && (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) == 1 )
    {
      v10 = EtwpDequeueFreeBuffer(a1);
      if ( v10 )
        goto LABEL_2;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}

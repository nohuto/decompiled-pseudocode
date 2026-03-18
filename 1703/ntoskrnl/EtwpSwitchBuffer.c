/*
 * XREFs of EtwpSwitchBuffer @ 0x1400878C8
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 * Callees:
 *     EtwpRequestFlushTimer @ 0x14002AE2C (EtwpRequestFlushTimer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14003BB70 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140087AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140087C44 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140087D7C (EtwpPrepareDirtyBuffer.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     EtwpAllocateFreeBuffers @ 0x140122058 (EtwpAllocateFreeBuffers.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx

  v9 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v9 )
  {
LABEL_2:
    v11 = *(_DWORD *)(a1 + 12) & 0x400;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v9 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v11 )
        *(_QWORD *)(v9 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v13 = _InterlockedCompareExchange64(a3, v9 | 0xF, i);
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
          if ( !v11 )
          {
            if ( !*(_DWORD *)(a1 + 212)
              || (v16 = *(_DWORD *)(a1 + 232) - (unsigned int)EtwpQueryUsedProcessorCount(a1) - *(_DWORD *)(a1 + 228),
                  (int)v16 >= *(_DWORD *)(a1 + 212)) )
            {
              if ( (a5 & 0x600) != 0 || (unsigned __int8)KeGetEffectiveIrql(v16, v15) > 2u )
              {
                if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 8u) )
                  KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
              }
              else
              {
                KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
              }
            }
          }
        }
        else if ( *(_DWORD *)(a1 + 208) )
        {
          EtwpRequestFlushTimer(a1, (a5 & 0x600) != 0);
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
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFF1);
    if ( v11 )
      EtwpEnqueueOverflowBuffer(a1, v9);
    else
      EtwpEnqueueAvailableBuffer(a1, v9, 0LL);
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && (unsigned __int8)KeGetEffectiveIrql(v10, 0LL) <= 2u
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v9 = EtwpDequeueFreeBuffer(a1);
      if ( v9 )
        goto LABEL_2;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}

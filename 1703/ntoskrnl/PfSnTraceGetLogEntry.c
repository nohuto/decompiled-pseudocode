/*
 * XREFs of PfSnTraceGetLogEntry @ 0x1400B31C4
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x14002E5D0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogPageFaultCommon @ 0x1400B5710 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x1400B5834 (PfSnCheckLogSequenceNumber.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     PfSnLogStreamDelete @ 0x14045D1A4 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x140497128 (PfSnLogHelper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     PfSnTraceBufferAllocate @ 0x14012CFC8 (PfSnTraceBufferAllocate.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v10; // r15
  KIRQL v11; // r12
  _QWORD *v12; // rcx

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return (unsigned int)-1073741431;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    v8 = 0;
    while ( v7 > 0 )
    {
      if ( v7 <= *(_DWORD *)(v6 + 20) )
      {
        *a3 = v6 + 16LL * (int)(v7 - a2) + 24;
        return v8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), -a2);
      v10 = (_QWORD *)PfSnTraceBufferAllocate();
      if ( !v10 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
        return (unsigned int)-1073741670;
      }
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v6 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        v10[1] = v12;
        *v10 = a1 + 104;
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        __writecr8(v11);
      }
      else
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        __writecr8(v11);
        ExFreePoolWithTag(v10, 0);
      }
      v6 = *(_QWORD *)(a1 + 96);
      v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    return (unsigned int)-1073741675;
  }
}

/*
 * XREFs of PfSnTraceGetLogEntry @ 0x140012EB8
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x140011BB0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogPageFaultCommon @ 0x140012A2C (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x140012B4C (PfSnCheckLogSequenceNumber.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     PfSnLogHelper @ 0x140456164 (PfSnLogHelper.c)
 *     PfSnLogStreamDelete @ 0x14045993C (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x1400106D0 (PfSnTraceBufferAllocate.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
      v10 = PfSnTraceBufferAllocate();
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

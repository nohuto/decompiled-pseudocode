/*
 * XREFs of PfSnTraceGetLogEntry @ 0x14008E554
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x14008DFB4 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x14008E4E0 (PfSnCheckLogSequenceNumber.c)
 *     PfSnTraceTimerRoutine @ 0x1400C4150 (PfSnTraceTimerRoutine.c)
 *     PfSnLogHelper @ 0x140539004 (PfSnLogHelper.c)
 *     PfSnLogIdentifier @ 0x14057ADE8 (PfSnLogIdentifier.c)
 *     PfSnLogStreamDelete @ 0x140582CE4 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x1400065D4 (PfSnTraceBufferAllocate.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // r14
  int v6; // eax
  unsigned int v7; // ebp
  KSPIN_LOCK *v8; // r12
  unsigned int v10; // edi
  _QWORD *v11; // r15
  KIRQL v12; // r13
  _QWORD *v13; // rcx

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return (unsigned int)-1073741431;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 96);
    v6 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16), a2);
    v7 = 0;
    if ( v6 <= 0 )
    {
      v10 = -a2;
LABEL_20:
      v7 = -1073741675;
    }
    else
    {
      v8 = (KSPIN_LOCK *)(a1 + 128);
      while ( 1 )
      {
        if ( v6 <= *(_DWORD *)(v5 + 20) )
        {
          *a3 = v5 + 16LL * (int)(v6 - a2) + 24;
          return v7;
        }
        v10 = -a2;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16), -a2);
        v11 = PfSnTraceBufferAllocate();
        if ( !v11 )
          break;
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        if ( *(_QWORD *)(a1 + 96) == v5 )
        {
          v13 = *(_QWORD **)(a1 + 112);
          if ( *v13 != a1 + 104 )
            __fastfail(3u);
          v11[1] = v13;
          *v11 = a1 + 104;
          *v13 = v11;
          *(_QWORD *)(a1 + 112) = v11;
          ++*(_DWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 96) = v11;
          KxReleaseSpinLock(v8);
          __writecr8(v12);
        }
        else
        {
          KxReleaseSpinLock(v8);
          __writecr8(v12);
          ExFreePoolWithTag(v11, 0);
        }
        v5 = *(_QWORD *)(a1 + 96);
        v6 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16), a2);
        if ( v6 <= 0 )
          goto LABEL_20;
      }
      v7 = -1073741670;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), v10);
  }
  return v7;
}

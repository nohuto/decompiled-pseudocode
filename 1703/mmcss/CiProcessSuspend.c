/*
 * XREFs of CiProcessSuspend @ 0x1C0001010
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A290 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C0001200 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerPoke @ 0x1C0001850 (CiSchedulerPoke.c)
 *     CiSchedulerSetPriority @ 0x1C0001980 (CiSchedulerSetPriority.c)
 *     WPP_SF_qqd @ 0x1C0004B18 (WPP_SF_qqd.c)
 *     CiReleaseProcessLock @ 0x1C000A010 (CiReleaseProcessLock.c)
 *     CiAcquireProcessLock @ 0x1C000A030 (CiAcquireProcessLock.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ACC0 (CiThreadIncrementScheduledCount.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B650 (CiThreadDecrementScheduledCount.c)
 */

__int64 __fastcall CiProcessSuspend(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  bool v5; // bl
  _QWORD *v6; // rbx
  _QWORD **i; // rsi
  _QWORD *v8; // rcx
  unsigned int v9; // r12d
  int v10; // ebp
  _QWORD *j; // rdi
  _QWORD *v12; // rbx
  char v13; // al

  v4 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_qqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a1, *(_QWORD *)(a1 + 80), (unsigned __int8)a2);
  v5 = 0;
  CiAcquireProcessLock(a1);
  if ( *(_BYTE *)(a1 + 88) == v4 )
  {
    v9 = -1073700861;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 64);
    for ( i = (_QWORD **)(a1 + 64); v6 != i; v6 = (_QWORD *)*v6 )
    {
      v8 = v6 - 14;
      if ( v4 )
        CiThreadDecrementScheduledCount(v8);
      else
        CiThreadIncrementScheduledCount(v8);
    }
    v9 = 0;
    v10 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( j = *i; j != i; j = (_QWORD *)*j )
    {
      v12 = j - 14;
      if ( (*(_BYTE *)(*(_QWORD *)(*(j - 5) + 136LL) + 3LL) & 1) != 0 )
        ++v10;
      v13 = v4 & 1 | *((_BYTE *)v12 + 148) & 0xFE;
      *((_BYTE *)v12 + 148) = v13;
      if ( (v13 & 1) != 0 )
      {
        if ( *((_BYTE *)v12 + 107) != 0xFF )
          KeSetBasePriorityThread((PKTHREAD)v12[12], *((_DWORD *)v12 + 36));
        *((_BYTE *)v12 + 107) = -1;
      }
      else
      {
        CiSchedulerSetPriority(j - 14);
      }
    }
    CiSchedulerUpdateTimer();
    v5 = 0;
    if ( v10 )
    {
      if ( v4 )
      {
        _InterlockedOr(&CiSchedulerWakeupReason, 4u);
      }
      else
      {
        _m_prefetchw(&CiSchedulerWakeupReason);
        v5 = (_InterlockedOr(&CiSchedulerWakeupReason, 2u) & 0x8000) != 0;
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    *(_BYTE *)(a1 + 88) = v4;
  }
  CiReleaseProcessLock(a1);
  if ( v5 )
    CiSchedulerPoke(0LL);
  return v9;
}

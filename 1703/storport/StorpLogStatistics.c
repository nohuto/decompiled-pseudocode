/*
 * XREFs of StorpLogStatistics @ 0x1C0002FDC
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0001BF0 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     StorpLogPerAdapterStatistics @ 0x1C0001A10 (StorpLogPerAdapterStatistics.c)
 *     RaidGetPortData @ 0x1C0001D0C (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0001D80 (RaidReleasePortData.c)
 *     StorpLogPerUnitStatistics @ 0x1C000314C (StorpLogPerUnitStatistics.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 */

void __fastcall StorpLogStatistics(unsigned __int16 a1)
{
  bool v2; // r12
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v4; // rbp
  _QWORD *v5; // r13
  _QWORD *i; // rdi
  KSPIN_LOCK *v7; // rsi
  KSPIN_LOCK *v8; // r14
  __int64 *j; // r14
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  bool v13; // [rsp+B0h] [rbp+8h]
  bool v14; // [rsp+B8h] [rbp+10h]

  v2 = (a1 & 0x43) != 0;
  v14 = v2;
  v13 = (a1 & 0xFC) != 0;
  PortData = RaidGetPortData();
  v4 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock(PortData + 3, &LockHandle);
    v5 = v4 + 1;
    for ( i = (_QWORD *)v4[1]; i != v5; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v11);
      v8 = i + 4;
      v7 = (KSPIN_LOCK *)i[4];
      if ( v7 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock(v7 - 8) >= 0 )
          {
            if ( v2 )
              StorpLogPerAdapterStatistics((__int64)(v7 - 8));
            if ( v13 )
            {
              KeAcquireInStackQueuedSpinLock(v7 + 6, &v10);
              for ( j = (__int64 *)v7[7]; j != (__int64 *)(v7 + 7); j = (__int64 *)*j )
                StorpLogPerUnitStatistics(j - 6, a1);
              KeReleaseInStackQueuedSpinLock(&v10);
              v2 = v14;
              v8 = i + 4;
            }
            if ( (a1 & 0x20) != 0 )
              *((_DWORD *)v7 + 1344) = 0;
            if ( (a1 & 0x40) != 0 )
            {
              *((_DWORD *)v7 + 1346) = 0;
              *((_DWORD *)v7 + 1345) = 0;
            }
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v7[24]);
          }
          v7 = (KSPIN_LOCK *)*v7;
        }
        while ( v7 != v8 );
        v5 = v4 + 1;
      }
      KeReleaseInStackQueuedSpinLock(&v11);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v4);
  }
}

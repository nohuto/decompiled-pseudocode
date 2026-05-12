/*
 * XREFs of StorpLogStatistics @ 0x1C00054D8
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0004700 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidGetPortData @ 0x1C000481C (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0004848 (RaidReleasePortData.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0004868 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPerUnitStatistics @ 0x1C000565C (StorpLogPerUnitStatistics.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007CD0 (RaidAcquireAdapterRemoveLock.c)
 */

void __fastcall StorpLogStatistics(unsigned __int16 a1)
{
  __int16 v2; // r12
  char *PortData; // rax
  char *v4; // rbp
  _QWORD *v5; // r13
  _QWORD *i; // rdi
  __int64 *j; // r14
  __int64 *v8; // r14
  __int64 *v9; // rsi
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  __int16 v13; // [rsp+B0h] [rbp+8h]
  __int16 v14; // [rsp+B8h] [rbp+10h]
  char *v15; // [rsp+C0h] [rbp+18h]

  v2 = a1 & 0x43;
  v13 = a1 & 0xFC;
  v14 = v2;
  PortData = RaidGetPortData();
  v15 = PortData;
  v4 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)PortData + 3, &LockHandle);
    v5 = v4 + 8;
    for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i != v5; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v11);
      v8 = i + 4;
      v9 = (__int64 *)i[4];
      if ( v9 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock(v9 - 8) >= 0 )
          {
            if ( v2 )
              StorpLogPerAdapterStatistics((__int64)(v9 - 8));
            if ( v13 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9 + 6, &v10);
              for ( j = (__int64 *)v9[7]; j != v9 + 7; j = (__int64 *)*j )
                StorpLogPerUnitStatistics(j - 6, a1);
              KeReleaseInStackQueuedSpinLock(&v10);
              v2 = v14;
              v8 = i + 4;
            }
            if ( (a1 & 0x20) != 0 )
              *((_DWORD *)v9 + 1344) = 0;
            if ( (a1 & 0x40) != 0 )
              *(__int64 *)((char *)v9 + 5380) = 0LL;
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v9[24]);
          }
          v9 = (__int64 *)*v9;
        }
        while ( v9 != v8 );
        v4 = v15;
        v5 = v15 + 8;
      }
      KeReleaseInStackQueuedSpinLock(&v11);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v4);
  }
}

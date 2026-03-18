/*
 * XREFs of DrvGetHDEV @ 0x1C0062010
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 *__fastcall DrvGetHDEV(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 DeviceFromName; // rbp
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      v4 = *(__int64 **)&WPP_MAIN_CB.SectorSize;
      if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      {
        do
        {
          v5 = v4[324];
          if ( v5 && v5 == DeviceFromName )
          {
            if ( (v4[4] & 0x400) == 0 )
            {
              ++*((_DWORD *)v4 + 2);
              TrackObjectReferenceIncrement(
                1u,
                (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v4[446]);
              v1 = v4;
              goto LABEL_12;
            }
            if ( !v3 )
              v3 = v4;
          }
          v4 = (__int64 *)*v4;
        }
        while ( v4 );
        if ( v3 )
        {
          v3[3] = 0LL;
          ++*((_DWORD *)v3 + 2);
          TrackObjectReferenceIncrement(
            1u,
            (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v3[446]);
          v1 = v3;
        }
      }
LABEL_12:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v7);
      }
    }
  }
  return v1;
}

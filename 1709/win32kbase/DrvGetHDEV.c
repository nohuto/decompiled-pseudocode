/*
 * XREFs of DrvGetHDEV @ 0x1C005A5C0
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     DrvGetDeviceFromName @ 0x1C005A6D0 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

PDEV *__fastcall DrvGetHDEV(__int64 a1)
{
  PDEV *v1; // rsi
  __int64 DeviceFromName; // rbp
  PDEV *v3; // rdi
  PDEV *v4; // rbx
  __int64 v5; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      v4 = gppdevList;
      if ( gppdevList )
      {
        do
        {
          v5 = *((_QWORD *)v4 + 324);
          if ( v5 && v5 == DeviceFromName )
          {
            if ( (*((_DWORD *)v4 + 8) & 0x400) == 0 )
            {
              ++*((_DWORD *)v4 + 2);
              TrackObjectReferenceIncrement(
                1u,
                *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v4 + 446));
              v1 = v4;
              goto LABEL_8;
            }
            if ( !v3 )
              v3 = v4;
          }
          v4 = *(PDEV **)v4;
        }
        while ( v4 );
        if ( v3 )
        {
          *((_QWORD *)v3 + 3) = 0LL;
          ++*((_DWORD *)v3 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 446));
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
    }
  }
  return v1;
}

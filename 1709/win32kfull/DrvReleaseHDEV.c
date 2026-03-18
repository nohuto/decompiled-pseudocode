/*
 * XREFs of DrvReleaseHDEV @ 0x1C024C364
 * Callers:
 *     xxxRemoteConsoleShadowStop @ 0x1C01F9130 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     <none>
 */

__int64 DrvReleaseHDEV()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 result; // rax
  struct PDEV *i; // rcx

  v0 = gConsoleShadowhDev;
  v1 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v1 + 24) = v0;
  result = WdLogEvent5_WdTrace(v1);
  if ( v0 )
  {
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      if ( i == (struct PDEV *)v0 )
      {
        PDEV::DecrementClientReferenceCount(i);
        break;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    return GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  }
  return result;
}

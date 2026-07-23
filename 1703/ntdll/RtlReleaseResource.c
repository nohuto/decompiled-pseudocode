/*
 * XREFs of RtlReleaseResource @ 0x180073A90
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180073840 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180073B48 @ 0x180073B48 (sub_180073B48.c)
 *     ZwReleaseSemaphore @ 0x1800A5440 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  int v3; // eax
  int v4; // eax
  LONG v5; // edx
  int v6; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 )
  {
    if ( NumberOfActive == -1 )
      Resource->ExclusiveOwnerThread = 0LL;
    if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
    {
      if ( Resource->NumberOfWaitingShared )
      {
        v5 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v5 )
        {
          v6 = ZwReleaseSemaphore(Resource->SharedSemaphore, v5, &PreviousCount);
          if ( v6 < 0 )
            RtlRaiseStatus(v6);
        }
      }
      if ( (unsigned int)sub_180073B48(&Resource->NumberOfWaitingExclusive) )
      {
        v3 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v3 < 0 )
          RtlRaiseStatus(v3);
      }
    }
  }
  else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1
         && (unsigned int)sub_180073B48(&Resource->NumberOfWaitingExclusive) )
  {
    v4 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
  }
}

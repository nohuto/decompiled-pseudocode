/*
 * XREFs of RtlReleaseResource @ 0x18006EB30
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18006E9C0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpNonNegativeDecrement @ 0x18006EC00 (RtlpNonNegativeDecrement.c)
 *     ZwReleaseSemaphore @ 0x1800A0200 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  signed int NumberOfWaitingExclusive; // edx
  bool v4; // zf
  int v5; // eax
  LONG v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
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
        v6 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v6 )
        {
          v7 = ZwReleaseSemaphore(Resource->SharedSemaphore, v6, &PreviousCount);
          if ( v7 < 0 )
            RtlRaiseStatus(v7);
        }
      }
      if ( (unsigned int)RtlpNonNegativeDecrement(&Resource->NumberOfWaitingExclusive) )
      {
        v5 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v5 < 0 )
          RtlRaiseStatus(v5);
      }
    }
  }
  else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
  {
    NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
    v4 = NumberOfWaitingExclusive == 0;
    if ( NumberOfWaitingExclusive > 0 )
    {
      do
      {
        v8 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
               NumberOfWaitingExclusive - 1,
               NumberOfWaitingExclusive);
        if ( NumberOfWaitingExclusive == v8 )
          break;
        NumberOfWaitingExclusive = v8;
      }
      while ( v8 > 0 );
      v4 = NumberOfWaitingExclusive == 0;
    }
    if ( !v4 )
    {
      v9 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v9 < 0 )
        RtlRaiseStatus(v9);
    }
  }
}

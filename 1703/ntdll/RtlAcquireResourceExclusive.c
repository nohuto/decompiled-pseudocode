/*
 * XREFs of RtlAcquireResourceExclusive @ 0x180073980
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180073840 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180073B48 @ 0x180073B48 (sub_180073B48.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 */

BOOLEAN __cdecl RtlAcquireResourceExclusive(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r9d
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  int v8; // eax

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedAdd(&Resource->NumberOfActive, 0xFFFFFFFF);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( !NumberOfActive )
      {
        NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, 0);
        if ( !NumberOfActive )
        {
          Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
          return 1;
        }
      }
      if ( !Wait )
        break;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive);
      if ( Resource->NumberOfActive || !(unsigned int)sub_180073B48() )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = 0LL;
          if ( (Resource->Flags & 1) == 0 )
            v7 = &Timeout;
          v8 = ZwWaitForSingleObject(Resource->ExclusiveSemaphore, 0, v7);
          if ( v8 != 258 )
            break;
          DbgPrintEx(
            0x65u,
            0,
            "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
            v6,
            ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
          + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
          DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
          if ( (unsigned int)++v6 > 2 )
            sub_1800E758C(Resource);
          DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
        }
        if ( v8 < 0 )
          RtlRaiseStatus(v8);
        NumberOfActive = Resource->NumberOfActive;
      }
    }
    return 0;
  }
}

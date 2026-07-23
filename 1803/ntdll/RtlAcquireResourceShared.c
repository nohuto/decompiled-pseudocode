/*
 * XREFs of RtlAcquireResourceShared @ 0x18006C6A0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18006C960 @ 0x18006C960 (sub_18006C960.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 */

BOOLEAN __cdecl RtlAcquireResourceShared(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r9d
  bool v5; // zf
  signed __int32 v6; // eax
  int v8; // esi
  LARGE_INTEGER *v9; // rdi
  int v10; // eax

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive >= 0 )
  {
LABEL_2:
    v6 = _InterlockedCompareExchange(&Resource->NumberOfActive, NumberOfActive + 1, NumberOfActive);
    v5 = NumberOfActive == v6;
    NumberOfActive = v6;
    if ( !v5 )
      goto LABEL_6;
    return 1;
  }
  if ( Resource->ExclusiveOwnerThread != NtCurrentTeb()->ClientId.UniqueThread )
  {
LABEL_6:
    while ( NumberOfActive < 0 )
    {
      if ( !Wait )
        return 0;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingShared);
      if ( Resource->NumberOfActive < 0 || !(unsigned int)sub_18006C960() )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = 0LL;
          if ( (Resource->Flags & 1) == 0 )
            v9 = &Timeout;
          v10 = ZwWaitForSingleObject(Resource->SharedSemaphore, 0, v9);
          if ( v10 != 258 )
            break;
          DbgPrintEx(
            0x65u,
            0,
            "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
            v8,
            ((unsigned __int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 63)
          + ((__int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 23));
          DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
          if ( (unsigned int)++v8 > 2 )
            sub_1800E224C(Resource);
          DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
        }
        if ( v10 < 0 )
          RtlRaiseStatus(v10);
        NumberOfActive = Resource->NumberOfActive;
      }
    }
    goto LABEL_2;
  }
  _InterlockedDecrement(&Resource->NumberOfActive);
  return 1;
}

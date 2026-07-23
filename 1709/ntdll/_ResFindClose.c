/*
 * XREFs of _ResFindClose @ 0x18010FAF0
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1801106D8 (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall ResFindClose(_RTL_CRITICAL_SECTION *BaseAddress)
{
  _RTL_CRITICAL_SECTION *v3; // rdi
  void *v4; // r8

  if ( BaseAddress == (_RTL_CRITICAL_SECTION *)1 )
    return 1LL;
  if ( BaseAddress == (_RTL_CRITICAL_SECTION *)-1LL )
  {
    RtlSetLastWin32Error(6);
    return 0LL;
  }
  else
  {
    v3 = BaseAddress + 1;
    RtlEnterCriticalSection(BaseAddress + 1);
    if ( NtClose(BaseAddress->DebugInfo) < 0 )
    {
      RtlLeaveCriticalSection(v3);
      return 0LL;
    }
    else
    {
      v4 = *(void **)&BaseAddress->LockCount;
      if ( v4 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      RtlDeleteCriticalSection(v3);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return 1LL;
    }
  }
}

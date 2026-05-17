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

__int64 __fastcall ResFindClose(unsigned __int64 a1)
{
  __int64 *v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 *v6; // r8

  if ( a1 == 1 )
    return 1LL;
  if ( a1 == -1LL )
  {
    RtlSetLastWin32Error(6u);
    return 0LL;
  }
  else
  {
    v3 = (__int64 *)(a1 + 40);
    RtlEnterCriticalSection(a1 + 40);
    if ( NtClose(*(HANDLE *)a1) < 0 )
    {
      RtlLeaveCriticalSection((__int64)v3);
      return 0LL;
    }
    else
    {
      v6 = *(unsigned __int64 **)(a1 + 8);
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
      RtlDeleteCriticalSection(v3, v4, v6, v5);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
      return 1LL;
    }
  }
}

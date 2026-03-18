/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C000EAD8
 * Callers:
 *     VidSchFlushContext @ 0x1C0070900 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0017DD4 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 780) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 780) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1888), &LockHandle);
        VidSchiRundownUnorderedWaiterContext(a1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
  return v5;
}

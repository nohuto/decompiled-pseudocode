/*
 * XREFs of KiIpiSendRequestEx @ 0x1400D8CD0
 * Callers:
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 *     KxFlushNonGlobalTb @ 0x140063D58 (KxFlushNonGlobalTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KxFlushSingleTb @ 0x14010DF88 (KxFlushSingleTb.c)
 *     KxFlushEntireTb @ 0x1401590F4 (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x140201C50 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1400D8E10 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiSendRequest @ 0x140120590 (KiIpiSendRequest.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64),
        __int64 a8)
{
  int v9; // esi
  __int64 result; // rax
  unsigned int i; // ebx

  v9 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_3:
      result = (__int64)a7;
      if ( a7 )
        return a7(a8);
      return result;
    }
  }
  else if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  KiIpiSendRequest(a1, a2, v9, a4, a5, a6);
  if ( a7 )
    a7(a8);
  result = *(unsigned int *)(a1 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(i);
  }
  return result;
}
